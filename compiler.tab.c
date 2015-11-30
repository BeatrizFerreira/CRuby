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
    END = 268,
    SEMICOLON = 269,
    PLUS = 270,
    MINUS = 271,
    TIMES = 272,
    DIVISION = 273,
    MENOR = 274,
    MENORIGUAL = 275,
    MAIOR = 276,
    MAIORIGUAL = 277,
    IGUAL = 278,
    DIFERENTE = 279,
    E = 280,
    OU = 281,
    SE = 282,
    SENAO = 283,
    LEFT_PARENTHESIS = 284,
    RIGHT_PARENTHESIS = 285,
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
#line 16 "compiler.y" /* yacc.c:355  */

    char * strval;
    int intval;

#line 162 "compiler.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 177 "compiler.tab.c" /* yacc.c:358  */

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
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

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
       0,    34,    34,    35,    38,    39,    43,    43,    44,    44,
      45,    49,    49,    50,    54,    54,    55,    59,    59,    59,
      63,    63,    63,    67,    68,    69,    70,    71,    72,    73,
      73,    77,    78,    79,    80,    81,    82,    83,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     119,   119,   122,   122,   124,   124,   126,   126,   130,   131,
     131,   135,   135,   139,   140,   146,   146,   148,   148,   148,
     148,   152,   152,   152,   154,   154,   156,   156,   160,   160,
     164,   164,   164,   168,   170,   172,   174,   177,   178,   179,
     183,   184,   185,   189,   190,   194,   194,   195,   195,   199,
     200,   201,   202
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE_INT", "TYPE_FLOAT", "TYPE_DOUBLE",
  "TYPE_CHAR", "IDENTIFIER", "ATTR", "N_INTEGER", "N_REAL", "N_CHAR",
  "END_LINE", "END", "SEMICOLON", "PLUS", "MINUS", "TIMES", "DIVISION",
  "MENOR", "MENORIGUAL", "MAIOR", "MAIORIGUAL", "IGUAL", "DIFERENTE", "E",
  "OU", "SE", "SENAO", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS",
  "LEFT_BRACKETS", "RIGHT_BRACKETS", "FOR", "WHILE", "REFUSE", "$accept",
  "Input", "Line", "command", "$@1", "$@2", "loop_and_conditional", "$@3",
  "declaration", "$@4", "declaration_attribution", "$@5", "$@6",
  "attribution", "$@7", "$@8", "expression", "$@9", "expression_loop",
  "math_operation_loop", "$@10", "$@11", "$@12", "$@13", "comparator_loop",
  "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "math_operation", "$@20",
  "$@21", "$@22", "$@23", "comparator", "$@24", "$@25", "$@26", "$@27",
  "$@28", "$@29", "if_", "$@30", "else_", "$@31", "$@32", "$@33", "loop",
  "$@34", "while_statement", "$@35", "while", "for_", "$@36", "$@37",
  "$@38", "$@39", "for_statement", "$@40", "$@41", "$@42", "$@43",
  "first_for_loop_part", "$@44", "last_for_loop_part", "$@45", "$@46",
  "conditional", "multiple_command", "multiple_conditional",
  "multiple_conditional_loop", "booleans", "$@47", "$@48", "type", YY_NULLPTR
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

