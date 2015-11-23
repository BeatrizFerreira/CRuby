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
#include "symbol_table.h"

char condicao[100][100];

int contador_for = 0;
int contador_tab = 0;

extern char* yytext;

#line 80 "compiler.tab.c" /* yacc.c:339  */

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
    eof = 285,
    LEFT_BRACKETS = 286,
    RIGHT_BRACKETS = 287,
    FOR = 288,
    WHILE = 289,
    REFUSE = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 15 "compiler.y" /* yacc.c:355  */

    char * strval;
    int intval;

#line 161 "compiler.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 176 "compiler.tab.c" /* yacc.c:358  */

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
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    35,    38,    39,    43,    43,    44,    44,
      45,    49,    49,    50,    54,    54,    55,    59,    59,    59,
      63,    63,    63,    67,    68,    69,    70,    71,    72,    73,
      73,    77,    78,    79,    80,    81,    82,    83,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     119,   119,   122,   122,   124,   124,   126,   126,   130,   131,
     131,   135,   135,   139,   140,   144,   144,   146,   146,   148,
     148,   148,   148,   152,   152,   152,   154,   154,   156,   156,
     160,   160,   164,   164,   164,   168,   170,   172,   181,   182,
     183,   187,   188,   189,   193,   194,   198,   198,   199,   199,
     203,   204,   205,   206
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE_INT", "TYPE_FLOAT", "TYPE_DOUBLE",
  "TYPE_CHAR", "IDENTIFIER", "ATTR", "N_INTEGER", "N_REAL", "N_CHAR",
  "END_LINE", "SEMICOLON", "PLUS", "MINUS", "TIMES", "DIVISION", "MENOR",
  "MENORIGUAL", "MAIOR", "MAIORIGUAL", "IGUAL", "DIFERENTE", "E", "OU",
  "SE", "SENAO", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "eof",
  "LEFT_BRACKETS", "RIGHT_BRACKETS", "FOR", "WHILE", "REFUSE", "$accept",
  "Input", "Line", "command", "$@1", "$@2", "loop_and_conditional", "$@3",
  "declaration", "$@4", "declaration_attribution", "$@5", "$@6",
  "attribution", "$@7", "$@8", "expression", "$@9", "expression_loop",
  "math_operation_loop", "$@10", "$@11", "$@12", "$@13", "comparator_loop",
  "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "math_operation", "$@20",
  "$@21", "$@22", "$@23", "comparator", "$@24", "$@25", "$@26", "$@27",
  "$@28", "$@29", "if_", "$@30", "else_", "$@31", "$@32", "$@33", "loop",
  "$@34", "while_statement", "$@35", "while", "for_", "$@36", "$@37",
  "$@38", "$@39", "$@40", "for_statement", "$@41", "$@42", "$@43", "$@44",
  "first_for_loop_part", "$@45", "last_for_loop_part", "$@46", "$@47",
  "conditional", "multiple_command", "multiple_conditional",
  "multiple_conditional_loop", "booleans", "$@48", "$@49", "type", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290
};
# endif

#define YYPACT_NINF -93

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-93)))

