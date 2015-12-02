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
     TIPO_INTEIRO = 258,
     TIPO_FLOAT = 259,
     TIPO_DOUBLE = 260,
     TIPO_CHAR = 261,
     IDENTIFICADOR = 262,
     ATTR = 263,
     N_INTEIRO = 264,
     N_REAL = 265,
     N_CARACTERE = 266,
     PONTO_VIRGULA = 267,
     FINAL_LINHA = 268,
     MAIS = 269,
     MENOS = 270,
     VEZES = 271,
     DIVISAO = 272,
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
     WHILE = 288
   };
#endif
/* Tokens.  */
#define TIPO_INTEIRO 258
#define TIPO_FLOAT 259
#define TIPO_DOUBLE 260
#define TIPO_CHAR 261
#define IDENTIFICADOR 262
#define ATTR 263
#define N_INTEIRO 264
#define N_REAL 265
#define N_CARACTERE 266
#define PONTO_VIRGULA 267
#define FINAL_LINHA 268
#define MAIS 269
#define MENOS 270
#define VEZES 271
#define DIVISAO 272
#define MENOR 273
#define MENORIGUAL 274
#define MAIOR 275
#define MAIORIGUAL 276
#define IGUAL 277
#define DIFERENTE 278
#define E 279
#define OU 280
#define SE 281
#define SENAO 282
#define LEFT_PARENTHESIS 283
#define RIGHT_PARENTHESIS 284
#define LEFT_BRACKETS 285
#define RIGHT_BRACKETS 286
#define FOR 287
#define WHILE 288




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "compiler.y"
{
    char * strval;
    int intval;
}
/* Line 1529 of yacc.c.  */
#line 120 "compiler.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

