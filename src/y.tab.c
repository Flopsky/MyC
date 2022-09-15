/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lang.y"


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



#line 108 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    TINT = 259,                    /* TINT  */
    ID = 260,                      /* ID  */
    AO = 261,                      /* AO  */
    AF = 262,                      /* AF  */
    PO = 263,                      /* PO  */
    PF = 264,                      /* PF  */
    PV = 265,                      /* PV  */
    VIR = 266,                     /* VIR  */
    RETURN = 267,                  /* RETURN  */
    VOID = 268,                    /* VOID  */
    EQ = 269,                      /* EQ  */
    IF = 270,                      /* IF  */
    ELSE = 271,                    /* ELSE  */
    WHILE = 272,                   /* WHILE  */
    AND = 273,                     /* AND  */
    OR = 274,                      /* OR  */
    NOT = 275,                     /* NOT  */
    DIFF = 276,                    /* DIFF  */
    EQUAL = 277,                   /* EQUAL  */
    SUP = 278,                     /* SUP  */
    INF = 279,                     /* INF  */
    PLUS = 280,                    /* PLUS  */
    MOINS = 281,                   /* MOINS  */
    STAR = 282,                    /* STAR  */
    DIV = 283,                     /* DIV  */
    DOT = 284,                     /* DOT  */
    ARR = 285,                     /* ARR  */
    UNA = 286                      /* UNA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define TINT 259
#define ID 260
#define AO 261
#define AF 262
#define PO 263
#define PF 264
#define PV 265
#define VIR 266
#define RETURN 267
#define VOID 268
#define EQ 269
#define IF 270
#define ELSE 271
#define WHILE 272
#define AND 273
#define OR 274
#define NOT 275
#define DIFF 276
#define EQUAL 277
#define SUP 278
#define INF 279
#define PLUS 280
#define MOINS 281
#define STAR 282
#define DIV 283
#define DOT 284
#define ARR 285
#define UNA 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "lang.y"

	struct ATTRIBUTE * att;

#line 227 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_TINT = 4,                       /* TINT  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_AO = 6,                         /* AO  */
  YYSYMBOL_AF = 7,                         /* AF  */
  YYSYMBOL_PO = 8,                         /* PO  */
  YYSYMBOL_PF = 9,                         /* PF  */
  YYSYMBOL_PV = 10,                        /* PV  */
  YYSYMBOL_VIR = 11,                       /* VIR  */
  YYSYMBOL_RETURN = 12,                    /* RETURN  */
  YYSYMBOL_VOID = 13,                      /* VOID  */
  YYSYMBOL_EQ = 14,                        /* EQ  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_OR = 19,                        /* OR  */
  YYSYMBOL_NOT = 20,                       /* NOT  */
  YYSYMBOL_DIFF = 21,                      /* DIFF  */
  YYSYMBOL_EQUAL = 22,                     /* EQUAL  */
  YYSYMBOL_SUP = 23,                       /* SUP  */
  YYSYMBOL_INF = 24,                       /* INF  */
  YYSYMBOL_PLUS = 25,                      /* PLUS  */
  YYSYMBOL_MOINS = 26,                     /* MOINS  */
  YYSYMBOL_STAR = 27,                      /* STAR  */
  YYSYMBOL_DIV = 28,                       /* DIV  */
  YYSYMBOL_DOT = 29,                       /* DOT  */
  YYSYMBOL_ARR = 30,                       /* ARR  */
  YYSYMBOL_UNA = 31,                       /* UNA  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_prog = 33,                      /* prog  */
  YYSYMBOL_func_list = 34,                 /* func_list  */
  YYSYMBOL_fun = 35,                       /* fun  */
  YYSYMBOL_fun_head = 36,                  /* fun_head  */
  YYSYMBOL_params = 37,                    /* params  */
  YYSYMBOL_vlist = 38,                     /* vlist  */
  YYSYMBOL_vir = 39,                       /* vir  */
  YYSYMBOL_fun_body = 40,                  /* fun_body  */
  YYSYMBOL_block = 41,                     /* block  */
  YYSYMBOL_decl_list = 42,                 /* decl_list  */
  YYSYMBOL_decl = 43,                      /* decl  */
  YYSYMBOL_var_decl = 44,                  /* var_decl  */
  YYSYMBOL_type = 45,                      /* type  */
  YYSYMBOL_typename = 46,                  /* typename  */
  YYSYMBOL_inst_list = 47,                 /* inst_list  */
  YYSYMBOL_pv = 48,                        /* pv  */
  YYSYMBOL_inst = 49,                      /* inst  */
  YYSYMBOL_ao = 50,                        /* ao  */
  YYSYMBOL_af = 51,                        /* af  */
  YYSYMBOL_aff = 52,                       /* aff  */
  YYSYMBOL_ret = 53,                       /* ret  */
  YYSYMBOL_cond = 54,                      /* cond  */
  YYSYMBOL_elsop = 55,                     /* elsop  */
  YYSYMBOL_bool_cond = 56,                 /* bool_cond  */
  YYSYMBOL_if = 57,                        /* if  */
  YYSYMBOL_else = 58,                      /* else  */
  YYSYMBOL_loop = 59,                      /* loop  */
  YYSYMBOL_while_cond = 60,                /* while_cond  */
  YYSYMBOL_while = 61,                     /* while  */
  YYSYMBOL_exp = 62,                       /* exp  */
  YYSYMBOL_app = 63,                       /* app  */
  YYSYMBOL_args = 64,                      /* args  */
  YYSYMBOL_arglist = 65                    /* arglist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  114

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    71,    71,    74,    75,    81,    84,    94,   107,   128,
     155,   164,   174,   177,   182,   187,   188,   191,   194,   198,
     202,   203,   208,   210,   213,   217,   218,   219,   220,   221,
     222,   223,   228,   234,   244,   267,   268,   277,   283,   284,
     287,   290,   293,   300,   303,   305,   312,   314,   318,   322,
     326,   330,   331,   332,   333,   338,   339,   344,   346,   348,
     349,   350,   356,   368,   369,   372,   373
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "TINT", "ID",
  "AO", "AF", "PO", "PF", "PV", "VIR", "RETURN", "VOID", "EQ", "IF",
  "ELSE", "WHILE", "AND", "OR", "NOT", "DIFF", "EQUAL", "SUP", "INF",
  "PLUS", "MOINS", "STAR", "DIV", "DOT", "ARR", "UNA", "$accept", "prog",
  "func_list", "fun", "fun_head", "params", "vlist", "vir", "fun_body",
  "block", "decl_list", "decl", "var_decl", "type", "typename",
  "inst_list", "pv", "inst", "ao", "af", "aff", "ret", "cond", "elsop",
  "bool_cond", "if", "else", "loop", "while_cond", "while", "exp", "app",
  "args", "arglist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -58,   -58,     3,     0,   -58,     2,   -58,   -58,   -58,
      10,    23,    17,   -58,   -58,   -58,    33,    18,    53,    51,
     -58,    47,   -58,   -58,     6,   -58,    14,   -58,    77,   -58,
     -58,    14,    14,   -58,    52,    60,   -58,   -58,    64,   -58,
      63,    63,   -58,    67,   -58,    75,   133,   -58,   -58,     0,
      14,    14,    85,    83,     7,   162,   -58,   -58,   -58,   -58,
      47,   -58,    84,   -58,   -58,    14,    64,    14,    64,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,   -58,
     -58,   151,    86,   -58,   162,   -58,   -58,    89,   -58,   -58,
     103,    80,   114,   -58,    92,   173,    61,    61,    61,    61,
       8,     8,   -58,   -58,    14,   -58,   -58,   -58,   -58,   -58,
      64,   -58,   -58,   -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    20,    21,     0,     2,     4,     0,    19,     1,     3,
       0,     0,     0,    16,     5,     6,     0,     0,     0,     0,
       7,     9,    13,    54,    52,    32,     0,    24,     0,    41,
      45,     0,     0,    15,     0,     0,    14,    31,    23,    16,
       0,     0,    29,     0,    30,     0,     0,    53,    12,     0,
      64,     0,    52,     0,     0,    35,    55,    46,    17,    11,
      18,    22,     0,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       8,    66,     0,    63,    34,    51,    36,     0,    33,    26,
       0,    39,     0,    43,    60,    61,    59,    58,    57,    56,
      47,    48,    49,    50,     0,    62,    10,    40,    42,    37,
       0,    44,    65,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,   -58,    94,   -58,    50,   -58,    40,   -58,    95,
     -58,   -58,   -58,   -11,   -58,   106,    -9,   -57,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -26,   -58,   -58,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    11,    16,    60,    49,    14,    18,
      19,    33,    34,     6,     7,    36,    37,    38,    39,    89,
      40,    41,    42,   109,    66,    43,   110,    44,    68,    45,
      46,    47,    82,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      53,    17,    55,     8,     1,    56,    57,    10,    35,    91,
      23,    93,    52,     2,    50,    26,    86,    23,    12,    52,
      51,     1,    26,    21,    81,    84,    15,    31,    53,    13,
       2,    63,    64,    32,    31,    77,    78,    79,    17,    90,
      32,    92,    20,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   113,    23,     1,    24,    25,    48,    26,
      22,    27,    58,    28,     2,    59,    29,    23,    30,    24,
      25,    31,    26,    27,    27,    65,    28,    32,    81,    29,
      23,    30,    52,    67,    31,    54,    75,    76,    77,    78,
      32,    88,    85,    50,   106,   105,   108,    31,     9,    80,
      87,    69,    70,    32,    71,    72,    73,    74,    75,    76,
      77,    78,   107,    71,    72,    73,    74,    75,    76,    77,
      78,    69,    70,   111,    71,    72,    73,    74,    75,    76,
      77,    78,    69,    70,    62,    71,    72,    73,    74,    75,
      76,    77,    78,    27,    61,   112,     0,     0,     0,     0,
       0,    69,    70,     0,    71,    72,    73,    74,    75,    76,
      77,    78,   104,     0,     0,     0,     0,     0,     0,    69,
      70,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    69,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78
};

static const yytype_int8 yycheck[] =
{
      26,    12,    28,     0,     4,    31,    32,     5,    19,    66,
       3,    68,     5,    13,     8,     8,     9,     3,     8,     5,
      14,     4,     8,     5,    50,    51,     9,    20,    54,     6,
      13,    40,    41,    26,    20,    27,    28,    46,    49,    65,
      26,    67,     9,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,   110,     3,     4,     5,     6,    11,     8,
       7,    10,    10,    12,    13,     5,    15,     3,    17,     5,
       6,    20,     8,    10,    10,     8,    12,    26,   104,    15,
       3,    17,     5,     8,    20,     8,    25,    26,    27,    28,
      26,     7,     9,     8,     5,     9,    16,    20,     4,    49,
      60,    18,    19,    26,    21,    22,    23,    24,    25,    26,
      27,    28,     9,    21,    22,    23,    24,    25,    26,    27,
      28,    18,    19,     9,    21,    22,    23,    24,    25,    26,
      27,    28,    18,    19,    39,    21,    22,    23,    24,    25,
      26,    27,    28,    10,    38,   104,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      18,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    18,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    13,    33,    34,    35,    45,    46,     0,    35,
       5,    36,     8,     6,    40,     9,    37,    45,    41,    42,
       9,     5,     7,     3,     5,     6,     8,    10,    12,    15,
      17,    20,    26,    43,    44,    45,    47,    48,    49,    50,
      52,    53,    54,    57,    59,    61,    62,    63,    11,    39,
       8,    14,     5,    62,     8,    62,    62,    62,    10,     5,
      38,    47,    41,    48,    48,     8,    56,     8,    60,    18,
      19,    21,    22,    23,    24,    25,    26,    27,    28,    48,
      37,    62,    64,    65,    62,     9,     9,    39,     7,    51,
      62,    49,    62,    49,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    11,     9,     5,     9,    16,    55,
      58,     9,    65,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    36,    36,    37,    37,
      38,    38,    39,    40,    41,    42,    42,    43,    44,    45,
      46,    46,    47,    47,    48,    49,    49,    49,    49,    49,
      49,    49,    50,    51,    52,    53,    53,    54,    55,    55,
      56,    57,    58,    59,    60,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    64,    64,    65,    65
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     3,     4,     4,     2,
       3,     1,     1,     3,     2,     2,     0,     2,     2,     1,
       1,     1,     2,     1,     1,     2,     3,     2,     2,     1,
       1,     1,     1,     1,     3,     2,     3,     4,     2,     0,
       3,     1,     1,     3,     3,     1,     2,     3,     3,     3,
       3,     3,     1,     1,     1,     2,     3,     3,     3,     3,
       3,     3,     4,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* prog: func_list  */