#define YYTABLE_NINF -129

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -93,     6,   -93,   -93,   -11,   -93,   -93,   103,    15,   -93,
       8,   -93,   -13,    -7,   -93,    33,   -93,   -93,   -93,   -93,
     -93,   -93,    41,   -93,   -93,   -93,    -3,   -93,   -93,    13,
     -93,   -93,   -93,    43,    55,    15,    65,    66,    47,    16,
       3,    51,    16,    70,    16,     3,    61,    62,   -93,   -93,
      71,    81,   -93,    44,   -93,     3,     3,    79,    44,   -93,
       3,   -93,    80,   101,    14,    60,   -93,   -93,    60,   -93,
      18,   -93,   -93,   -93,   162,   -93,    92,    64,   -93,   -93,
      87,    86,    88,   -93,   -93,   -93,   -93,   106,   -93,    -5,
     119,    60,   141,   -93,    60,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,    94,   -93,    21,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   152,   -93,
     108,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    44,    44,   -93,     8,   102,     3,   127,   -93,   -93,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     -93,   -93,    16,   -93,     3,   104,   -93,   120,   -93,   116,
     -93,   142,   -93,   -93,   -93,    76,   -93,   -93,   -93,   -93,
      76,   172,   -93,   -93,   124,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     6,     1,     5,     0,     3,     4,     0,     0,    10,
       0,    13,     0,     0,    88,   110,   130,   131,   132,   133,
       7,    16,     0,    20,     9,    80,     0,    12,    91,     0,
      90,   103,   106,     0,    99,     0,    14,     0,     0,     6,
       6,     0,     6,     0,     6,     6,     0,     0,   100,   111,
       0,     0,    21,    59,   115,     6,     6,     0,    59,    93,
       6,   104,     0,     0,     0,    59,    15,    18,    59,    26,
      23,    24,    25,    29,     0,    27,    28,     0,   120,   119,
     116,     0,     0,   105,   107,    95,    97,     0,    23,    28,
       0,    59,     0,    28,    59,    60,    62,    64,    66,    68,
      70,    72,    74,    76,    78,   126,   123,     0,    81,    82,
     117,    92,    94,    96,    98,   108,   125,   101,     0,    22,
       0,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    84,     0,     0,     6,     0,    19,    30,
      61,    63,    65,    67,    69,    71,    73,    75,    77,    79,
     127,   129,     6,    83,     6,     0,   112,     0,    85,     0,
     109,     0,   102,    87,   113,    38,    34,    31,    32,    33,
      38,   114,    35,    36,     0,    39,    41,    43,    45,    47,
      49,    51,    53,    55,    57,    37,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -93,   -93,   -93,    -1,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   100,   -93,   -93,   -64,   -93,   -92,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -51,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
      63,   -44,   -55,   -93,   107,   -93,   -93,   -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,    56,     7,     8,     9,    10,    20,    50,
      21,    51,    91,    24,    37,    68,    74,    94,   171,   172,
     186,   187,   188,   189,   173,   190,   191,   192,   193,   194,
     195,    75,   121,   122,   123,   124,    93,   125,   126,   127,
     128,   129,   130,    26,    38,   110,   134,   152,   135,    11,
      12,    29,    41,    30,    13,   113,   114,    48,    65,   137,
      14,    44,    83,    45,   136,    34,    35,   157,   161,   165,
      27,    57,    77,    90,   106,   131,   107,    22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    62,    76,    81,    92,    31,     2,    76,  -124,    39,
      -8,    78,    79,    -8,    89,    55,    82,    15,     3,   105,
    -128,    28,    23,    -8,    32,    42,    86,   118,    40,   -11,
     120,  -121,   -11,   133,    25,  -118,     4,   -89,    54,     4,
     -89,    59,   -11,    61,    43,    87,    33,  -121,    36,     4,
     -89,    69,   -86,    70,    71,    72,    46,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    69,    47,    88,
      71,    72,    73,   -17,    52,    53,   150,   151,   174,    58,
      76,    76,    60,   166,    66,   167,   168,   169,    73,    67,
      63,    64,   155,   108,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   170,  -122,    16,    17,    18,    19,
     159,    80,    84,    85,   109,   111,   105,  -128,   115,   132,
     112,  -122,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   117,   154,   156,    49,   160,   139,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   163,   162,
     164,   158,     0,   185,   119,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   138,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   116,   153
};

