/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     PARENTESIS_ESQUERDO = 283,
     PARENTESIS_DIREITO = 284,
     CHAVES_ESQUERDA = 285,
     CHAVES_DIREITA = 286,
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
#define PARENTESIS_ESQUERDO 283
#define PARENTESIS_DIREITO 284
#define CHAVES_ESQUERDA 285
#define CHAVES_DIREITA 286
#define FOR 287
#define WHILE 288




/* Copy the first part of user declarations.  */
#line 1 "compiler.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_simbolos.h"

char condicao[100][100];
    
int contador_for = 0;
int contador_tab = 0;

extern FILE *yyin;
extern char* yytext;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "compiler.y"
{
    char * strval;
    int intval;
}
/* Line 193 of yacc.c.  */
#line 182 "compiler.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 195 "compiler.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   199

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    12,    15,    16,
      19,    21,    22,    25,    27,    28,    33,    35,    36,    37,
      45,    46,    47,    54,    56,    58,    60,    62,    64,    66,
      67,    72,    74,    76,    78,    80,    82,    84,    88,    89,
      90,    95,    96,   101,   102,   107,   108,   113,   114,   119,
     120,   125,   126,   131,   132,   137,   138,   143,   144,   149,
     150,   151,   156,   157,   162,   163,   168,   169,   174,   175,
     180,   181,   186,   187,   192,   193,   198,   199,   204,   205,
     210,   211,   217,   218,   222,   223,   227,   228,   234,   236,
     237,   240,   241,   247,   250,   255,   256,   263,   264,   265,
     266,   277,   278,   279,   284,   285,   291,   292,   302,   303,
     306,   307,   308,   314,   317,   322,   328,   332,   333,   336,
     339,   341,   343,   346,   348,   351,   352,   356,   357,   361,
     363,   365,   367
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,    35,    36,    -1,    -1,    37,    -1,    13,
      -1,    -1,    38,    42,    -1,    -1,    39,    47,    -1,    40,
      -1,    -1,    41,   103,    -1,    83,    -1,    -1,   110,     7,
      43,    12,    -1,    44,    -1,    -1,    -1,   110,     7,    45,
       8,    46,    50,    12,    -1,    -1,    -1,     7,    48,     8,
      49,    50,    12,    -1,     9,    -1,    10,    -1,    11,    -1,
       7,    -1,    65,    -1,    70,    -1,    -1,    28,    51,    50,
      29,    -1,     9,    -1,    10,    -1,    11,    -1,     7,    -1,
      53,    -1,    58,    -1,    28,    52,    29,    -1,    -1,    -1,
      52,    14,    54,    52,    -1,    -1,    52,    15,    55,    52,
      -1,    -1,    52,    16,    56,    52,    -1,    -1,    52,    17,
      57,    52,    -1,    -1,    52,    18,    59,    52,    -1,    -1,
      52,    19,    60,    52,    -1,    -1,    52,    20,    61,    52,
      -1,    -1,    52,    21,    62,    52,    -1,    -1,    52,    22,
      63,    52,    -1,    -1,    52,    23,    64,    52,    -1,    -1,
      -1,    50,    14,    66,    50,    -1,    -1,    50,    15,    67,
      50,    -1,    -1,    50,    16,    68,    50,    -1,    -1,    50,
      17,    69,    50,    -1,    -1,    50,    18,    71,    50,    -1,
      -1,    50,    19,    72,    50,    -1,    -1,    50,    20,    73,
      50,    -1,    -1,    50,    21,    74,    50,    -1,    -1,    50,
      22,    75,    50,    -1,    -1,    50,    23,    76,    50,    -1,
      -1,    26,    78,    28,   105,    29,    -1,    -1,    27,    80,
     103,    -1,    -1,    27,    81,    37,    -1,    -1,    27,    82,
      30,   104,    31,    -1,    93,    -1,    -1,    84,    87,    -1,
      -1,    33,    86,    28,   105,    29,    -1,    85,    37,    -1,
      85,    30,   104,    31,    -1,    -1,    32,    28,    98,    12,
      29,    89,    -1,    -1,    -1,    -1,    32,    28,    98,    90,
      91,   106,    12,    92,   100,    29,    -1,    -1,    -1,    88,
      94,    37,    95,    -1,    -1,    88,    30,    96,   104,    31,
      -1,    -1,    32,    28,    98,    12,    29,    30,    97,   104,
      31,    -1,    -1,    99,    47,    -1,    -1,    -1,     7,   101,
       8,   102,    52,    -1,    77,    37,    -1,    77,    30,   104,
      31,    -1,    77,    30,   104,    31,    79,    -1,    77,    37,
      79,    -1,    -1,    37,   104,    -1,    13,   104,    -1,     9,
      -1,    70,    -1,    70,   107,    -1,    70,    -1,    70,   107,
      -1,    -1,    24,   108,   105,    -1,    -1,   109,    25,   105,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    34,    37,    38,    42,    42,    43,    43,
      44,    48,    48,    49,    53,    53,    54,    58,    58,    58,
      62,    62,    62,    66,    67,    68,    69,    70,    71,    72,
      72,    76,    77,    78,    79,    80,    81,    82,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     118,   118,   121,   121,   123,   123,   125,   125,   129,   130,
     130,   134,   134,   138,   139,   143,   143,   145,   145,   145,
     145,   149,   149,   149,   151,   151,   153,   153,   157,   157,
     161,   161,   161,   165,   167,   169,   171,   174,   175,   176,
     180,   181,   182,   186,   187,   191,   191,   192,   192,   196,
     197,   198,   199
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIPO_INTEIRO", "TIPO_FLOAT",
  "TIPO_DOUBLE", "TIPO_CHAR", "IDENTIFICADOR", "ATTR", "N_INTEIRO",
  "N_REAL", "N_CARACTERE", "PONTO_VIRGULA", "FINAL_LINHA", "MAIS", "MENOS",
  "VEZES", "DIVISAO", "MENOR", "MENORIGUAL", "MAIOR", "MAIORIGUAL",
  "IGUAL", "DIFERENTE", "E", "OU", "SE", "SENAO", "PARENTESIS_ESQUERDO",
  "PARENTESIS_DIREITO", "CHAVES_ESQUERDA", "CHAVES_DIREITA", "FOR",
  "WHILE", "$accept", "Entrada", "Linha", "comando", "@1", "@2",
  "laco_e_condicional", "@3", "declaracao", "@4", "declaracao_atribuicao",
  "@5", "@6", "atribuicao", "@7", "@8", "expressao", "@9",
  "laco_expressao", "laco_operacao_matematica", "@10", "@11", "@12", "@13",
  "laco_comparador", "@14", "@15", "@16", "@17", "@18", "@19",
  "operacao_matematica", "@20", "@21", "@22", "@23", "comparador", "@24",
  "@25", "@26", "@27", "@28", "@29", "declaracao_if", "@30",
  "declaracao_else", "@31", "@32", "@33", "laco", "@34",
  "declaracao_while", "@35", "while", "declaracao_for", "@36", "@37",
  "@38", "@39", "comando_for", "@40", "@41", "@42", "@43",
  "laco_for_primeira_parte", "@44", "laco_for_ultima_parte", "@45", "@46",
  "condicional", "comandos_multiplos", "condicionais_multiplos",
  "laco_condicionais_multiplos", "booleanas", "@47", "@48", "tipo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    35,    36,    36,    38,    37,    39,    37,
      37,    41,    40,    40,    43,    42,    42,    45,    46,    44,
      48,    49,    47,    50,    50,    50,    50,    50,    50,    51,
      50,    52,    52,    52,    52,    52,    52,    52,    53,    54,
      53,    55,    53,    56,    53,    57,    53,    59,    58,    60,
      58,    61,    58,    62,    58,    63,    58,    64,    58,    65,
      66,    65,    67,    65,    68,    65,    69,    65,    71,    70,
      72,    70,    73,    70,    74,    70,    75,    70,    76,    70,
      78,    77,    80,    79,    81,    79,    82,    79,    83,    84,
      83,    86,    85,    87,    87,    89,    88,    90,    91,    92,
      88,    94,    95,    93,    96,    93,    97,    93,    99,    98,
     101,   102,   100,   103,   103,   103,   103,   104,   104,   104,
     105,   105,   105,   106,   106,   108,   107,   109,   107,   110,
     110,   110,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     0,     2,     0,     2,
       1,     0,     2,     1,     0,     4,     1,     0,     0,     7,
       0,     0,     6,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     1,     1,     1,     1,     1,     3,     0,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     5,     0,     3,     0,     3,     0,     5,     1,     0,
       2,     0,     5,     2,     4,     0,     6,     0,     0,     0,
      10,     0,     0,     4,     0,     5,     0,     9,     0,     2,
       0,     0,     5,     2,     4,     5,     3,     0,     2,     2,
       1,     1,     2,     1,     2,     0,     3,     0,     3,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     6,     1,     5,     0,     2,     4,     0,     0,    10,
       0,    13,     0,   101,    88,   108,   129,   130,   131,   132,
       7,    16,     0,    20,     9,    80,     6,    12,    91,     6,
      90,   104,     6,    97,     0,    14,     0,     0,     6,   113,
       0,     6,    93,     6,   102,     0,    98,   109,     0,     0,
      21,    59,     6,     6,     0,    84,   116,    59,     0,     0,
     103,    95,    59,    15,    18,    59,    26,    23,    24,    25,
      29,     0,    27,    28,     0,   119,   118,   114,     0,     6,
       0,     0,    94,   105,   106,    96,    23,    28,     0,    59,
       0,    28,    59,    60,    62,    64,    66,    68,    70,    72,
      74,    76,    78,   125,   122,     0,    81,   115,    83,    85,
       6,    92,     6,   124,    99,     0,    22,     0,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
       0,     0,     0,    19,    30,    61,    63,    65,    67,    69,
      71,    73,    75,    77,    79,   126,   128,    87,   107,   110,
       0,     0,   100,   111,    38,    34,    31,    32,    33,    38,
     112,    35,    36,     0,    39,    41,    43,    45,    47,    49,
      51,    53,    55,    57,    37,    38,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    40,    42,    44,    46,    48,
      50,    52,    54,    56,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,    53,     7,     8,     9,    10,    20,    48,
      21,    49,    89,    24,    36,    65,    71,    92,   160,   161,
     175,   176,   177,   178,   162,   179,   180,   181,   182,   183,
     184,    72,   118,   119,   120,   121,    91,   122,   123,   124,
     125,   126,   127,    26,    37,    56,    78,    79,    80,    11,
      12,    29,    40,    30,    13,    85,    46,    62,   132,    14,
      32,    60,    43,   112,    33,    34,   150,   151,   154,    27,
      54,    74,    88,   104,   128,   105,    22
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -83
static const yytype_int16 yypact[] =
{
     -83,    11,   -83,   -83,   -22,   -83,   -83,   106,     2,   -83,
     -14,   -83,   -10,    -4,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,    25,   -83,   -83,   -83,    15,   -83,   -83,    59,
     -83,   -83,     3,    22,     2,    38,    60,    39,     7,    23,
      41,     7,   -83,     7,   -83,    46,   -83,   -83,    69,    63,
     -83,    42,     7,     7,    51,   -11,   -83,    42,    52,    82,
     -83,    84,    77,   -83,   -83,    77,   -83,    -8,   -83,   -83,
     -83,   166,   -83,    91,    61,   -83,   -83,    23,   -14,     3,
      87,    89,   -83,   -83,   -83,   -83,   -83,    30,   107,    77,
     144,   -83,    77,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,    96,   -83,   -83,   -83,   -83,
       7,   -83,     7,   -83,   -83,   156,   -83,   112,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    42,    42,
      92,    93,   115,   -83,   -83,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   -83,   -83,   -83,   -83,   -83,
     108,   130,   -83,   -83,    97,   -83,   -83,   -83,   -83,    97,
     176,   -83,   -83,   128,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -83,    -1,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   102,   -83,   -83,   -62,   -83,   -82,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -49,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,    62,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,    74,
     -36,   -56,   -83,    53,   -83,   -83,   -83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -128
static const yytype_int16 yytable[] =
{
       6,    81,    73,    90,  -120,    58,    15,    59,    73,    23,
      -8,     2,    25,    87,    -8,   -82,    75,    76,    -8,   -86,
      52,  -120,    -8,    28,     3,    39,    31,   115,    42,   -11,
     117,    44,    35,   -11,    45,     4,   -89,   -11,  -117,     4,
     -89,   -11,  -123,     4,   -89,    38,   -17,     4,   -89,    66,
      55,    67,    68,    69,   103,  -127,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -8,    51,    50,    57,
      70,    64,   145,   146,   130,    61,   131,   163,   109,    73,
      73,    63,    77,    82,    66,   -11,    86,    68,    69,    41,
     106,     4,   -89,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,  -121,   155,    70,   156,   157,   158,    16,
      17,    18,    19,    83,    84,   103,  -127,   110,   111,   114,
    -121,   129,   149,   147,   148,   159,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    47,   152,   153,   107,
     113,   134,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   108,     0,     0,     0,   116,   174,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   133,     0,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173
};

static const yytype_int16 yycheck[] =
{
       1,    57,    51,    65,    12,    41,    28,    43,    57,     7,
       7,     0,    26,    62,     7,    26,    52,    53,     7,    30,
      13,    29,     7,    33,    13,    26,    30,    89,    29,    26,
      92,    32,     7,    26,    12,    32,    33,    26,    31,    32,
      33,    26,    12,    32,    33,    30,     8,    32,    33,     7,
      27,     9,    10,    11,    24,    25,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     7,    28,     8,    28,
      28,     8,   128,   129,   110,    29,   112,   159,    79,   128,
     129,    12,    31,    31,     7,    26,     9,    10,    11,    30,
      29,    32,    33,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    12,     7,    28,     9,    10,    11,     3,
       4,     5,     6,    31,    30,    24,    25,    30,    29,    12,
      29,    25,     7,    31,    31,    28,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    34,    29,     8,    77,
      87,    29,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    78,    -1,    -1,    -1,    12,    29,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,     0,    13,    32,    36,    37,    38,    39,    40,
      41,    83,    84,    88,    93,    28,     3,     4,     5,     6,
      42,    44,   110,     7,    47,    26,    77,   103,    33,    85,
      87,    30,    94,    98,    99,     7,    48,    78,    30,    37,
      86,    30,    37,    96,    37,    12,    90,    47,    43,    45,
       8,    28,    13,    37,   104,    27,    79,    28,   104,   104,
      95,    29,    91,    12,     8,    49,     7,     9,    10,    11,
      28,    50,    65,    70,   105,   104,   104,    31,    80,    81,
      82,   105,    31,    31,    30,    89,     9,    70,   106,    46,
      50,    70,    51,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   107,   109,    29,    79,   103,    37,
      30,    29,    97,   107,    12,    50,    12,    50,    66,    67,
      68,    69,    71,    72,    73,    74,    75,    76,   108,    25,
     104,   104,    92,    12,    29,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,   105,   105,    31,    31,     7,
     100,   101,    29,     8,   102,     7,     9,    10,    11,    28,
      52,    53,    58,    52,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    29,    54,    55,    56,    57,    59,
      60,    61,    62,    63,    64,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 42 "compiler.y"
    {InsereTabsSaida(&saida, contador_tab);;}
    break;

  case 8:
#line 43 "compiler.y"
    {InsereTabsSaida(&saida, contador_tab);;}
    break;

  case 11:
#line 48 "compiler.y"
    {InsereTabsSaida(&saida, contador_tab);;}
    break;

  case 14:
#line 53 "compiler.y"
    {InsereNaSaida(&saida, ((yyvsp[(2) - (2)].strval)), linhas); InsereNaSaida(&saida, " = 0\n", linhas);;}
    break;

  case 15:
#line 53 "compiler.y"
    {InserirSimbolo(&tabela_simbolos, (yyvsp[(2) - (4)].strval), contador_tab); cont++; linhas++; ;}
    break;

  case 17:
#line 58 "compiler.y"
    {InserirSimbolo(&tabela_simbolos, (yyvsp[(2) - (2)].strval), contador_tab);InsereNaSaida(&saida, ((yyvsp[(2) - (2)].strval)), linhas);cont++;;}
    break;

  case 18:
#line 58 "compiler.y"
    {InsereNaSaida(&saida, " = ", linhas);;}
    break;

  case 19:
#line 58 "compiler.y"
    {InsereNaSaida(&saida, "\n", linhas);linhas++;;}
    break;

  case 20:
#line 62 "compiler.y"
    {if(verifica_usabilidade((yyvsp[(1) - (1)].strval), contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");};}
    break;

  case 21:
#line 62 "compiler.y"
    {InsereNaSaida(&saida, " = ", linhas);;}
    break;

  case 22:
#line 62 "compiler.y"
    {InsereNaSaida(&saida, "\n", linhas);linhas++;;}
    break;

  case 23:
#line 66 "compiler.y"
    {InsereNaSaida(&saida, yytext, linhas);;}
    break;

  case 24:
#line 67 "compiler.y"
    {InsereNaSaida(&saida, yytext, linhas);;}
    break;

  case 25:
#line 68 "compiler.y"
    {InsereNaSaida(&saida, yytext, linhas);;}
    break;

  case 26:
#line 69 "compiler.y"
    {if(verifica_usabilidade((yyvsp[(1) - (1)].strval), contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");} ;}
    break;

  case 29:
#line 72 "compiler.y"
    {InsereNaSaida(&saida, yytext, linhas);;}
    break;

  case 30:
#line 72 "compiler.y"
    {InsereNaSaida(&saida, yytext, linhas);;}
    break;

  case 31:
#line 76 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 32:
#line 77 "compiler.y"
    { strcat(condicao[contador_for], yytext); ;}
    break;

  case 33:
#line 78 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 34:
#line 79 "compiler.y"
    { strcat(condicao[contador_for], yytext ); printf("[%d] = %s\n", contador_for , condicao[contador_for]); ;}
    break;

  case 39:
#line 86 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 41:
#line 87 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 43:
#line 88 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 45:
#line 89 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 47:
#line 93 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 49:
#line 94 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 51:
#line 95 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 53:
#line 96 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 55:
#line 97 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 57:
#line 98 "compiler.y"
    { strcat(condicao[contador_for], yytext ); ;}
    break;

  case 60:
#line 102 "compiler.y"
    {InsereNaSaida(&saida, " + ", linhas);;}
    break;

  case 62:
#line 103 "compiler.y"
    {InsereNaSaida(&saida, " - ", linhas);;}
    break;

  case 64:
#line 104 "compiler.y"
    {InsereNaSaida(&saida, " * ", linhas);;}
    break;

  case 66:
#line 105 "compiler.y"
    {InsereNaSaida(&saida, " / ", linhas);;}
    break;

  case 68:
#line 109 "compiler.y"
    {InsereNaSaida(&saida, " < ", linhas);;}
    break;

  case 70:
#line 110 "compiler.y"
    {InsereNaSaida(&saida, " <= ", linhas);;}
    break;

  case 72:
#line 111 "compiler.y"
    {InsereNaSaida(&saida, " > ", linhas);;}
    break;

  case 74:
#line 112 "compiler.y"
    {InsereNaSaida(&saida, " >= ", linhas);;}
    break;

  case 76:
#line 113 "compiler.y"
    {InsereNaSaida(&saida, " == ", linhas);;}
    break;

  case 78:
#line 114 "compiler.y"
    {InsereNaSaida(&saida, " != ", linhas);;}
    break;

  case 80:
#line 118 "compiler.y"
    { InsereNaSaida(&saida, "if (", linhas); ;}
    break;

  case 81:
#line 118 "compiler.y"
    {InsereNaSaida(&saida, ")\n", linhas); contador_tab++; ;}
    break;

  case 82:
#line 121 "compiler.y"
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "els", linhas); ;}
    break;

  case 84:
#line 123 "compiler.y"
    { InsereNaSaida(&saida, "else\n", linhas); ;}
    break;

  case 85:
#line 123 "compiler.y"
    {  contador_tab--;  InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);;}
    break;

  case 86:
#line 125 "compiler.y"
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); contador_tab++; InsereNaSaida(&saida, "else\n", linhas); ;}
    break;

  case 87:
#line 125 "compiler.y"
    { contador_tab--;InsereTabsSaida(&saida, contador_tab);InsereNaSaida(&saida, "end\n", linhas);;}
    break;

  case 89:
#line 130 "compiler.y"
    {InsereTabsSaida(&saida, contador_tab);;}
    break;

  case 91:
#line 134 "compiler.y"
    { InsereNaSaida(&saida, "while ( ", linhas); ;}
    break;

  case 92:
#line 134 "compiler.y"
    { InsereNaSaida(&saida, " ) \n" , linhas); contador_tab++; ;}
    break;

  case 93:
#line 138 "compiler.y"
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "\nend\n" , linhas);;}
    break;

  case 94:
#line 139 "compiler.y"
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n" , linhas); ;}
    break;

  case 95:
#line 143 "compiler.y"
    {InsereTabsSaida(&saida, contador_tab);;}
    break;

  case 96:
#line 143 "compiler.y"
    {InsereNaSaida(&saida, "while true\n", linhas);;}
    break;

  case 97:
#line 145 "compiler.y"
    {InsereTabsSaida(&saida, contador_tab);;}
    break;

  case 98:
#line 145 "compiler.y"
    {InsereNaSaida(&saida, "while ", linhas);;}
    break;

  case 99:
#line 145 "compiler.y"
    {InsereNaSaida(&saida, "\n", linhas);;}
    break;

  case 100:
#line 145 "compiler.y"
    {contador_for++;;}
    break;

  case 101:
#line 149 "compiler.y"
    {contador_tab++;;}
    break;

  case 102:
#line 149 "compiler.y"
    {InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0';;}
    break;

  case 103:
#line 149 "compiler.y"
    {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);;}
    break;

  case 104:
#line 151 "compiler.y"
    {contador_tab++;;}
    break;

  case 105:
#line 151 "compiler.y"
    { InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0'; printf("condicao eh %s\n", condicao[contador_for]); InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);;}
    break;

  case 106:
#line 153 "compiler.y"
    {contador_tab++; InsereNaSaida(&saida, "while true\n", linhas);;}
    break;

  case 107:
#line 153 "compiler.y"
    {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);;}
    break;

  case 108:
#line 157 "compiler.y"
    {InsereTabsSaida(&saida, contador_tab);;}
    break;

  case 110:
#line 161 "compiler.y"
    {if(procura_tabela_simbolos((yyvsp[(1) - (1)].strval), contador_tab)){strcat(condicao[contador_for], yytext );printf(" KK %s\n", condicao[contador_for]);}else{yyerror("Variable not declared!\n");};}
    break;

  case 111:
#line 161 "compiler.y"
    { strcat(condicao[contador_for], " = " ); ;}
    break;

  case 112:
#line 161 "compiler.y"
    {InsereNaSaida(&saida, "\n", linhas);linhas++;;}
    break;

  case 113:
#line 165 "compiler.y"
    {contador_tab--; {InsereTabsSaida(&saida, contador_tab);}  InsereNaSaida(&saida, "end\n", linhas);;}
    break;

  case 114:
#line 167 "compiler.y"
    {contador_tab--; {InsereTabsSaida(&saida, contador_tab);} InsereNaSaida(&saida, "end\n", linhas);;}
    break;

  case 120:
#line 180 "compiler.y"
    { if ( strcmp((yyvsp[(1) - (1)].strval), "0") == 0 )InsereNaSaida(&saida, "false", linhas); else InsereNaSaida(&saida, "true", linhas);;}
    break;

  case 125:
#line 191 "compiler.y"
    {InsereNaSaida(&saida, " and ", linhas);;}
    break;

  case 127:
#line 192 "compiler.y"
    {InsereNaSaida(&saida, " or ", linhas);;}
    break;


/* Line 1267 of yacc.c.  */
#line 1969 "compiler.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 200 "compiler.y"


int yyerror(char *s) {
    printf("error: %s\n",s);
    erro++;
}

int main(int argc, char *argv[]) {
    saida = NULL;
    tabela_simbolos = NULL;
    linhas = 0;
    yyin = fopen(argv[1], "r");
    if (yyin == NULL){
        printf("Could not open the file.\n");
        exit(1);
    }

    char file_name[100];

    file_name[0] = '\0';

    strcat(file_name, argv[1]);

    strcat(file_name, ".rb");

    yyparse();

    // Gera o arquivo compilado corretamente , caso dê erro de compilação
    // ultimo arquivo fica disponível sem alteração.
    if ( erro == 0 ){

        printf("Name of the file: %s\n", file_name);
        fp = fopen(file_name, "w");
        Imprime(saida);
        fclose(fp);
        printf("FILE COMPILED SUCCESSFULLY!\n");
    }

}