#define YYPACT_NINF -77

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define YYTABLE_NINF -128

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -77,    11,   -77,   -77,   -17,   -77,   -77,   141,     8,   -77,
      -8,   -77,     6,    -7,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,    19,   -77,   -77,   -77,    15,   -77,   -77,    59,
     -77,   -77,    48,    27,     8,    35,    39,    23,     2,    26,
      24,     2,   -77,     2,   -77,    38,   -77,   -77,    63,    76,
     -77,    60,     2,     2,    53,   -21,   -77,    60,    55,    56,
     -77,    64,    87,   -77,   -77,    87,   -77,   -10,   -77,   -77,
     -77,   157,   -77,     7,    61,   -77,   -77,    26,    -8,    48,
      79,    84,   -77,   -77,   -77,   -77,   -77,    25,   101,    87,
     136,   -77,    87,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,    91,   -77,   -77,   -77,   -77,
       2,   -77,     2,   -77,   -77,   147,   -77,   103,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    60,    60,
      96,    97,   123,   -77,   -77,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   -77,   -77,   -77,   -77,   -77,
     118,   124,   -77,   -77,   102,   -77,   -77,   -77,   -77,   102,
     167,   -77,   -77,   119,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167
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
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,    -1,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   158,   -77,   -77,   -62,   -77,   -76,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -49,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   116,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   117,
     -36,   -56,   -77,   107,   -77,   -77,   -77
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
       6,    81,    73,    90,  -120,    58,   -82,    59,    73,    -8,
     -86,     2,    15,    87,    52,    23,    75,    76,    -8,    25,
    -120,  -121,    -8,     3,    31,    39,    35,   115,    42,   -11,
     117,    44,   103,  -127,  -117,     4,   -89,  -121,   -11,  -123,
      28,    45,   -11,   -17,     4,   -89,    38,    50,     4,   -89,
     103,  -127,    51,    57,    55,    -8,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -8,    66,    61,    67,
      68,    69,   145,   146,   130,   -11,   131,    63,   109,    73,
      73,     4,   -89,   163,    64,    77,   -11,    82,    83,    70,
      41,   106,     4,   -89,    66,    84,    86,    68,    69,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   155,
     110,   156,   157,   158,   111,   114,    70,   129,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   147,   148,
     149,   159,   153,   134,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,    16,    17,    18,    19,   152,   174,
     116,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   133,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    47,   107,   113,   108
};

