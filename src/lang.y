%{

#include "Table_des_symboles.h"
#include "Attribute.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();

void yyerror (char* s) {
  printf ("%s\n",s);
  }

int pos = 0;
int _if = 1;
int num_bloc = -1;
int _type = 0;
int included = 0; //savoir si PCode.h est deja inclus ou pas
int nb_param = 0; // compte le nb de paramètre d'une fonction au moment de sa détection.
char * _main = "main";
int in_main = 1;

int nb_param_appel_reel = 0 ; //sert a verifié si le bon nombre de paramètre est entré
int nb_param_appel_ecrit = 0 ;

char  print_fun[300] = "";
int i=0;
char tmp[40][100];

int no_else = 1;


%}

%union {
	struct ATTRIBUTE * att;
}

%token <att> NUM
%token TINT
%token <att> ID
%token AO AF PO PF PV VIR
%token RETURN VOID EQ
%token <att> IF ELSE WHILE

%token <att> AND OR NOT DIFF EQUAL SUP INF
%token PLUS MOINS STAR DIV
%token DOT ARR

%left OR                       // higher priority on ||
%left AND                      // higher priority on &&
%left DIFF EQUAL SUP INF       // higher priority on comparison
%left PLUS MOINS               // higher priority on + -
%left STAR DIV                 // higher priority on * /
%left DOT ARR                  // higher priority on . and ->
%nonassoc UNA                  // highest priority on unary operator
%nonassoc ELSE


%start prog

// liste de tous les non terminaux dont vous voulez manipuler l'attribut
%type <att> exp  typename


%%

prog : func_list               {}
;

func_list : func_list fun      {}
| fun                          {}
;


// I. Functions

fun : type fun_head fun_body        {printf("}\n");}
;

fun_head : ID PO PF            {
                                !included ? printf("#include \"PCode.h\"\n\n"): printf("\n");//si on a deja inclu, on inclue pas.
                                included=1;
                                $1->nb_param=0;
                                $1->type_val=_type;
                                set_fun_value(string_to_sid($1->name),$1);
                                _type == INT ? printf("int "): printf("void ");
                                in_main = !strcmp($1->name,_main);
                                printf("%s(){\n",$1->name);
                                } // erreur si profondeur diff zero
| ID PO params PF              {
                                included=1;
                                $1->nb_param=nb_param;//on indique le nb de param qu'a la fonctions
                                nb_param = 0;
                                $1->type_val=_type;
                                set_fun_value(string_to_sid($1->name),$1);
                                in_main = !strcmp($1->name,_main);
                                in_main ? printf("int %s()\n{\n",$1->name): printf("void %s_pcode()\n{\n",$1->name) ;
                                printf("%s", print_fun);
                                strcpy(print_fun,"");
                                }
;

params: type ID vir params     {
                                $2->num_bloc=num_bloc;
                                set_position($2);

                                if ((nb_param-2) > 0)
                                {
                                  snprintf(tmp[i], sizeof(tmp[i]), "LOAD(mp -1 + %d);\n",(nb_param-2));
                                  nb_param++;
                                  strcat(print_fun,tmp[i]);
                                  i++;
                                }
                                else{
                                  snprintf(tmp[i], sizeof(tmp[i]), "LOAD(mp -1  %d);\n",(nb_param-2));
                                  nb_param++;
                                  strcat(print_fun,tmp[i]);
                                  i++;

                                }
                                set_symbol_value(string_to_sid($2->name),$2);

                              }
| type ID                      {
                                  !included ? printf("#include \"PCode.h\"\n\n"): printf("\n");//si on a deja inclu, on inclue pas.
                                  //printf("%s\n", _main);

                                  //on stocke ce qu'on doit écrire dans print_fun;
                                  if ((nb_param-2) > 0)
                                  {
                                    snprintf(tmp[i], sizeof(tmp[i]), "LOAD(mp -1 + %d);\n",(nb_param-2));
                                    nb_param++;
                                    strcat(print_fun,tmp[i]);
                                    i++;
                                  }
                                  else{
                                    snprintf(tmp[i], sizeof(tmp[i]), "LOAD(mp -1  %d);\n",(nb_param-2));
                                    nb_param++;
                                    strcat(print_fun,tmp[i]);
                                    i++;

                                  }


                                  $2->num_bloc=num_bloc;
                                  set_position($2);
                                  set_symbol_value(string_to_sid($2->name),$2);

}

vlist: vlist vir ID            {
                                $3->num_bloc=num_bloc;
                                set_position($3);
                                //printf("LOAD(0); ajout de %s \n", set_symbol_value(string_to_sid($3->name),$3)->name);
                                //show();
                                printf("LOAD(0);\n");
                                set_symbol_value(string_to_sid($3->name),$3);

                              }
| ID                           {
                                  $1->num_bloc=num_bloc;
                                  set_position($1);
                                  //printf("LOAD(0); ajout de %s \n", set_symbol_value(string_to_sid($1->name),$1)->name);
                                  printf("LOAD(0);\n");
                                  set_symbol_value(string_to_sid($1->name),$1);

                                }
;

vir : VIR                      {}
;

fun_body : AO block AF         {}
;

// Block
block:
decl_list inst_list            {}
;

// I. Declarations

decl_list : decl_list decl     {}
|                              {}
;

decl: var_decl PV              {}
;

var_decl : type vlist          {}
;

type
: typename                     {}
;

typename
: TINT                          {_type = INT;}
| VOID                          {_type = VOID;}
;

