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

extern char* yytext;

#line 79 "compiler.tab.c" /* yacc.c:339  */

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
#line 14 "compiler.y" /* yacc.c:355  */

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
#define YYLAST   196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    32,    32,    34,    37,    38,    42,    43,    44,    45,
      49,    49,    50,    54,    54,    54,    58,    58,    58,    62,
      63,    64,    65,    66,    67,    68,    68,    72,    73,    74,
      75,    76,    77,    78,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    89,    89,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   114,   114,   117,   117,
     119,   119,   121,   121,   125,   126,   130,   130,   134,   135,
     139,   141,   143,   143,   143,   147,   147,   149,   151,   151,
     155,   159,   159,   159,   163,   163,   165,   167,   167,   175,
     176,   177,   181,   182,   186,   187,   191,   191,   192,   192,
     196,   197,   198,   199
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
  "LEFT_BRACKETS", "RIGHT_BRACKETS", "FOR", "WHILE", "REFUSE", "\"1\"",
  "$accept", "Input", "Line", "command", "declaration", "$@1",
  "declaration_attribution", "$@2", "$@3", "attribution", "$@4", "$@5",
  "expression", "$@6", "expression_loop", "math_operation_loop", "$@7",
  "$@8", "$@9", "$@10", "comparator_loop", "$@11", "$@12", "$@13", "$@14",
  "$@15", "$@16", "math_operation", "$@17", "$@18", "$@19", "$@20",
  "comparator", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "if_",
  "$@27", "else_", "$@28", "$@29", "$@30", "loop", "while_statement",
  "$@31", "while", "for_", "$@32", "$@33", "for_statement", "$@34", "$@35",
  "first_for_loop_part", "last_for_loop_part", "$@36", "$@37",
  "conditional", "$@38", "$@39", "multiple_command",
  "multiple_conditional", "multiple_conditional_loop", "booleans", "$@40",
  "$@41", "type", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -82

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-82)))

#define YYTABLE_NINF -119

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -82,    12,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -19,   -82,   -82,   -82,   -82,   -82,   -82,     8,   -82,     9,
     -82,    11,   -82,   -82,    15,    18,    47,    24,    48,   -82,
       1,    60,    31,    60,     1,    41,   -82,    61,    38,   -82,
      69,    51,    60,     1,     1,    52,   -82,     1,   -82,    73,
      70,    98,    61,   -82,   -82,   -82,   -82,   -82,   154,   -82,
      56,    78,    82,    83,    61,    95,   -82,   -82,   -82,    99,
      93,   -82,   -82,   -82,   -82,   133,   -82,    61,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
      85,   -82,   115,    13,    23,   127,   -82,   101,   -82,    61,
     -82,   100,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,   -82,   -82,   129,   -82,   -82,    21,
     -82,   144,   -82,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   -82,   -82,   -82,   135,   -82,   118,   157,
     -82,     1,   -82,   160,    60,   -82,     1,   158,   183,   -82,
     -82,   161,   -82,   -82,   -82,    81,   -82,   -82,   -82,   -82,
      81,   164,   -82,   -82,   116,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   120,   121,   122,   123,    16,     5,    76,
       0,    86,     3,     4,     6,    12,     7,     0,     9,     0,
      85,     0,    84,     8,     0,     0,     0,     0,     0,   104,
     109,     0,     0,     0,   109,    10,    17,    55,     0,   100,
      92,     0,     0,   109,   109,     0,    88,   109,    95,     0,
       0,     0,    55,    22,    19,    20,    21,    25,     0,    23,
      24,     0,     0,     0,    55,     0,   105,   111,   110,   106,
       0,    96,    97,    11,    14,     0,    24,    55,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,   116,   113,
       0,    77,     0,     0,    24,     0,    87,     0,    89,    55,
      18,     0,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    90,    91,     0,   115,    93,    78,
     108,     0,    26,    57,    59,    61,    63,    65,    67,    69,
      71,    73,    75,   117,   119,    98,     0,    80,     0,     0,
      15,   109,   101,     0,     0,    79,   109,     0,     0,    94,
      81,     0,    99,   102,    83,    34,    30,    27,    28,    29,
      34,   103,    31,    32,     0,    35,    37,    39,    41,    43,
      45,    47,    49,    51,    53,    33,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    52,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,    -1,   -82,   -82,   -82,   -82,   -82,   165,
     -82,   -82,   -49,   -82,   -81,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -35,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,    57,
     -82,   -82,   -33,   -39,   -82,   102,   -82,   -82,   -82
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    12,    44,    14,    50,    15,    51,    99,    16,
      25,    52,    58,    77,   161,   162,   176,   177,   178,   179,
     163,   180,   181,   182,   183,   184,   185,    59,   102,   103,
     104,   105,    76,   106,   107,   108,   109,   110,   111,    17,
      26,   120,   138,   144,   139,    18,    19,    28,    20,    21,
      64,   136,    22,    71,   141,    40,   143,   148,   155,    23,
      42,    97,    45,    61,    95,    89,   112,    90,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    49,    60,    75,     3,     4,     5,     6,     7,    27,
      67,    68,     2,    43,    70,     3,     4,     5,     6,     7,
      29,    31,    35,    33,     8,   115,    36,     9,   101,    94,
      46,     7,    48,   137,    10,    11,  -114,    38,     9,    30,
      32,    66,    34,    47,   116,    10,    11,    88,  -118,   -13,
     121,    62,   -82,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,     3,     4,     5,     6,     7,    53,  -112,
      54,    55,    56,   133,   134,    37,    41,    60,    60,   164,
      88,  -118,    63,    73,    69,  -112,     9,    65,   156,    57,
     157,   158,   159,    10,    11,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,    72,    74,    91,   147,   160,
     113,    92,    93,   151,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    96,    98,  -107,   114,   119,   122,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     118,   135,   142,   150,     9,   175,   100,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,   140,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   146,   149,
     152,   153,    39,   154,     0,   145,   117
};