#line 71 "lang.y"
                               {}
#line 1364 "y.tab.c"
    break;

  case 3: /* func_list: func_list fun  */
#line 74 "lang.y"
                               {}
#line 1370 "y.tab.c"
    break;

  case 4: /* func_list: fun  */
#line 75 "lang.y"
                               {}
#line 1376 "y.tab.c"
    break;

  case 5: /* fun: type fun_head fun_body  */
#line 81 "lang.y"
                                    {printf("}\n");}
#line 1382 "y.tab.c"
    break;

  case 6: /* fun_head: ID PO PF  */
#line 84 "lang.y"
                               {
                                !included ? printf("#include \"PCode.h\"\n\n"): printf("\n");//si on a deja inclu, on inclue pas.
                                included=1;
                                (yyvsp[-2].att)->nb_param=0;
                                (yyvsp[-2].att)->type_val=_type;
                                set_fun_value(string_to_sid((yyvsp[-2].att)->name),(yyvsp[-2].att));
                                _type == INT ? printf("int "): printf("void ");
                                in_main = !strcmp((yyvsp[-2].att)->name,_main);
                                printf("%s(){\n",(yyvsp[-2].att)->name);
                                }
#line 1397 "y.tab.c"
    break;

  case 7: /* fun_head: ID PO params PF  */
