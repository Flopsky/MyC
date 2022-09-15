/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 133 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
