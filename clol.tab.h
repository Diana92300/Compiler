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

#ifndef YY_YY_CLOL_TAB_H_INCLUDED
# define YY_YY_CLOL_TAB_H_INCLUDED
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
    START_CLS = 258,               /* START_CLS  */
    STOP_CLS = 259,                /* STOP_CLS  */
    START_GBVARS = 260,            /* START_GBVARS  */
    STOP_GBVARS = 261,             /* STOP_GBVARS  */
    START_GBFNS = 262,             /* START_GBFNS  */
    STOP_GBFNS = 263,              /* STOP_GBFNS  */
    START_MAIN = 264,              /* START_MAIN  */
    STOP_MAIN = 265,               /* STOP_MAIN  */
    CLASS = 266,                   /* CLASS  */
    ID = 267,                      /* ID  */
    CONST = 268,                   /* CONST  */
    TYPE = 269,                    /* TYPE  */
    ASSIGN = 270,                  /* ASSIGN  */
    INT = 271,                     /* INT  */
    FLOAT = 272,                   /* FLOAT  */
    CHAR = 273,                    /* CHAR  */
    STRING = 274,                  /* STRING  */
    BOOL = 275,                    /* BOOL  */
    OP = 276,                      /* OP  */
    RETURN = 277,                  /* RETURN  */
    BOOL_OP = 278,                 /* BOOL_OP  */
    NOT = 279,                     /* NOT  */
    LOGIC_GATE = 280,              /* LOGIC_GATE  */
    IF = 281,                      /* IF  */
    FOR = 282,                     /* FOR  */
    WHILE = 283,                   /* WHILE  */
    CLASS_OP = 284,                /* CLASS_OP  */
    EVAL = 285,                    /* EVAL  */
    TYPEOF = 286,                  /* TYPEOF  */
    PRIO_OP = 287                  /* PRIO_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "clol.y"

     char* string;
     class Node* AST;

#line 101 "clol.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_CLOL_TAB_H_INCLUDED  */