#line 94 "lang.y"
                               {
                                included=1;
                                (yyvsp[-3].att)->nb_param=nb_param;//on indique le nb de param qu'a la fonctions
                                nb_param = 0;
                                (yyvsp[-3].att)->type_val=_type;
                                set_fun_value(string_to_sid((yyvsp[-3].att)->name),(yyvsp[-3].att));
                                in_main = !strcmp((yyvsp[-3].att)->name,_main);
                                in_main ? printf("int %s()\n{\n",(yyvsp[-3].att)->name): printf("void %s_pcode()\n{\n",(yyvsp[-3].att)->name) ;
                                printf("%s", print_fun);
                                strcpy(print_fun,"");
                                }
#line 1413 "y.tab.c"
    break;

  case 8: /* params: type ID vir params  */
#line 107 "lang.y"
                               {
                                (yyvsp[-2].att)->num_bloc=num_bloc;
                                set_position((yyvsp[-2].att));

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
                                set_symbol_value(string_to_sid((yyvsp[-2].att)->name),(yyvsp[-2].att));

                              }
#line 1439 "y.tab.c"
    break;

  case 9: /* params: type ID  */
#line 128 "lang.y"
                               {
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


                                  (yyvsp[0].att)->num_bloc=num_bloc;
                                  set_position((yyvsp[0].att));
                                  set_symbol_value(string_to_sid((yyvsp[0].att)->name),(yyvsp[0].att));

}
#line 1470 "y.tab.c"
    break;

  case 10: /* vlist: vlist vir ID  */