static const yytype_int16 yycheck[] =
{
       1,    34,    37,    52,     3,     4,     5,     6,     7,    28,
      43,    44,     0,    12,    47,     3,     4,     5,     6,     7,
      12,    12,     7,    12,    12,    12,     8,    26,    77,    64,
      31,     7,    33,    12,    33,    34,    13,    13,    26,    31,
      31,    42,    31,    12,    31,    33,    34,    24,    25,     8,
      99,    13,    31,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     3,     4,     5,     6,     7,     7,    13,
       9,    10,    11,   112,   113,    28,    28,   112,   113,   160,
      24,    25,    13,    13,    32,    29,    26,    36,     7,    28,
       9,    10,    11,    33,    34,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    32,     8,    29,   141,    28,
      25,    29,    29,   146,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    29,    32,    27,    12,    27,    29,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      13,    12,     7,   144,    26,    29,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    31,    29,
      32,     8,    27,    32,    -1,   138,    94
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,     0,     3,     4,     5,     6,     7,    12,    26,
      33,    34,    39,    40,    41,    43,    46,    76,    82,    83,
      85,    86,    89,    96,   105,    47,    77,    28,    84,    12,
      31,    12,    31,    12,    31,     7,     8,    28,    13,    46,
      92,    28,    97,    12,    40,    99,    40,    12,    40,    99,
      42,    44,    48,     7,     9,    10,    11,    28,    49,    64,
      69,   100,    13,    13,    87,    36,    40,    99,    99,    32,
      99,    90,    32,    13,     8,    49,    69,    50,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   102,
     104,    29,    29,    29,    69,   101,    29,    98,    32,    45,
      13,    49,    65,    66,    67,    68,    70,    71,    72,    73,
      74,    75,   103,    25,    12,    12,    31,   102,    13,    27,
      78,    49,    29,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,   100,   100,    12,    88,    12,    79,    81,
      13,    91,     7,    93,    80,    96,    31,    99,    94,    29,
      40,    99,    32,     8,    32,    95,     7,     9,    10,    11,
      28,    51,    52,    57,    51,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    29,    53,    54,    55,    56,
      58,    59,    60,    61,    62,    63,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    39,    39,    40,    40,    40,    40,
      42,    41,    41,    44,    45,    43,    47,    48,    46,    49,
      49,    49,    49,    49,    49,    50,    49,    51,    51,    51,
      51,    51,    51,    51,    52,    53,    52,    54,    52,    55,
      52,    56,    52,    58,    57,    59,    57,    60,    57,    61,
      57,    62,    57,    63,    57,    64,    65,    64,    66,    64,
      67,    64,    68,    64,    70,    69,    71,    69,    72,    69,
      73,    69,    74,    69,    75,    69,    77,    76,    79,    78,
      80,    78,    81,    78,    82,    82,    84,    83,    85,    85,
      86,    86,    87,    88,    86,    90,    89,    89,    91,    89,
      92,    94,    95,    93,    97,    96,    96,    98,    96,    99,
      99,    99,   100,   100,   101,   101,   103,   102,   104,   102,
     105,   105,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     0,     0,     7,     0,     0,     6,     1,
       1,     1,     1,     1,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     3,     0,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     5,     0,     3,
       0,     4,     0,     5,     1,     1,     0,     5,     3,     5,
       6,     6,     0,     0,     9,     0,     4,     4,     0,    10,
       1,     0,     0,     5,     0,     4,     4,     0,     6,     0,
       2,     2,     1,     2,     1,     2,     0,     3,     0,     3,
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
        case 10:
#line 49 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas); InsereNaSaida(&saida, " = 0\n", linhas);}
#line 1406 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 49 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[-2].strval)); cont++; linhas++; }
#line 1412 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[0].strval));InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas);cont++;}
#line 1418 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 54 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1424 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 54 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1430 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 58 "compiler.y" /* yacc.c:1646  */
    {if(procura_tabela_simbolos((yyvsp[0].strval))){InsereNaSaida(&saida, yytext, linhas);}else{erro++;yyerror("Variavel nao declarada");}}
#line 1436 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 58 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1442 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 58 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1448 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 62 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1454 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 63 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1460 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 64 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1466 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 65 "compiler.y" /* yacc.c:1646  */
    {printf("!%s\n", (yyvsp[0].strval));if(procura_tabela_simbolos((yyvsp[0].strval))){InsereNaSaida(&saida, yytext, linhas);}else{erro++;yyerror("Variavel nao declarada");} }
#line 1472 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1478 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 68 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1484 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 72 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1490 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 73 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext); }
#line 1496 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 74 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1502 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 75 "compiler.y" /* yacc.c:1646  */
    { printf("expressao %s\n", yytext); strcat(condicao[contador_for], yytext ); printf("[%d] = %s\n", contador_for , condicao[contador_for]); }
#line 1508 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 82 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1514 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 83 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1520 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 84 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1526 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 85 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1532 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 89 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1538 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 90 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1544 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 91 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1550 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 92 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1556 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 93 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1562 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 94 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1568 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 98 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " + ", linhas);}
#line 1574 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 99 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " - ", linhas);}
#line 1580 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 100 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " * ", linhas);}
#line 1586 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 101 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " / ", linhas);}
#line 1592 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 105 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " < ", linhas);}
#line 1598 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 106 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " <= ", linhas);}
#line 1604 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 107 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " > ", linhas);}
#line 1610 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 108 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " >= ", linhas);}
#line 1616 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 109 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " == ", linhas);}
#line 1622 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 110 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " != ", linhas);}
#line 1628 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 114 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "if (", linhas); }
#line 1634 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 114 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ")\n", linhas);}
#line 1640 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 117 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "els", linhas); }
#line 1646 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 119 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "else\n", linhas); }
#line 1652 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 119 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "end\n", linhas);}
#line 1658 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 121 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "else\n", linhas); }
#line 1664 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 121 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "end\n", linhas);}
#line 1670 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 130 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "while ( ", linhas); }
#line 1676 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 130 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, " ) \n" , linhas); }
#line 1682 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 134 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "\nend\n" , linhas); }
#line 1688 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 135 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "\nend\n" , linhas); }
#line 1694 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 139 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1700 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 141 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1706 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 143 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while ", linhas);}
#line 1712 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 143 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);}
#line 1718 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 143 "compiler.y" /* yacc.c:1646  */
    {contador_for++;}
#line 1724 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 147 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0';}
#line 1730 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 147 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\nend\n", linhas);}
#line 1736 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 149 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0'; printf("condicao eh %s\n", condicao[contador_for]);InsereNaSaida(&saida, "\nend\n", linhas);}
#line 1742 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 151 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1748 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 151 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "end\n", linhas);}
#line 1754 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 159 "compiler.y" /* yacc.c:1646  */
    {if(procura_tabela_simbolos((yyvsp[0].strval))){strcat(condicao[contador_for], yytext );printf(" KK %s\n", condicao[contador_for]);}else{erro++;yyerror("Variavel nao declarada");}}
#line 1760 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 159 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], " = " ); }
#line 1766 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 159 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1772 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 163 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\t", linhas);}
#line 1778 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 163 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "end\n", linhas);}
#line 1784 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 165 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "end\n", linhas);}
#line 1790 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 167 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "end\n", linhas);}
#line 1796 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 191 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " and ", linhas);}
#line 1802 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 192 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " or ", linhas);}
#line 1808 "compiler.tab.c" /* yacc.c:1646  */
    break;


#line 1812 "compiler.tab.c" /* yacc.c:1646  */
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
#line 200 "compiler.y" /* yacc.c:1906  */


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