static const yytype_int16 yycheck[] =
{
       1,    45,    53,    58,    68,    12,     0,    58,    13,    12,
       7,    55,    56,     7,    65,    12,    60,    28,    12,    24,
      25,    34,     7,     7,    31,    12,    12,    91,    31,    26,
      94,    13,    26,    12,    26,    32,    33,    34,    39,    33,
      34,    42,    26,    44,    31,    31,    13,    29,     7,    33,
      34,     7,    31,     9,    10,    11,    13,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,     7,    13,     9,
      10,    11,    28,     8,     8,    28,   131,   132,   170,    28,
     131,   132,    12,     7,    13,     9,    10,    11,    28,     8,
      29,    29,   136,    29,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,    28,    13,     3,     4,     5,     6,
     154,    32,    32,    12,    27,    29,    24,    25,    12,    25,
      32,    29,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    13,    31,     7,    35,    32,    29,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    32,    29,
       8,   152,    -1,    29,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    89,   134
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,     0,    12,    33,    38,    39,    40,    41,    42,
      43,    85,    86,    90,    96,    28,     3,     4,     5,     6,
      44,    46,   113,     7,    49,    26,    79,   106,    34,    87,
      89,    12,    31,    13,   101,   102,     7,    50,    80,    12,
      31,    88,    12,    31,    97,    99,    13,    13,    93,    49,
      45,    47,     8,    28,    39,    12,    39,   107,    28,    39,
      12,    39,   107,    29,    29,    94,    13,     8,    51,     7,
       9,    10,    11,    28,    52,    67,    72,   108,   107,   107,
      32,   108,   107,    98,    32,    12,    12,    31,     9,    72,
     109,    48,    52,    72,    53,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   110,   112,    29,    27,
      81,    29,    32,    91,    92,    12,   110,    13,    52,    13,
      52,    68,    69,    70,    71,    73,    74,    75,    76,    77,
      78,   111,    25,    12,    82,    84,   100,    95,    13,    29,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
     108,   108,    83,   106,    31,   107,     7,   103,    39,   107,
      32,   104,    29,    32,     8,   105,     7,     9,    10,    11,
      28,    54,    55,    60,    54,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    29,    56,    57,    58,    59,
      61,    62,    63,    64,    65,    66,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    40,    39,    41,    39,
      39,    43,    42,    42,    45,    44,    44,    47,    48,    46,
      50,    51,    49,    52,    52,    52,    52,    52,    52,    53,
      52,    54,    54,    54,    54,    54,    54,    54,    55,    56,
      55,    57,    55,    58,    55,    59,    55,    61,    60,    62,
      60,    63,    60,    64,    60,    65,    60,    66,    60,    67,
      68,    67,    69,    67,    70,    67,    71,    67,    73,    72,
      74,    72,    75,    72,    76,    72,    77,    72,    78,    72,
      80,    79,    82,    81,    83,    81,    84,    81,    85,    86,
      85,    88,    87,    89,    89,    91,    90,    92,    90,    93,
      94,    95,    90,    97,    98,    96,    99,    96,   100,    96,
     102,   101,   104,   105,   103,   106,   106,   106,   107,   107,
     107,   108,   108,   108,   109,   109,   111,   110,   112,   110,
     113,   113,   113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     0,     2,     0,     2,
       1,     0,     2,     1,     0,     4,     1,     0,     0,     7,
       0,     0,     6,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     1,     1,     1,     1,     1,     3,     0,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     5,     0,     3,     0,     4,     0,     5,     1,     0,
       2,     0,     5,     3,     5,     0,     7,     0,     7,     0,
       0,     0,    10,     0,     0,     5,     0,     5,     0,    10,
       0,     2,     0,     0,     5,     3,     4,     5,     0,     2,
       2,     1,     1,     2,     1,     2,     0,     3,     0,     3,
       1,     1,     1,     1
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
#line 43 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1415 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 44 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1421 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 49 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1427 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 54 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas); InsereNaSaida(&saida, " = 0\n", linhas);}
#line 1433 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 54 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[-2].strval)); cont++; linhas++; }
#line 1439 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 59 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[0].strval));InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas);cont++;}
#line 1445 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 59 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1451 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 59 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1457 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 63 "compiler.y" /* yacc.c:1646  */
    {if(procura_tabela_simbolos((yyvsp[0].strval))){InsereNaSaida(&saida, yytext, linhas);}else{erro++;yyerror("Variavel nao declarada");}}
#line 1463 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 63 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1469 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 63 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1475 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 67 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1481 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 68 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1487 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 69 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1493 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 70 "compiler.y" /* yacc.c:1646  */
    {printf("!%s\n", (yyvsp[0].strval));if(procura_tabela_simbolos((yyvsp[0].strval))){InsereNaSaida(&saida, yytext, linhas);}else{erro++;yyerror("Variavel nao declarada");} }
#line 1499 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 73 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1505 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 73 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1511 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 77 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1517 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 78 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext); }
#line 1523 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 79 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1529 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 80 "compiler.y" /* yacc.c:1646  */
    { printf("expressao %s\n", yytext); strcat(condicao[contador_for], yytext ); printf("[%d] = %s\n", contador_for , condicao[contador_for]); }
#line 1535 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 87 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1541 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 88 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1547 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 89 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1553 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 90 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1559 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 94 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1565 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 95 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1571 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 96 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1577 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 97 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1583 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 98 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1589 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 99 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1595 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 103 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " + ", linhas);}
#line 1601 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 104 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " - ", linhas);}
#line 1607 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 105 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " * ", linhas);}
#line 1613 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 106 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " / ", linhas);}
#line 1619 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 110 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " < ", linhas);}
#line 1625 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 111 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " <= ", linhas);}
#line 1631 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 112 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " > ", linhas);}
#line 1637 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 113 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " >= ", linhas);}
#line 1643 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 114 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " == ", linhas);}
#line 1649 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 115 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " != ", linhas);}
#line 1655 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 119 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "if (", linhas); }
#line 1661 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 119 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ")\n", linhas); contador_tab++; }
#line 1667 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 122 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "els", linhas); }
#line 1673 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 124 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereNaSaida(&saida, "else\n", linhas); }
#line 1679 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 124 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1685 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 126 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); contador_tab++; InsereNaSaida(&saida, "else\n", linhas); }
#line 1691 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 126 "compiler.y" /* yacc.c:1646  */
    { contador_tab--;InsereTabsSaida(&saida, contador_tab);InsereNaSaida(&saida, "end\n", linhas);}
#line 1697 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 131 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1703 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 135 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "while ( ", linhas); }
#line 1709 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 135 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, " ) \n" , linhas); contador_tab++; }
#line 1715 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 139 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "\nend\n" , linhas);}
#line 1721 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 140 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n" , linhas); }
#line 1727 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 144 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1733 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 144 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1739 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 146 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1745 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 146 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1751 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 148 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1757 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 148 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while ", linhas);}
#line 1763 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 148 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);}
#line 1769 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 148 "compiler.y" /* yacc.c:1646  */
    {contador_for++;}
#line 1775 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 152 "compiler.y" /* yacc.c:1646  */
    {contador_tab++;}
#line 1781 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 152 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0';}
#line 1787 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 152 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1793 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 154 "compiler.y" /* yacc.c:1646  */
    {contador_tab++;}
#line 1799 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 154 "compiler.y" /* yacc.c:1646  */
    { InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0'; printf("condicao eh %s\n", condicao[contador_for]); InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1805 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 156 "compiler.y" /* yacc.c:1646  */
    {contador_tab++; InsereNaSaida(&saida, "while true\n", linhas);}
#line 1811 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 156 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1817 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 160 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1823 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 164 "compiler.y" /* yacc.c:1646  */
    {if(procura_tabela_simbolos((yyvsp[0].strval))){strcat(condicao[contador_for], yytext );printf(" KK %s\n", condicao[contador_for]);}else{erro++;yyerror("Variavel nao declarada");}}
#line 1829 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 164 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], " = " ); }
#line 1835 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 164 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1841 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 168 "compiler.y" /* yacc.c:1646  */
    {contador_tab--; {InsereTabsSaida(&saida, contador_tab);}  InsereNaSaida(&saida, "end\n", linhas);}
#line 1847 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 170 "compiler.y" /* yacc.c:1646  */
    {contador_tab--; {InsereTabsSaida(&saida, contador_tab);} InsereNaSaida(&saida, "end\n", linhas);}
#line 1853 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 187 "compiler.y" /* yacc.c:1646  */
    { if ( strcmp((yyvsp[0].strval), "0") == 0 )InsereNaSaida(&saida, "false", linhas); else InsereNaSaida(&saida, "true", linhas);}
#line 1859 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 198 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " and ", linhas);}
#line 1865 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 199 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " or ", linhas);}
#line 1871 "compiler.tab.c" /* yacc.c:1646  */
    break;


#line 1875 "compiler.tab.c" /* yacc.c:1646  */
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
#line 207 "compiler.y" /* yacc.c:1906  */


int yyerror(char *s) {
    printf("error: %s\n",s);
    // erro++;
}

int main(void) {
    saida = NULL;
    tabela_simbolos = NULL;
    linhas = 0;

    yyparse();

    fp = fopen("ruby.rb", "w");
    Imprime(saida);
    printf("caracalho %s\n", condicao[contador_for]);

    int i;

    printf("hue\n%s\n", condicao[0]);
    printf("hue\n%s\n", condicao[1]);
    printf("hue\n%s\n", condicao[2]);


    fclose(fp);
    /*passo = 1;
    yyparse();

    rewind(fp, 0); //volta o arquivo para 0

    passo = 2;
    yyparse();

    fclose(fp);*/
}