#line 155 "lang.y"
                               {
                                (yyvsp[0].att)->num_bloc=num_bloc;
                                set_position((yyvsp[0].att));
                                //printf("LOAD(0); ajout de %s \n", set_symbol_value(string_to_sid($3->name),$3)->name);
                                //show();
                                printf("LOAD(0);\n");
                                set_symbol_value(string_to_sid((yyvsp[0].att)->name),(yyvsp[0].att));

                              }
#line 1484 "y.tab.c"
    break;

  case 11: /* vlist: ID  */
#line 164 "lang.y"
                               {
                                  (yyvsp[0].att)->num_bloc=num_bloc;
                                  set_position((yyvsp[0].att));
                                  //printf("LOAD(0); ajout de %s \n", set_symbol_value(string_to_sid($1->name),$1)->name);
                                  printf("LOAD(0);\n");
                                  set_symbol_value(string_to_sid((yyvsp[0].att)->name),(yyvsp[0].att));

                                }
#line 1497 "y.tab.c"
    break;

  case 12: /* vir: VIR  */
#line 174 "lang.y"
                               {}
#line 1503 "y.tab.c"
    break;

  case 13: /* fun_body: AO block AF  */
#line 177 "lang.y"
                               {}
#line 1509 "y.tab.c"
    break;

  case 14: /* block: decl_list inst_list  */
#line 182 "lang.y"
                               {}
#line 1515 "y.tab.c"
    break;

  case 15: /* decl_list: decl_list decl  */
#line 187 "lang.y"
                               {}
#line 1521 "y.tab.c"
    break;

  case 16: /* decl_list: %empty  */
#line 188 "lang.y"
                               {}
#line 1527 "y.tab.c"
    break;

  case 17: /* decl: var_decl PV  */
#line 191 "lang.y"
                               {}
#line 1533 "y.tab.c"
    break;

  case 18: /* var_decl: type vlist  */
#line 194 "lang.y"
                               {}
#line 1539 "y.tab.c"
    break;

  case 19: /* type: typename  */
#line 198 "lang.y"
                               {}
#line 1545 "y.tab.c"
    break;

  case 20: /* typename: TINT  */
#line 202 "lang.y"
                                {_type = INT;}
#line 1551 "y.tab.c"
    break;

  case 21: /* typename: VOID  */
#line 203 "lang.y"
                                {_type = VOID;}
#line 1557 "y.tab.c"
    break;

  case 22: /* inst_list: inst inst_list  */
#line 208 "lang.y"
                            {}
#line 1563 "y.tab.c"
    break;

  case 23: /* inst_list: inst  */
#line 210 "lang.y"
                            {}
#line 1569 "y.tab.c"
    break;

  case 24: /* pv: PV  */
#line 213 "lang.y"
                              {}
#line 1575 "y.tab.c"
    break;

  case 25: /* inst: exp pv  */
#line 217 "lang.y"
                              {}
#line 1581 "y.tab.c"
    break;

  case 26: /* inst: ao block af  */
#line 218 "lang.y"
                              {}
#line 1587 "y.tab.c"
    break;

  case 27: /* inst: aff pv  */
#line 219 "lang.y"
                              {}
#line 1593 "y.tab.c"
    break;

  case 28: /* inst: ret pv  */
#line 220 "lang.y"
                              {}
#line 1599 "y.tab.c"
    break;

  case 29: /* inst: cond  */
#line 221 "lang.y"
                              {}
#line 1605 "y.tab.c"
    break;

  case 30: /* inst: loop  */
#line 222 "lang.y"
                              {}
#line 1611 "y.tab.c"
    break;

  case 31: /* inst: pv  */
#line 223 "lang.y"
                              {}
#line 1617 "y.tab.c"
    break;

  case 32: /* ao: AO  */
#line 228 "lang.y"
                              {
                                num_bloc++;
                                printf("ENTER_BLOCK(%d);\n", num_bloc);
                              }
#line 1626 "y.tab.c"
    break;

  case 33: /* af: AF  */
