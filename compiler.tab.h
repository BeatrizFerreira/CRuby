/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_COMPILER_TAB_H_INCLUDED
# define YY_YY_COMPILER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TYPE_INT = 258,
    TYPE_FLOAT = 259,
    TYPE_DOUBLE = 260,
    TYPE_CHAR = 261,
    IDENTIFIER = 262,
    ATTR = 263,
    N_INTEGER = 264,
    N_REAL = 265,
    N_CHAR = 266,
    END_LINE = 267,
    SEMICOLON = 268,
    PLUS = 269,
    MINUS = 270,
    TIMES = 271,
    DIVISION = 272,
    MENOR = 273,
    MENORIGUAL = 274,
    MAIOR = 275,
    MAIORIGUAL = 276,
    IGUAL = 277,
    DIFERENTE = 278,
    E = 279,
    OU = 280,
    SE = 281,
    SENAO = 282,
    LEFT_PARENTHESIS = 283,
    RIGHT_PARENTHESIS = 284,
    LEFT_BRACKETS = 285,
    RIGHT_BRACKETS = 286,
    FOR = 287,
    WHILE = 288,
    REFUSE = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 16 "compiler.y" /* yacc.c:1909  */

    char * strval;
    int intval;

#line 94 "compiler.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */
