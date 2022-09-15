/*
 *  Table des symboles.c
 *
 *  Created by Janin on 12/10/10.
 *  Copyright 2010 LaBRI. All rights reserved.
 *
 */

#include "Table_des_symboles.h"
#include "Attribute.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

/* The storage structure is implemented as a linked chain */

/* linked element def */

typedef struct elem {
	sid symbol_name;
	attribute symbol_value;
	struct elem * next;
} elem;

/* linked chain initial element */
static elem * storage=NULL;
static elem * stor_fun=NULL;

/* get the symbol value of symb_id from the symbol table */
attribute get_symbol_value(sid symb_id) {
	elem * tracker=storage;

	/* look into the linked list for the symbol value */
	while (tracker) {
		if (tracker -> symbol_name == symb_id) return tracker -> symbol_value;
		tracker = tracker -> next;
	}

	/* if not found does cause an error */
	fprintf(stderr,"Error : symbol %s is not a valid defined symbol\n",(char *) symb_id);
	exit(-1);
};

/* set the value of symbol symb_id to value */
attribute set_symbol_value(sid symb_id,attribute value) {

	elem * tracker;

	/* look for the presence of symb_id in storage */

	tracker = storage;
	while (tracker) {
		if (tracker -> symbol_name == symb_id && get_symbol_value(symb_id)->num_bloc==value->num_bloc) {
			tracker -> symbol_value = value;
			return tracker -> symbol_value;
		}
		tracker = tracker -> next;
	}

	/* otherwise insert it at head of storage with proper value */

	tracker = malloc(sizeof(elem));
	tracker -> symbol_name = symb_id;
	tracker -> symbol_value = value;
	tracker -> next = storage;
	storage = tracker;
	return storage -> symbol_value;
}

/*
//test si les variables sont bien ajouté au storage et leur valeur avec
void show(){
	struct elem * track = storage;
	while(track)
	{
		printf("%s->%d ", track->symbol_name, track->symbol_value->int_val);
		track=track->next;
	}
	printf("\n");
}
*/
/////////////////////////////////////////////////////////////////////
//Table des fonctions///////////////////////////////////////////////
void remove_values_bloc(int num_bloc){ //en sortant d'un bloc, on sort ses variable de la pile
		struct elem * tracker = storage;
		while(tracker && tracker->symbol_value->num_bloc==num_bloc){
			free(tracker->symbol_value);
			tracker=tracker->next;
		}
		storage=tracker;
}


void set_position(attribute attr){
	if (storage)
	{ //check si le storage a au moin un attribut
		if (attr->num_bloc==storage->symbol_value->num_bloc){
			attr->pos=(storage->symbol_value->pos)+1;
		}
		else{
			attr->pos=0;
		}
	}
	else{
		attr->pos=0;
	}
}

/////////////////////////////////////////////
/////copier une chaine a dans une chaine b en ecraant a ou b
///la valeur retourner doit etre stocker dans a ou b au choix

/*char * append(char * a, char *b){
  int lena = strlen(a);
  int lenb = strlen(b);
  char * final = malloc((strlen(a)+strlen(b)-1)*sizeof(char));
  for(int i=0; i<lena; i++)
  {
    final[i]=a[i];
  }
  for(int j = 0; j<lenb; j++)
  {
    final[lena+j] = b[j];
  }
  final[lenb+lena-1]='\0';
  return final;
}
*/

//////////////////////////////////////////////////////////////
//////table des fonctions////////////////////////////////////
/* set the value of symbol symb_id to value */

attribute get_fun_value(sid symb_id) {
	elem * tracker=stor_fun;

	/* look into the linked list for the symbol value */
	while (tracker) {
		if (tracker -> symbol_name == symb_id) return tracker -> symbol_value;
		tracker = tracker -> next;
	}

	/* if not found does cause an error */
	fprintf(stderr,"Error : function %s is not a valid defined function\n",(char *) symb_id);
	exit(-1);
};



attribute set_fun_value(sid symb_id,attribute value) {

	elem * tracker;

	/* look for the presence of symb_id in storage */

	tracker = stor_fun; //--changement--
	while (tracker) {
		if (tracker -> symbol_name == symb_id) {
			tracker -> symbol_value = value;
			return tracker -> symbol_value;
		}
		tracker = tracker -> next;
	}

	/* otherwise insert it at head of storage with proper value */

	tracker = malloc(sizeof(elem));
	tracker -> symbol_name = symb_id;
	tracker -> symbol_value = value;
	tracker -> next = stor_fun;
	stor_fun= tracker;
	return stor_fun -> symbol_value;
}
