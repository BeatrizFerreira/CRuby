/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     LEFT_PARENTHESIS = 273,
     RIGHT_PARENTHESIS = 274
   };
#endif
/* Tokens.  */
#define TYPE_INT 258
#define TYPE_FLOAT 259
#define TYPE_DOUBLE 260
#define TYPE_CHAR 261
#define IDENTIFIER 262
#define ATTR 263
#define N_INTEGER 264
#define N_REAL 265
#define N_CHAR 266
#define END_LINE 267
#define SEMICOLON 268
#define PLUS 269
#define MINUS 270
#define TIMES 271
#define DIVISION 272
#define LEFT_PARENTHESIS 273
#define RIGHT_PARENTHESIS 274




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 22 "compiler.y"
{
    char * strval;
    int intval;
}
/* Line 1529 of yacc.c.  */
#line 92 "compiler.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