#line 234 "lang.y"
                              {
                                printf("EXIT_BLOCK(%d);\n", num_bloc);
                                remove_values_bloc(num_bloc);
                                num_bloc--;
                              }
#line 1636 "y.tab.c"
    break;

  case 34: /* aff: ID EQ exp  */
#line 244 "lang.y"
                              {
                                  attribute VarCourante = get_symbol_value((yyvsp[-2].att)->name);
                                  if (get_symbol_value((yyvsp[-2].att)->name)->num_bloc==num_bloc)
                                    printf("STORE(mp+%d);\n",get_symbol_value((yyvsp[-2].att)->name)->pos);
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
                                    printf("+%d)\n",get_symbol_value((yyvsp[-2].att)->name)->pos);
                                  }
                                  }
#line 1660 "y.tab.c"
    break;

  case 35: /* ret: RETURN exp  */
#line 267 "lang.y"
                              {in_main ? printf("STORE(mp);\nEXIT_MAIN;\n"):printf("return;\n\n");}
#line 1666 "y.tab.c"
    break;

  case 36: /* ret: RETURN PO PF  */
#line 268 "lang.y"
                              {}
#line 1672 "y.tab.c"
    break;

  case 37: /* cond: if bool_cond inst elsop  */
#line 277 "lang.y"
                             {no_else ? printf("Else:\n") : printf(""); no_else=1;}
#line 1678 "y.tab.c"
    break;

  case 38: /* elsop: else inst  */
#line 283 "lang.y"
                              {printf("Fin:\nNOP;\n");}
#line 1684 "y.tab.c"
    break;

  case 39: /* elsop: %empty  */
#line 284 "lang.y"
                              {}
#line 1690 "y.tab.c"
    break;

  case 40: /* bool_cond: PO exp PF  */
#line 287 "lang.y"
                              {}
#line 1696 "y.tab.c"
    break;

  case 41: /* if: IF  */
#line 290 "lang.y"
                              {_if=1;}
#line 1702 "y.tab.c"
    break;

  case 42: /* else: ELSE  */
#line 293 "lang.y"
                              { no_else = 0; //il y a bien un else
                                printf("GOTO (Fin);\n");
                                printf("Else:\n");}
#line 1710 "y.tab.c"
    break;

  case 43: /* loop: while while_cond inst  */
#line 300 "lang.y"
                              {printf("GOTO (Loop);\n"); printf("End:\n");}
#line 1716 "y.tab.c"
    break;

  case 44: /* while_cond: PO exp PF  */
#line 303 "lang.y"
                              {}
#line 1722 "y.tab.c"
    break;

  case 45: /* while: WHILE  */
#line 305 "lang.y"
                              {printf("Loop:\n"); _if = 0;}
#line 1728 "y.tab.c"
    break;

  case 46: /* exp: MOINS exp  */
#line 312 "lang.y"
                              {printf("SUBI;\n");}
#line 1734 "y.tab.c"
    break;

  case 47: /* exp: exp PLUS exp  */
#line 314 "lang.y"
                              {
                                (yyval.att)->int_val = (yyvsp[-2].att)->int_val + (yyvsp[0].att)->int_val;
                                printf("ADDI;\n");
                              }
#line 1743 "y.tab.c"
    break;

  case 48: /* exp: exp MOINS exp  */
#line 318 "lang.y"
                              {
                                (yyval.att)->int_val = (yyvsp[-2].att)->int_val - (yyvsp[0].att)->int_val;
                                printf("SUBI;\n");
                              }
#line 1752 "y.tab.c"
    break;

  case 49: /* exp: exp STAR exp  */
#line 322 "lang.y"
                              {
                                  (yyval.att)->int_val = (yyvsp[-2].att)->int_val * (yyvsp[0].att)->int_val;
                                  printf("MULTI;\n");
                              }
#line 1761 "y.tab.c"
    break;

  case 50: /* exp: exp DIV exp  */
