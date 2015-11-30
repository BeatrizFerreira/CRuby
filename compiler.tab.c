/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "compiler.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_simbolos.h"

char condicao[100][100];
    
int contador_for = 0;
int contador_tab = 0;

extern FILE *yyin;
extern char* yytext;

#line 81 "compiler.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "compiler.tab.h".  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 16 "compiler.y" /* yacc.c:355  */

    char * strval;
    int intval;

#line 160 "compiler.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 175 "compiler.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
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
     130,   134,   134,   138,   139,   145,   145,   147,   147,   147,
     147,   151,   151,   151,   153,   153,   155,   155,   159,   159,
     163,   163,   163,   167,   169,   171,   173,   176,   177,   178,
     182,   183,   184,   188,   189,   193,   193,   194,   194,   198,
     199,   200,   201
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIPO_INTEIRO", "TIPO_FLOAT",
  "TIPO_DOUBLE", "TIPO_CHAR", "IDENTIFICADOR", "ATTR", "N_INTEIRO",
  "N_REAL", "N_CARACTERE", "PONTO_VIRGULA", "FINAL_LINHA", "MAIS", "MENOS",
  "VEZES", "DIVISAO", "MENOR", "MENORIGUAL", "MAIOR", "MAIORIGUAL",
  "IGUAL", "DIFERENTE", "E", "OU", "SE", "SENAO", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "LEFT_BRACKETS", "RIGHT_BRACKETS", "FOR", "WHILE",
  "$accept", "Input", "Line", "command", "$@1", "$@2",
  "loop_and_conditional", "$@3", "declaration", "$@4",
  "declaration_attribution", "$@5", "$@6", "attribution", "$@7", "$@8",
  "expression", "$@9", "expression_loop", "math_operation_loop", "$@10",
  "$@11", "$@12", "$@13", "comparator_loop", "$@14", "$@15", "$@16",
  "$@17", "$@18", "$@19", "math_operation", "$@20", "$@21", "$@22", "$@23",
  "comparator", "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "if_",
  "$@30", "else_", "$@31", "$@32", "$@33", "loop", "$@34",
  "while_statement", "$@35", "while", "for_", "$@36", "$@37", "$@38",
  "$@39", "for_statement", "$@40", "$@41", "$@42", "$@43",
  "first_for_loop_part", "$@44", "last_for_loop_part", "$@45", "$@46",
  "conditional", "multiple_command", "multiple_conditional",
  "multiple_conditional_loop", "booleans", "$@47", "$@48", "tipo", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
# endif

#define YYPACT_NINF -83

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define YYTABLE_NINF -128

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 6:
#line 42 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1411 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1417 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 48 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1423 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 53 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas); InsereNaSaida(&saida, " = 0\n", linhas);}
#line 1429 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 53 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[-2].strval), contador_tab); cont++; linhas++; }
#line 1435 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 58 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[0].strval), contador_tab);InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas);cont++;}
#line 1441 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 58 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1447 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 58 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1453 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 62 "compiler.y" /* yacc.c:1646  */
    {if(verifica_usabilidade((yyvsp[0].strval), contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");}}
#line 1459 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 62 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1465 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 62 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1471 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 66 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1477 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1483 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1489 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 69 "compiler.y" /* yacc.c:1646  */
    {if(verifica_usabilidade((yyvsp[0].strval), contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");} }
#line 1495 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 72 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1501 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 72 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1507 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 76 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1513 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 77 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext); }
#line 1519 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 78 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1525 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 79 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); printf("[%d] = %s\n", contador_for , condicao[contador_for]); }
#line 1531 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 86 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1537 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 87 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1543 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 88 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1549 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 89 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1555 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 93 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1561 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 94 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1567 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 95 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1573 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 96 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1579 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 97 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1585 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 98 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1591 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 102 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " + ", linhas);}
#line 1597 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 103 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " - ", linhas);}
#line 1603 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 104 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " * ", linhas);}
#line 1609 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 105 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " / ", linhas);}
#line 1615 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 109 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " < ", linhas);}
#line 1621 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 110 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " <= ", linhas);}
#line 1627 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 111 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " > ", linhas);}
#line 1633 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 112 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " >= ", linhas);}
#line 1639 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 113 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " == ", linhas);}
#line 1645 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 114 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " != ", linhas);}
#line 1651 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 118 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "if (", linhas); }
#line 1657 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 118 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ")\n", linhas); contador_tab++; }
#line 1663 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 121 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "els", linhas); }
#line 1669 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 123 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "else\n", linhas); }
#line 1675 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 123 "compiler.y" /* yacc.c:1646  */
    {  contador_tab--;  InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1681 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 125 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); contador_tab++; InsereNaSaida(&saida, "else\n", linhas); }
#line 1687 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 125 "compiler.y" /* yacc.c:1646  */
    { contador_tab--;InsereTabsSaida(&saida, contador_tab);InsereNaSaida(&saida, "end\n", linhas);}
#line 1693 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 130 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1699 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 134 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "while ( ", linhas); }
#line 1705 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 134 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, " ) \n" , linhas); contador_tab++; }
#line 1711 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 138 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "\nend\n" , linhas);}
#line 1717 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 139 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n" , linhas); }
#line 1723 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 145 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1729 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 145 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1735 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 147 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1741 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 147 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while ", linhas);}
#line 1747 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 147 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);}
#line 1753 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 147 "compiler.y" /* yacc.c:1646  */
    {contador_for++;}
#line 1759 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 151 "compiler.y" /* yacc.c:1646  */
    {contador_tab++;}
#line 1765 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 151 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0';}
#line 1771 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 151 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1777 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 153 "compiler.y" /* yacc.c:1646  */
    {contador_tab++;}
#line 1783 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 153 "compiler.y" /* yacc.c:1646  */
    { InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0'; printf("condicao eh %s\n", condicao[contador_for]); InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1789 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 155 "compiler.y" /* yacc.c:1646  */
    {contador_tab++; InsereNaSaida(&saida, "while true\n", linhas);}
#line 1795 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 155 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1801 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 159 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1807 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 163 "compiler.y" /* yacc.c:1646  */
    {if(procura_tabela_simbolos((yyvsp[0].strval), contador_tab)){strcat(condicao[contador_for], yytext );printf(" KK %s\n", condicao[contador_for]);}else{yyerror("Variable not declared!\n");}}
#line 1813 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 163 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], " = " ); }
#line 1819 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 163 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1825 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 167 "compiler.y" /* yacc.c:1646  */
    {contador_tab--; {InsereTabsSaida(&saida, contador_tab);}  InsereNaSaida(&saida, "end\n", linhas);}
#line 1831 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 169 "compiler.y" /* yacc.c:1646  */
    {contador_tab--; {InsereTabsSaida(&saida, contador_tab);} InsereNaSaida(&saida, "end\n", linhas);}
#line 1837 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 182 "compiler.y" /* yacc.c:1646  */
    { if ( strcmp((yyvsp[0].strval), "0") == 0 )InsereNaSaida(&saida, "false", linhas); else InsereNaSaida(&saida, "true", linhas);}
#line 1843 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 193 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " and ", linhas);}
#line 1849 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 194 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " or ", linhas);}
#line 1855 "compiler.tab.c" /* yacc.c:1646  */
    break;


#line 1859 "compiler.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
  return yyresult;
}
#line 202 "compiler.y" /* yacc.c:1906  */


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