static const yytype_uint8 yycheck[] =
{
       1,    57,    51,    65,    14,    41,    27,    43,    57,     7,
      31,     0,    29,    62,    12,     7,    52,    53,     7,    27,
      30,    14,     7,    12,    31,    26,     7,    89,    29,    27,
      92,    32,    25,    26,    32,    33,    34,    30,    27,    14,
      34,    14,    27,     8,    33,    34,    31,     8,    33,    34,
      25,    26,    29,    29,    28,     7,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     7,     7,    30,     9,
      10,    11,   128,   129,   110,    27,   112,    14,    79,   128,
     129,    33,    34,   159,     8,    32,    27,    32,    32,    29,
      31,    30,    33,    34,     7,    31,     9,    10,    11,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,     7,
      31,     9,    10,    11,    30,    14,    29,    26,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    32,    32,
       7,    29,     8,    30,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     3,     4,     5,     6,    30,    30,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    34,    77,    87,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,     0,    12,    33,    38,    39,    40,    41,    42,
      43,    85,    86,    90,    95,    29,     3,     4,     5,     6,
      44,    46,   112,     7,    49,    27,    79,   105,    34,    87,
      89,    31,    96,   100,   101,     7,    50,    80,    31,    39,
      88,    31,    39,    98,    39,    14,    92,    49,    45,    47,
       8,    29,    12,    39,   106,    28,    81,    29,   106,   106,
      97,    30,    93,    14,     8,    51,     7,     9,    10,    11,
      29,    52,    67,    72,   107,   106,   106,    32,    82,    83,
      84,   107,    32,    32,    31,    91,     9,    72,   108,    48,
      52,    72,    53,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   109,   111,    30,    81,   105,    39,
      31,    30,    99,   109,    14,    52,    14,    52,    68,    69,
      70,    71,    73,    74,    75,    76,    77,    78,   110,    26,
     106,   106,    94,    14,    30,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,   107,   107,    32,    32,     7,
     102,   103,    30,     8,   104,     7,     9,    10,    11,    29,
      54,    55,    60,    54,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    30,    56,    57,    58,    59,    61,
      62,    63,    64,    65,    66,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54
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
      85,    88,    87,    89,    89,    91,    90,    92,    93,    94,
      90,    96,    97,    95,    98,    95,    99,    95,   101,   100,
     103,   104,   102,   105,   105,   105,   105,   106,   106,   106,
     107,   107,   107,   108,   108,   110,   109,   111,   109,   112,
     112,   112,   112
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
#line 43 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1413 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 44 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1419 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 49 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1425 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 54 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas); InsereNaSaida(&saida, " = 0\n", linhas);}
#line 1431 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 54 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[-2].strval), contador_tab); cont++; linhas++; }
#line 1437 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 59 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[0].strval), contador_tab);InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas);cont++;}
#line 1443 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 59 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1449 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 59 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1455 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 63 "compiler.y" /* yacc.c:1646  */
    {if(verifica_usabilidade((yyvsp[0].strval), contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");}}
#line 1461 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 63 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1467 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 63 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1473 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 67 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1479 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 68 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1485 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 69 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1491 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 70 "compiler.y" /* yacc.c:1646  */
    {if(verifica_usabilidade((yyvsp[0].strval), contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");} }
#line 1497 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 73 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1503 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 73 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1509 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 77 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1515 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 78 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext); }
#line 1521 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 79 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1527 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 80 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); printf("[%d] = %s\n", contador_for , condicao[contador_for]); }
#line 1533 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 87 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1539 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 88 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1545 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 89 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1551 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 90 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1557 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 94 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1563 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 95 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1569 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 96 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1575 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 97 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1581 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 98 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1587 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 99 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1593 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 103 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " + ", linhas);}
#line 1599 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 104 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " - ", linhas);}
#line 1605 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 105 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " * ", linhas);}
#line 1611 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 106 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " / ", linhas);}
#line 1617 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 110 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " < ", linhas);}
#line 1623 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 111 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " <= ", linhas);}
#line 1629 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 112 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " > ", linhas);}
#line 1635 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 113 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " >= ", linhas);}
#line 1641 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 114 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " == ", linhas);}
#line 1647 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 115 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " != ", linhas);}
#line 1653 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 119 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "if (", linhas); }
#line 1659 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 119 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ")\n", linhas); contador_tab++; }
#line 1665 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 122 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "els", linhas); }
#line 1671 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 124 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "else\n", linhas); }
#line 1677 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 124 "compiler.y" /* yacc.c:1646  */
    {  contador_tab--;  InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1683 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 126 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); contador_tab++; InsereNaSaida(&saida, "else\n", linhas); }
#line 1689 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 126 "compiler.y" /* yacc.c:1646  */
    { contador_tab--;InsereTabsSaida(&saida, contador_tab);InsereNaSaida(&saida, "end\n", linhas);}
#line 1695 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 131 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1701 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 135 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "while ( ", linhas); }
#line 1707 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 135 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, " ) \n" , linhas); contador_tab++; }
#line 1713 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 139 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "\nend\n" , linhas);}
#line 1719 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 140 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n" , linhas); }
#line 1725 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 146 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1731 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 146 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1737 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 148 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1743 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 148 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while ", linhas);}
#line 1749 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 148 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);}
#line 1755 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 148 "compiler.y" /* yacc.c:1646  */
    {contador_for++;}
#line 1761 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 152 "compiler.y" /* yacc.c:1646  */
    {contador_tab++;}
#line 1767 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 152 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0';}
#line 1773 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 152 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1779 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 154 "compiler.y" /* yacc.c:1646  */
    {contador_tab++;}
#line 1785 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 154 "compiler.y" /* yacc.c:1646  */
    { InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0'; printf("condicao eh %s\n", condicao[contador_for]); InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1791 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 156 "compiler.y" /* yacc.c:1646  */
    {contador_tab++; InsereNaSaida(&saida, "while true\n", linhas);}
#line 1797 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 156 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
#line 1803 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 160 "compiler.y" /* yacc.c:1646  */
    {InsereTabsSaida(&saida, contador_tab);}
#line 1809 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 164 "compiler.y" /* yacc.c:1646  */
    {if(procura_tabela_simbolos((yyvsp[0].strval), contador_tab)){strcat(condicao[contador_for], yytext );printf(" KK %s\n", condicao[contador_for]);}else{yyerror("Variable not declared!\n");}}
#line 1815 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 164 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], " = " ); }
#line 1821 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 164 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1827 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 168 "compiler.y" /* yacc.c:1646  */
    {contador_tab--; {InsereTabsSaida(&saida, contador_tab);}  InsereNaSaida(&saida, "end\n", linhas);}
#line 1833 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 170 "compiler.y" /* yacc.c:1646  */
    {contador_tab--; {InsereTabsSaida(&saida, contador_tab);} InsereNaSaida(&saida, "end\n", linhas);}
#line 1839 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 183 "compiler.y" /* yacc.c:1646  */
    { if ( strcmp((yyvsp[0].strval), "0") == 0 )InsereNaSaida(&saida, "false", linhas); else InsereNaSaida(&saida, "true", linhas);}
#line 1845 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 194 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " and ", linhas);}
#line 1851 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 195 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " or ", linhas);}
#line 1857 "compiler.tab.c" /* yacc.c:1646  */
    break;


#line 1861 "compiler.tab.c" /* yacc.c:1646  */
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
#line 203 "compiler.y" /* yacc.c:1906  */


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