#line 326 "lang.y"
                              {
                                  (yyval.att)->int_val = (yyvsp[-2].att)->int_val / (yyvsp[0].att)->int_val;
                                  printf("DIVI;\n");
}
#line 1770 "y.tab.c"
    break;

  case 51: /* exp: PO exp PF  */
#line 330 "lang.y"
                              {}
#line 1776 "y.tab.c"
    break;

  case 52: /* exp: ID  */
#line 331 "lang.y"
                              {in_main ? printf("LOAD(mp+%d); \n", get_symbol_value((yyvsp[0].att)->name)->pos):printf("");}
#line 1782 "y.tab.c"
    break;

  case 53: /* exp: app  */
#line 332 "lang.y"
                              {}
#line 1788 "y.tab.c"
    break;

  case 54: /* exp: NUM  */
#line 333 "lang.y"
                              {printf("LOADI(%d);\n", (yyvsp[0].att)->int_val);}
#line 1794 "y.tab.c"
    break;

  case 55: /* exp: NOT exp  */
#line 338 "lang.y"
                              {}
#line 1800 "y.tab.c"
    break;

  case 56: /* exp: exp INF exp  */
#line 339 "lang.y"
                              {
                                printf("LT;\n");

                                _if ? printf("IFN(Else);\n"): printf("IFN(End);\n");
                                }
#line 1810 "y.tab.c"
    break;

  case 57: /* exp: exp SUP exp  */
#line 344 "lang.y"
                              {printf("GT;\n");
                              _if ? printf("IFN(Else);\n"): printf("IFN(End);\n");}
#line 1817 "y.tab.c"
    break;

  case 58: /* exp: exp EQUAL exp  */
#line 346 "lang.y"
                              {printf("EQ;\n");
                              _if ? printf("IFN(Else);\n"): printf("IFN(End);\n");}
#line 1824 "y.tab.c"
    break;

  case 59: /* exp: exp DIFF exp  */
#line 348 "lang.y"
                              {}
#line 1830 "y.tab.c"
    break;

  case 60: /* exp: exp AND exp  */
#line 349 "lang.y"
                              {}
#line 1836 "y.tab.c"
    break;

  case 61: /* exp: exp OR exp  */
#line 350 "lang.y"
                              {}
#line 1842 "y.tab.c"
    break;

  case 62: /* app: ID PO args PF  */
#line 356 "lang.y"
                              {nb_param_appel_reel = get_fun_value(string_to_sid((yyvsp[-3].att)->name))->nb_param;
                                if (nb_param_appel_reel != nb_param_appel_ecrit)
                                  {
                                    printf("Le nombre de paramètre entré est incorrect\n");
                                    exit(EXIT_SUCCESS);
                                  }
                                else
                                  printf("ENTER_BLOCK(%d);\n%s_pcode();\nEXIT_BLOCK(%d);\n",nb_param_appel_reel,(yyvsp[-3].att)->name,nb_param_appel_reel);
                                  nb_param_appel_ecrit = 0;
                                }
#line 1857 "y.tab.c"
    break;

  case 63: /* args: arglist  */
#line 368 "lang.y"
                              {}
#line 1863 "y.tab.c"
    break;

  case 64: /* args: %empty  */
#line 369 "lang.y"
                              {}
#line 1869 "y.tab.c"
    break;

  case 65: /* arglist: exp VIR arglist  */
#line 372 "lang.y"
                              {nb_param_appel_ecrit++;}
#line 1875 "y.tab.c"
    break;

  case 66: /* arglist: exp  */
#line 373 "lang.y"
                              {nb_param_appel_ecrit++;}
#line 1881 "y.tab.c"
    break;


#line 1885 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 378 "lang.y"

int main () {

  /* Ici on peut ouvrir le fichier source, avec les messages
     d'erreur usuel si besoin, et rediriger l'entrée standard
     sur ce fichier pour lancer dessus la compilation.
   */

   //printf ("Compiling MyC source code into PCode (Version 2021) !\n\n");
   yyparse ();
   return 1;

}