// II. Intructions

inst_list: inst inst_list   {}

| inst                      {}
;

pv : PV                       {}
;

inst:
exp pv                        {}
| ao block af                 {}
| aff pv                      {}
| ret pv                      {}
| cond                        {}
| loop                        {}
| pv                          {}
;

// Accolades pour gerer l'entrée et la sortie d'un sous-bloc

ao : AO                       {
                                num_bloc++;
                                printf("ENTER_BLOCK(%d);\n", num_bloc);
                              }
;

af : AF                       {
                                printf("EXIT_BLOCK(%d);\n", num_bloc);
                                remove_values_bloc(num_bloc);
                                num_bloc--;
                              }//reste à faire le %d y a un pb et gérer la pile
;


// II.1 Affectations

aff : ID EQ exp               {
                                  attribute VarCourante = get_symbol_value($1->name);
                                  if (get_symbol_value($1->name)->num_bloc==num_bloc)
                                    printf("STORE(mp+%d);\n",get_symbol_value($1->name)->pos);
                                  else
                                  {
                                    printf("STORE(");
                                    for(int i = VarCourante->num_bloc; i<num_bloc; i++)
                                      {
                                          printf("stack[");
                                      }
                                    printf("mp");
                                    for(int i = VarCourante->num_bloc; i<num_bloc; i++)
                                      {
                                          printf("-1]");
                                      }
                                    printf("+%d)\n",get_symbol_value($1->name)->pos);
                                  }
                                  }
;


// II.2 Return
ret : RETURN exp              {in_main ? printf("STORE(mp);\nEXIT_MAIN;\n"):printf("return;\n\n");}//on laisse EXIT_MAIN ici pour le moment
| RETURN PO PF                {}
;

// II.3. Conditionelles
//           N.B. ces rêgles génèrent un conflit déclage reduction
//           qui est résolu comme on le souhaite par un décalage (shift)
//           avec ELSE en entrée (voir y.output)

cond :
if bool_cond inst elsop      {no_else ? printf("Else:\n") : printf(""); no_else=1;};
;

// la regle avec else vient avant celle avec vide pour induire une resolution
// adequate du conflit shift / reduce avec ELSE en entrée

elsop : else inst             {printf("Fin:\nNOP;\n");}
|                             {}
;

bool_cond : PO exp PF         {}
;

if : IF                       {_if=1;}
;

else : ELSE                   { no_else = 0; //il y a bien un else
                                printf("GOTO (Fin);\n");
                                printf("Else:\n");}
;

// II.4. Iterations

loop : while while_cond inst  {printf("GOTO (Loop);\n"); printf("End:\n");}
;

while_cond : PO exp PF        {}

while : WHILE                 {printf("Loop:\n"); _if = 0;}
;


// II.3 Expressions
exp
// II.3.1 Exp. arithmetiques
: MOINS exp %prec UNA         {printf("SUBI;\n");}
         // -x + y lue comme (- x) + y  et pas - (x + y)
| exp PLUS exp                {
                                $$->int_val = $1->int_val + $3->int_val;
                                printf("ADDI;\n");
                              }
| exp MOINS exp               {
                                $$->int_val = $1->int_val - $3->int_val;
                                printf("SUBI;\n");
                              }
| exp STAR exp                {
                                  $$->int_val = $1->int_val * $3->int_val;
                                  printf("MULTI;\n");
                              }
| exp DIV exp                 {
                                  $$->int_val = $1->int_val / $3->int_val;
                                  printf("DIVI;\n");
}
| PO exp PF                   {}
| ID                          {in_main ? printf("LOAD(mp+%d); \n", get_symbol_value($1->name)->pos):printf("");}
| app                         {}
| NUM                         {printf("LOADI(%d);\n", $1->int_val);}


// II.3.2. Booléens

| NOT exp %prec UNA           {}
| exp INF exp                 {
                                printf("LT;\n");

                                _if ? printf("IFN(Else);\n"): printf("IFN(End);\n");
                                }
| exp SUP exp                 {printf("GT;\n");
                              _if ? printf("IFN(Else);\n"): printf("IFN(End);\n");}
| exp EQUAL exp               {printf("EQ;\n");
                              _if ? printf("IFN(Else);\n"): printf("IFN(End);\n");}
| exp DIFF exp                {}
| exp AND exp                 {}
| exp OR exp                  {}

;

// II.4 Applications de fonctions

app : ID PO args PF           {nb_param_appel_reel = get_fun_value(string_to_sid($1->name))->nb_param;
                                if (nb_param_appel_reel != nb_param_appel_ecrit)
                                  {
                                    printf("Le nombre de paramètre entré est incorrect\n");
                                    exit(EXIT_SUCCESS);
                                  }
                                else
                                  printf("ENTER_BLOCK(%d);\n%s_pcode();\nEXIT_BLOCK(%d);\n",nb_param_appel_reel,$1->name,nb_param_appel_reel);
                                  nb_param_appel_ecrit = 0;
                                }
;

args :  arglist               {}
|                             {}
;

arglist : exp VIR arglist     {nb_param_appel_ecrit++;}
| exp                         {nb_param_appel_ecrit++;}
;



%%
int main () {

  /* Ici on peut ouvrir le fichier source, avec les messages
     d'erreur usuel si besoin, et rediriger l'entrée standard
     sur ce fichier pour lancer dessus la compilation.
   */

   //printf ("Compiling MyC source code into PCode (Version 2021) !\n\n");
   yyparse ();
   return 1;

}
