/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass5_roll.y" /* yacc.c:339  */

#include <stdio.h>
extern int yylex();
void yyerror(const char*);
#include "ass5_roll_translator.h"
#include <string.h>

#line 74 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ARROW = 258,
    INCREMENT = 259,
    CONTINUE = 260,
    DEFAULT = 261,
    DO = 262,
    DOUBLE = 263,
    ELSE = 264,
    EXTERN = 265,
    FLOAT = 266,
    FOR = 267,
    GOTO = 268,
    IF = 269,
    INLINE = 270,
    INT = 271,
    LONG = 272,
    RESTRICT = 273,
    RETURN = 274,
    SHORT = 275,
    SIZEOF = 276,
    STATIC = 277,
    SWITCH = 278,
    VOID = 279,
    VOLATILE = 280,
    DECREMENT = 281,
    LEFT_SHIFT = 282,
    RIGHT_SHIFT = 283,
    LSOE = 284,
    GTOE = 285,
    IS_EQUAL = 286,
    NOT_EQUAL = 287,
    AND = 288,
    OR = 289,
    TRIPLE_DOT = 290,
    MULTIPLY_EQUAL = 291,
    DIVIDE_EQUAL = 292,
    PERCENT_EQUAL = 293,
    PLUS_EQUAL = 294,
    MINUS_EQUAL = 295,
    LEFT_SHIFT_EQUAL = 296,
    RIGHT_SHIFT_EQUAL = 297,
    AND_EQUAL = 298,
    HAT_EQUAL = 299,
    OR_EQUAL = 300,
    BREAK = 301,
    CASE = 302,
    CHAR = 303,
    CONST = 304,
    WHILE = 305,
    SINGLE_COMMENT = 306,
    MULTI_COMMENT = 307,
    IDENTIFIER = 308,
    INTEGER_NO = 309,
    FLOAT_NO = 310,
    CHARACTER = 311,
    STRING = 312,
    PUNCTUATOR = 313,
    WS = 314,
    CONFLICTIVE_IF = 315
  };
#endif
/* Tokens.  */
#define ARROW 258
#define INCREMENT 259
#define CONTINUE 260
#define DEFAULT 261
#define DO 262
#define DOUBLE 263
#define ELSE 264
#define EXTERN 265
#define FLOAT 266
#define FOR 267
#define GOTO 268
#define IF 269
#define INLINE 270
#define INT 271
#define LONG 272
#define RESTRICT 273
#define RETURN 274
#define SHORT 275
#define SIZEOF 276
#define STATIC 277
#define SWITCH 278
#define VOID 279
#define VOLATILE 280
#define DECREMENT 281
#define LEFT_SHIFT 282
#define RIGHT_SHIFT 283
#define LSOE 284
#define GTOE 285
#define IS_EQUAL 286
#define NOT_EQUAL 287
#define AND 288
#define OR 289
#define TRIPLE_DOT 290
#define MULTIPLY_EQUAL 291
#define DIVIDE_EQUAL 292
#define PERCENT_EQUAL 293
#define PLUS_EQUAL 294
#define MINUS_EQUAL 295
#define LEFT_SHIFT_EQUAL 296
#define RIGHT_SHIFT_EQUAL 297
#define AND_EQUAL 298
#define HAT_EQUAL 299
#define OR_EQUAL 300
#define BREAK 301
#define CASE 302
#define CHAR 303
#define CONST 304
#define WHILE 305
#define SINGLE_COMMENT 306
#define MULTI_COMMENT 307
#define IDENTIFIER 308
#define INTEGER_NO 309
#define FLOAT_NO 310
#define CHARACTER 311
#define STRING 312
#define PUNCTUATOR 313
#define WS 314
#define CONFLICTIVE_IF 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "ass5_roll.y" /* yacc.c:355  */

  int intval;
  float floatval;
  char charval;
  char *strval;
  struct id_attr_struct id_attr;
  struct attribute_expression attribute_exp;
  struct attribute_variable_declaration var_decl_attr;
  union attribute initializer_attr;
  quad_data_types attribute_unary;
  int instr;
  struct lnode *N_attr;
  struct parameter_list *param_attr;

#line 249 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 266 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1065

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  341

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      61,    62,    70,    71,    68,    72,    65,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,    80,    67,    73,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   132,   132,   143,   154,   165,   176,   180,   187,   191,
     223,   244,   257,   261,   265,   280,   295,   299,   306,   310,
     317,   329,   344,   359,   368,   372,   379,   383,   387,   391,
     395,   399,   406,   410,   417,   421,   497,   573,   652,   656,
     732,   811,   815,   827,   842,   846,   858,   870,   882,   897,
     901,   913,   928,   932,   947,   951,   966,   970,   985,   989,
     999,  1003,  1013,  1017,  1045,  1049,  1121,  1125,  1129,  1133,
    1137,  1141,  1145,  1149,  1153,  1157,  1161,  1168,  1172,  1179,
    1186,  1190,  1208,  1209,  1210,  1219,  1220,  1221,  1222,  1223,
    1227,  1232,  1239,  1266,  1304,  1305,  1309,  1316,  1323,  1324,
    1331,  1332,  1339,  1343,  1344,  1348,  1349,  1353,  1354,  1355,
    1359,  1363,  1371,  1380,  1398,  1400,  1402,  1411,  1413,  1421,
    1423,  1425,  1427,  1434,  1443,  1448,  1450,  1454,  1455,  1463,
    1464,  1468,  1469,  1473,  1474,  1478,  1486,  1496,  1504,  1508,
    1509,  1513,  1517,  1521,  1522,  1526,  1527,  1531,  1535,  1536,
    1540,  1541,  1545,  1546,  1550,  1551,  1552,  1553,  1554,  1555,
    1559,  1560,  1561,  1565,  1566,  1573,  1577,  1585,  1586,  1590,
    1592,  1596,  1604,  1620,  1624,  1636,  1644,  1657,  1661,  1662,
    1663,  1664,  1670,  1678,  1679,  1683,  1684,  1688,  1689,  1696,
    1697,  1701,  1706,  1713
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARROW", "INCREMENT", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTERN", "FLOAT", "FOR", "GOTO",
  "IF", "INLINE", "INT", "LONG", "RESTRICT", "RETURN", "SHORT", "SIZEOF",
  "STATIC", "SWITCH", "VOID", "VOLATILE", "DECREMENT", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LSOE", "GTOE", "IS_EQUAL", "NOT_EQUAL", "AND", "OR",
  "TRIPLE_DOT", "MULTIPLY_EQUAL", "DIVIDE_EQUAL", "PERCENT_EQUAL",
  "PLUS_EQUAL", "MINUS_EQUAL", "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL",
  "AND_EQUAL", "HAT_EQUAL", "OR_EQUAL", "BREAK", "CASE", "CHAR", "CONST",
  "WHILE", "SINGLE_COMMENT", "MULTI_COMMENT", "IDENTIFIER", "INTEGER_NO",
  "FLOAT_NO", "CHARACTER", "STRING", "PUNCTUATOR", "WS", "CONFLICTIVE_IF",
  "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "AND_expression", "exclusive_OR_expression",
  "inclusive_OR_expression", "logical_AND_expression",
  "logical_OR_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_optional", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "type_qualifier_list_optional",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation", "designation_optional", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", "M", "N", "F", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    40,    41,    91,    93,    46,   123,   125,    44,    38,
      42,    43,    45,   126,    33,    47,    37,    60,    62,    94,
     124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -233

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-233)))

#define YYTABLE_NINF -194

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1016,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,  -233,  -233,  -233,  -233,   -32,  1016,  1016,  1016,  1016,
     436,  -233,  -233,  -233,    72,    -5,  -233,   -53,  -233,   365,
     113,    56,  -233,  -233,  -233,  -233,  -233,  -233,   -46,  -233,
    -233,    -5,    72,  -233,   717,  -233,   -32,   928,   -36,   947,
     639,   113,  -233,  -233,  -233,  -233,     4,   801,   838,   801,
    -233,  -233,  -233,  -233,  -233,   598,    19,  -233,  -233,  -233,
    -233,  -233,  -233,  -233,    50,   263,   861,  -233,    68,   130,
     178,     3,    83,    55,    28,    39,   117,     2,  -233,  -233,
    -233,   271,  -233,  -233,  -233,  -233,  -233,    72,    93,    92,
    -233,   -28,    -7,  -233,   102,   680,   103,   598,  -233,   598,
    -233,  -233,  -233,    77,   509,  -233,   509,   151,   861,   163,
     152,  -233,   717,   -24,  -233,   169,  -233,  -233,   741,   861,
     173,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,  -233,   861,  -233,  -233,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,  -233,  -233,   149,   157,   164,  -233,   190,   199,   192,
     108,   194,   172,   861,  -233,   176,  -233,  -233,    38,  -233,
    -233,  -233,  -233,   193,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,   995,  -233,   204,    -7,   861,  -233,   861,  -233,   195,
     197,   201,   203,  -233,   861,  -233,  -233,  -233,   778,  -233,
     205,  -233,  -233,   147,  -233,  -233,  -233,  -233,  -233,    86,
    -233,   107,  -233,  -233,  -233,  -233,  -233,    68,    68,   130,
     130,   178,   178,   -20,   178,   178,   -20,    83,    55,    28,
     861,   861,  -233,  -233,   490,   490,   417,   182,   861,  -233,
      52,   861,  -233,   185,   207,   490,  -233,  -233,   346,  -233,
    -233,  -233,   206,   209,  -233,  -233,   214,   214,  -233,    19,
    -233,  -233,  -233,   717,  -233,   861,  -233,    39,   117,   861,
    -233,  -233,   527,  -233,  -233,   230,  -233,    90,   490,   861,
    -233,  -233,  -233,  -233,   167,  -233,  -233,   230,   221,   861,
     527,   247,   490,  -233,   230,  -233,   175,   228,   250,    91,
    -233,  -233,  -233,   251,  -233,  -233,   861,   490,  -233,   490,
    -233,   861,   230,  -233,   861,  -233,   490,  -233,   252,   230,
     303,  -233,   231,   254,  -233,  -233,  -233,   490,   490,  -233,
    -233
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   102,    94,   101,   110,    99,   100,   108,    98,    95,
      96,   109,    97,   107,   186,     0,    82,    84,    86,    88,
       0,   183,   185,   113,     0,   126,    80,     0,    90,    92,
     112,     0,    83,    85,    87,    89,     1,   184,     0,   129,
     128,   125,     0,    81,     0,   189,     0,     0,     0,     0,
       0,   111,   114,   130,   127,    91,    92,     0,     0,     0,
       2,     3,     4,     5,     6,     0,   149,    26,    27,    28,
      29,    30,    31,     8,    20,    32,     0,    34,    38,    41,
      44,    49,    52,    54,    56,    58,    60,    62,    64,   142,
      93,     0,   190,   187,   188,   139,   123,   138,     0,   133,
     135,     0,   132,   118,     0,     0,     0,     0,    21,     0,
      24,    22,    77,     0,   106,   141,   106,     0,     0,     0,
       0,   148,     0,     0,   150,     0,    14,    15,     0,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    66,     0,    32,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,   191,     0,     0,     0,   191,     0,     0,     0,
       0,     0,     0,     0,   191,     2,   163,   170,     0,   167,
     168,   154,   155,   191,   165,   156,   157,   158,   159,   137,
     122,     0,   124,     0,   131,     0,   116,     0,   117,     0,
       0,     0,     0,     7,     0,   105,   103,   104,     0,    79,
       0,   153,   143,   149,   145,   147,   151,    13,    11,     0,
      18,     0,    12,    65,    35,    36,    37,    39,    40,    42,
      43,    47,    48,    51,    45,    46,    50,    53,    55,    57,
       0,     0,   191,   179,     0,     0,     0,     0,     0,   182,
       0,     0,   180,     0,     0,     0,   169,   164,     0,   134,
     136,   140,     0,     0,   115,   121,     0,    25,    78,   149,
      33,   152,   144,     0,    10,     0,     9,    59,    61,     0,
     162,   191,     0,   191,   178,   192,   181,     0,     0,     0,
     160,   166,   119,   120,     0,   146,    19,   192,     0,     0,
       0,     0,     0,   161,   192,    16,   149,     0,     0,     0,
     192,   191,   173,     0,    17,   191,     0,     0,   191,     0,
     191,     0,   192,   177,     0,   192,     0,    63,     0,   192,
     171,   174,     0,     0,   191,   175,   191,     0,     0,   172,
     176
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -233,  -233,  -233,  -233,   -57,  -233,   -68,    96,    97,    76,
     -84,   165,   170,   162,    94,    89,  -233,  -113,    -1,  -233,
     -62,   158,   -25,     7,  -233,   291,  -233,    81,    71,   219,
      21,  -233,    13,   305,    23,   -33,   237,  -233,  -233,   156,
    -233,    84,  -116,    79,  -233,  -201,  -233,   226,  -170,  -233,
     202,  -233,   116,  -232,  -233,  -233,  -233,  -233,   357,  -233,
    -233,  -111,   -86,  -233
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,   219,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,   112,   142,
     178,   210,    14,    46,    27,    28,    16,    17,   115,   206,
      18,    19,    56,    30,    31,    41,   106,    98,    99,   100,
     101,   117,    90,   120,   121,   122,   123,   124,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    20,    21,    22,
      47,   240,   163,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     108,   110,   111,   113,    45,   209,   214,    15,   144,   152,
     153,     7,   273,     7,   283,    42,    52,   105,    11,   143,
      11,    23,    92,    32,    33,    34,    35,    15,    29,    24,
      91,    43,   152,   153,   192,   154,   162,    38,    25,   118,
     193,   119,    13,    89,    13,   113,    39,   113,    40,   104,
     299,   241,    26,   125,   126,   245,    97,   155,   156,   215,
     209,   143,    53,   254,    54,    25,   179,   221,   310,   194,
     233,    39,   258,   236,   280,   281,   127,   224,   225,   226,
     155,   156,   118,  -192,   119,   290,   116,    44,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   199,   273,   204,   159,   250,    23,
     189,   128,    57,   129,   157,   130,   143,    24,   303,   160,
     204,    89,   256,    39,   158,    23,    53,   220,   116,    58,
     116,   279,   312,    24,    59,   116,   286,   116,   145,   203,
     270,   223,    25,   146,   147,   204,   114,   323,   274,   325,
     161,   143,   302,   317,   275,   190,   331,   295,   204,   204,
     191,    60,    61,    62,    63,    64,   196,   339,   340,    65,
     298,   276,   300,   200,    49,   204,    50,    67,    68,    69,
      70,    71,    72,   143,   143,   205,   285,   205,   114,   287,
     114,   201,   249,   202,   262,   114,   263,   114,    97,   301,
     319,   148,   149,   268,   321,   150,   151,   324,   327,   326,
     118,   307,   119,   208,   272,    53,   211,   297,   313,   212,
     213,   282,   217,   337,   318,   338,   222,   304,   231,   232,
     242,   234,   235,   179,   305,   306,   328,   309,   118,   330,
     119,   243,   314,   333,   227,   228,   244,   229,   230,    93,
      94,   246,   247,   248,   322,   251,   252,   261,   255,   264,
     257,   265,   329,   266,   143,   267,   284,   288,   289,   271,
     292,   308,    89,   293,   296,    57,   164,   165,   166,     1,
     269,     2,     3,   167,   168,   169,     4,     5,     6,     7,
     170,     8,    58,     9,   171,    10,    11,    59,   204,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   311,
     315,   316,   334,   320,   332,   335,   336,   172,   173,    12,
      13,   174,   239,   237,   175,    61,    62,    63,    64,   238,
     278,   253,    65,    55,   277,   207,    51,    91,   176,   195,
      67,    68,    69,    70,    71,    72,   141,   260,   294,   216,
      57,   164,   165,   166,     1,   177,     2,     3,   167,   168,
     169,     4,     5,     6,     7,   170,     8,    58,     9,   171,
      10,    11,    59,     1,   291,     2,     3,    37,     0,     0,
       4,     5,     6,     7,     0,     8,     0,     9,     0,    10,
      11,     0,   172,   173,    12,    13,   174,     0,     0,   175,
      61,    62,    63,    64,     0,     0,     0,    65,     0,     0,
       0,     0,    91,    12,    13,    67,    68,    69,    70,    71,
      72,    57,     0,     0,     0,     1,     0,     2,     3,     0,
     177,  -193,     4,     5,     6,     7,    36,     8,    58,     9,
       0,    10,    11,    59,     1,     0,     2,     3,    44,     0,
       0,     4,     5,     6,     7,     0,     8,     0,     9,     0,
      10,    11,     0,     0,     0,    12,    13,     0,     0,     0,
      60,    61,    62,    63,    64,     0,     0,     0,    65,     0,
       0,     0,     0,     0,    12,    13,    67,    68,    69,    70,
      71,    72,     0,     0,    57,   164,   165,   166,     0,     0,
       0,   177,   167,   168,   169,     0,     0,     0,     0,   170,
       0,    58,     0,   171,     0,     0,    59,     1,     0,     0,
       3,     0,     0,     0,     0,     5,     6,     7,     0,     8,
       0,    57,     0,    10,    11,     0,   172,   173,     0,     0,
     174,     0,     0,   175,    61,    62,    63,    64,    58,     0,
       0,    65,     0,    59,     0,     0,    91,    12,    13,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,     0,     0,     0,    65,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,    72,    57,     0,     0,     0,     1,     0,     0,     3,
       0,   177,     0,     0,     5,     6,     7,     0,     8,    58,
       0,     0,    10,    11,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,    12,    13,     0,     0,
       0,    60,    61,    62,    63,    64,     0,     7,     0,    65,
      58,   102,     0,     0,    11,    59,     0,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,    13,     0,
       0,     0,    60,    61,    62,    63,    64,     0,     7,     0,
      65,    58,   197,   103,     0,    11,    59,     0,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,    60,    61,    62,    63,    64,    58,     0,
       0,    65,     0,    59,   198,    57,     0,     0,     0,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,    59,     0,     0,
      60,    61,    62,    63,    64,     0,     0,     0,    65,     0,
       0,     0,    57,    66,     0,     0,    67,    68,    69,    70,
      71,    72,     0,     0,    60,    61,    62,    63,    64,    58,
       0,     0,    65,   218,    59,    57,     0,     0,     0,     0,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,    59,     0,     0,
       0,    60,    61,    62,    63,    64,     0,     0,     0,    65,
       0,     0,    57,     0,   269,     0,     0,    67,    68,    69,
      70,    71,    72,     0,    60,    61,    62,    63,    64,    58,
       0,     0,   107,     0,    59,    57,     0,     0,     0,     0,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,    59,     0,     0,
       0,    60,    61,    62,    63,    64,     0,     0,     0,   109,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,     0,    60,    61,    62,    63,    64,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,    72,     1,     0,     2,     3,
       0,     0,     0,     4,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,     0,     1,     0,     2,     3,     0,
       0,     0,     4,     5,     6,     7,     0,     8,     0,     9,
       0,    10,    11,     0,     0,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    12,    13,     0,     0,     0,
      95,     0,     0,     1,     0,     2,     3,     0,     0,    96,
       4,     5,     6,     7,     0,     8,     0,     9,     0,    10,
      11,     0,     0,     0,     1,     0,     2,     3,     0,     0,
     259,     4,     5,     6,     7,     0,     8,     0,     9,     0,
      10,    11,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13
};

static const yytype_int16 yycheck[] =
{
      57,    58,    59,    65,    29,   118,   122,     0,    76,    29,
      30,    18,   213,    18,   246,    68,    62,    50,    25,    76,
      25,    53,    47,    16,    17,    18,    19,    20,    15,    61,
      66,    84,    29,    30,    62,    32,    34,    24,    70,    63,
      68,    65,    49,    44,    49,   107,    25,   109,    25,    50,
     282,   162,    84,     3,     4,   166,    49,    77,    78,    83,
     173,   118,    41,   174,    41,    70,    91,   129,   300,   102,
     154,    50,   183,   157,   244,   245,    26,   145,   146,   147,
      77,    78,    63,    81,    65,   255,    65,    83,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   105,   306,    68,    79,   170,    53,
      97,    61,     4,    63,    31,    65,   173,    61,   288,    80,
      68,   122,    84,   102,    69,    53,   105,   128,   107,    21,
     109,   242,   302,    61,    26,   114,    84,   116,    70,    62,
     208,   142,    70,    75,    76,    68,    65,   317,    62,   319,
      33,   208,    62,    62,    68,    62,   326,   273,    68,    68,
      68,    53,    54,    55,    56,    57,    64,   337,   338,    61,
     281,    64,   283,    70,    61,    68,    63,    69,    70,    71,
      72,    73,    74,   240,   241,   114,   248,   116,   107,   251,
     109,   107,    84,   109,   195,   114,   197,   116,   191,   285,
     311,    71,    72,   204,   315,    27,    28,   318,   321,   320,
      63,   297,    65,    62,    67,   194,    53,   279,   304,    67,
      68,   246,    53,   334,   310,   336,    53,   289,   152,   153,
      81,   155,   156,   258,    67,    68,   322,   299,    63,   325,
      65,    84,    67,   329,   148,   149,    82,   150,   151,    47,
      48,    61,    53,    61,   316,    61,    84,    53,    82,    64,
      67,    64,   324,    62,   321,    62,    84,    82,    61,    64,
      64,    50,   273,    64,   275,     4,     5,     6,     7,     8,
      66,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    68,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    62,
      82,    61,     9,    62,    62,    84,    62,    46,    47,    48,
      49,    50,   160,   158,    53,    54,    55,    56,    57,   159,
     241,   173,    61,    42,   240,   116,    31,    66,    67,   102,
      69,    70,    71,    72,    73,    74,    83,   191,   269,   123,
       4,     5,     6,     7,     8,    84,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     8,   258,    10,    11,    20,    -1,    -1,
      15,    16,    17,    18,    -1,    20,    -1,    22,    -1,    24,
      25,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    66,    48,    49,    69,    70,    71,    72,    73,
      74,     4,    -1,    -1,    -1,     8,    -1,    10,    11,    -1,
      84,    66,    15,    16,    17,    18,     0,    20,    21,    22,
      -1,    24,    25,    26,     8,    -1,    10,    11,    83,    -1,
      -1,    15,    16,    17,    18,    -1,    20,    -1,    22,    -1,
      24,    25,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    48,    49,    69,    70,    71,    72,
      73,    74,    -1,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    84,    12,    13,    14,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    23,    -1,    -1,    26,     8,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,     4,    -1,    24,    25,    -1,    46,    47,    -1,    -1,
      50,    -1,    -1,    53,    54,    55,    56,    57,    21,    -1,
      -1,    61,    -1,    26,    -1,    -1,    66,    48,    49,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,     4,    -1,    -1,    -1,     8,    -1,    -1,    11,
      -1,    84,    -1,    -1,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    -1,    18,    -1,    61,
      21,    22,    -1,    -1,    25,    26,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    -1,    18,    -1,
      61,    21,    22,    64,    -1,    25,    26,    -1,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    21,    -1,
      -1,    61,    -1,    26,    64,     4,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      -1,    -1,     4,    66,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    53,    54,    55,    56,    57,    21,
      -1,    -1,    61,    62,    26,     4,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    -1,    -1,    -1,    61,
      -1,    -1,     4,    -1,    66,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    53,    54,    55,    56,    57,    21,
      -1,    -1,    61,    -1,    26,     4,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,     8,    -1,    10,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,
      22,    -1,    24,    25,    -1,     8,    -1,    10,    11,    -1,
      -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    48,    49,    -1,    -1,    -1,
      53,    -1,    -1,     8,    -1,    10,    11,    -1,    -1,    62,
      15,    16,    17,    18,    -1,    20,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,     8,    -1,    10,    11,    -1,    -1,
      35,    15,    16,    17,    18,    -1,    20,    -1,    22,    -1,
      24,    25,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    10,    11,    15,    16,    17,    18,    20,    22,
      24,    25,    48,    49,   107,   108,   111,   112,   115,   116,
     142,   143,   144,    53,    61,    70,    84,   109,   110,   117,
     118,   119,   108,   108,   108,   108,     0,   143,   117,   115,
     119,   120,    68,    84,    83,   107,   108,   145,   148,    61,
      63,   118,    62,   115,   119,   110,   117,     4,    21,    26,
      53,    54,    55,    56,    57,    61,    66,    69,    70,    71,
      72,    73,    74,    86,    87,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     127,    66,   107,   135,   135,    53,    62,   108,   122,   123,
     124,   125,    22,    64,   103,   120,   121,    61,    89,    61,
      89,    89,   103,   105,   112,   113,   115,   126,    63,    65,
     128,   129,   130,   131,   132,     3,     4,    26,    61,    63,
      65,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    83,   104,    89,    91,    70,    75,    76,    71,    72,
      27,    28,    29,    30,    32,    77,    78,    31,    69,    79,
      80,    33,    34,   147,     5,     6,     7,    12,    13,    14,
      19,    23,    46,    47,    50,    53,    67,    84,   105,   107,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   117,
      62,    68,    62,    68,   120,   121,    64,    22,    64,   103,
      70,   126,   126,    62,    68,   113,   114,   114,    62,   102,
     106,    53,    67,    68,   127,    83,   132,    53,    62,    88,
     103,   105,    53,   103,    91,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    94,    94,    95,    96,    97,    98,
     146,   146,    81,    84,    82,   146,    61,    53,    61,    84,
     105,    61,    84,   106,   146,    82,    84,    67,   146,    35,
     124,    53,   103,   103,    64,    64,    62,    62,   103,    66,
      91,    64,    67,   130,    62,    68,    64,    99,   100,   146,
     133,   133,   107,   138,    84,   105,    84,   105,    82,    61,
     133,   137,    64,    64,   128,   127,   103,   105,   146,   138,
     146,   147,    62,   133,   105,    67,    68,   147,    50,   105,
     138,    62,   133,   147,    67,    82,    61,    62,   147,   146,
      62,   146,   105,   133,   146,   133,   146,   102,   147,   105,
     147,   133,    62,   147,     9,    84,    62,   146,   146,   133,
     133
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    91,    91,    92,    92,    92,    92,    93,    93,
      93,    94,    94,    94,    95,    95,    95,    95,    95,    96,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   106,
     107,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   114,   114,   115,   115,   115,
     116,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   127,   127,   127,   128,   128,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   139,   140,   140,   140,   140,   141,   141,
     141,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   147,   148
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     4,
       1,     4,     1,     9,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     1,     1,     1,
       1,     2,     1,     1,     3,     5,     4,     4,     3,     6,
       6,     5,     4,     3,     4,     2,     1,     3,     2,     1,
       2,     1,     0,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     2,     4,     2,     1,     0,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     1,     3,     1,     1,     2,
       1,     8,    11,     5,     8,    10,    12,     7,     3,     2,
       2,     3,     2,     1,     2,     1,     1,     4,     4,     1,
       2,     0,     0,     0
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
        case 2:
#line 133 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyvsp[0].id_attr).loc = current->lookup((yyvsp[0].id_attr).var);
	  					if(!((yyvsp[0].id_attr).loc))
	  						(yyvsp[0].id_attr).loc = symbol_table->lookup((yyvsp[0].id_attr).var);
	  					(yyval.attribute_exp).loc = (yyvsp[0].id_attr).loc;
	  					(yyval.attribute_exp).loc = (yyvsp[0].id_attr).loc;
	  					(yyval.attribute_exp).type = ((yyvsp[0].id_attr).loc)->Type;
	  					(yyval.attribute_exp).array = (yyval.attribute_exp).loc;
	  					(yyval.attribute_exp).loc1 = 0;
					}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 144 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp).val.int_data = (yyvsp[0].intval);
					  	(yyval.attribute_exp).type = new_node(INT_,-1);
					  	(yyval.attribute_exp).loc = current->gentemp(INT_);
					  	char *arg1 = new char[10];
					  	sprintf(arg1,"%d",(yyvsp[0].intval));
					  	char *res = strdup(((yyval.attribute_exp).loc)->name);
					  	fields_quad x(arg1,0,res,ASSIGN,0,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(x);
					}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 155 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp).val.float_data = (yyvsp[0].floatval);
						(yyval.attribute_exp).type = new_node(FLOAT_,-1);
						(yyval.attribute_exp).loc = current->gentemp(FLOAT_);
					  	char *arg1 = new char[10];
					  	sprintf(arg1,"%lf",(yyvsp[0].floatval));
					  	char *res = strdup(((yyval.attribute_exp).loc)->name);
					  	fields_quad x(arg1,0,res,ASSIGN,0,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(x);
					}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 166 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp).val.char_data = (yyvsp[0].charval);
					  	(yyval.attribute_exp).type = new_node(CHAR_,-1);
					  	(yyval.attribute_exp).loc = current->gentemp(CHAR_);
					  	char *arg1 = new char[10];
					  	sprintf(arg1,"%c",(yyvsp[0].charval));
					  	char *res = strdup(((yyval.attribute_exp).loc)->name);
					  	fields_quad x(arg1,0,res,ASSIGN,0,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(x);
					}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 177 "ass5_roll.y" /* yacc.c:1646  */
    {
						// not needed 
					}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 181 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp) = (yyvsp[-1].attribute_exp);
					}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 188 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 192 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp).array = (yyvsp[-3].attribute_exp).array;
					  	(yyval.attribute_exp).type = ((yyvsp[-3].attribute_exp).type)->r;
					  	if(!((yyvsp[-3].attribute_exp).loc1)){
					  		(yyval.attribute_exp).loc1 = current->gentemp(INT_);
					  		int m = compute_width(((yyvsp[-3].attribute_exp).type)->r);
					  		char *arg1 = strdup(((yyvsp[-1].attribute_exp).loc)->name);
					  		char *arg2 = new char[10];
					  		sprintf(arg2,"%d",m);
					  		char *res = strdup(((yyval.attribute_exp).loc1)->name);
					  		fields_quad y(arg1,arg2,res,INTO,(yyvsp[-1].attribute_exp).loc,0,(yyval.attribute_exp).loc1);
					  		quad_array->emit(y);
					  	}
					  	else{
					  		symbol_table_fields *temp = current->gentemp(INT_);
						  	(yyval.attribute_exp).loc1 = current->gentemp(INT_);
						  	int n = compute_width((yyval.attribute_exp).type);
						  	char *arg1 = strdup(((yyvsp[-1].attribute_exp).loc)->name);
						  	char *arg2 = new char[10];
						  	sprintf(arg2,"%d",n);
						  	char *res = strdup(temp->name);
						  	fields_quad x(arg1,arg2,res,INTO,(yyvsp[-1].attribute_exp).loc,0,temp);
						  	quad_array->emit(x);
						  	arg1 = strdup(((yyvsp[-3].attribute_exp).loc1)->name);
						  	arg2 = strdup(temp->name);
						  	res = strdup(((yyval.attribute_exp).loc1)->name);
						  	fields_quad y(arg1,arg2,res,PLUS,(yyvsp[-3].attribute_exp).loc1,temp,(yyval.attribute_exp).loc1);
						  	quad_array->emit(y);
					  	}
					  	flag_array = 1;
					}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 224 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	parameter_list *temp = (yyvsp[-1].param_attr);
					  	int count = 0;
					  	while(temp){
					  		char *arg1 = strdup((temp->parameter)->name);
					  		fields_quad x(arg1,0,0,PARAM,temp->parameter,0,0);
					  		quad_array->emit(x);
					  		count++;
					  		temp = temp->next;
					  	}
					  	symbol_table_fields *t = symbol_table->lookup(((yyvsp[-3].attribute_exp).loc)->name);
					  	(yyval.attribute_exp).loc = current->gentemp(((((t->nestedTable)->table)[count]).Type)->down);
					  	char *res = strdup(((yyval.attribute_exp).loc)->name);
					  	char *arg1 = strdup(((yyvsp[-3].attribute_exp).loc)->name);
					  	char *arg2 = new char[10];
					  	sprintf(arg2,"%d",count);
					  	fields_quad x(arg1,arg2,res,call,(yyvsp[-3].attribute_exp).loc,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(x);
					  	(yyval.attribute_exp).type = ((yyval.attribute_exp).loc)->Type;
	  				}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 245 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	int count = 0;
					  	symbol_table_fields *t = symbol_table->lookup(((yyvsp[-2].attribute_exp).loc)->name);
					  	(yyval.attribute_exp).loc = current->gentemp(((((t->nestedTable)->table)[count]).Type)->down);
					  	char *res = strdup(((yyval.attribute_exp).loc)->name);
					  	char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  	char *arg2 = new char[10];
					  	sprintf(arg2,"%d",count);
					  	fields_quad x(arg1,arg2,res,call,(yyvsp[-2].attribute_exp).loc,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(x);
					  	(yyval.attribute_exp).type = ((yyval.attribute_exp).loc)->Type;
					  }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 258 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		// not required
				  	}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 262 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		// not required
				  	}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 266 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-1].attribute_exp).type)->down);
					  	char *arg1 = strdup(((yyvsp[-1].attribute_exp).loc)->name);
					  	char *res = strdup(((yyval.attribute_exp).loc)->name);
					  	fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-1].attribute_exp).loc,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(x);
					  	arg1 = strdup(((yyvsp[-1].attribute_exp).loc)->name);
					  	char *arg2 = new char[10];
					  	sprintf(arg2,"1");
					  	res = strdup(((yyvsp[-1].attribute_exp).loc)->name);
					  	fields_quad y(arg1,arg2,res,PLUS,(yyvsp[-1].attribute_exp).loc,0,(yyvsp[-1].attribute_exp).loc);
					  	quad_array->emit(y);
					  	(yyval.attribute_exp).type = (yyvsp[-1].attribute_exp).type;	
				  	}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 281 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-1].attribute_exp).type)->down);
					  	char *arg1 = strdup(((yyvsp[-1].attribute_exp).loc)->name);
					  	char *res = strdup(((yyval.attribute_exp).loc)->name);
					  	fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-1].attribute_exp).loc,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(x);
					  	arg1 = strdup(((yyvsp[-1].attribute_exp).loc)->name);
					  	char *arg2 = new char[10];
					  	sprintf(arg2,"1");
					  	res = strdup(((yyvsp[-1].attribute_exp).loc)->name);
					  	fields_quad y(arg1,arg2,res,MINUS,(yyvsp[-1].attribute_exp).loc,0,(yyvsp[-1].attribute_exp).loc);
					  	quad_array->emit(y);
					  	(yyval.attribute_exp).type = (yyvsp[-1].attribute_exp).type;
				  	}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 296 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		// not required
				  	}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 300 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		// not required
				  	}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 307 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.param_attr) = make_param_list((yyvsp[0].attribute_exp).loc);
					  }
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 311 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.param_attr) = merge_param_list((yyvsp[-2].param_attr),make_param_list((yyvsp[0].attribute_exp).loc));
					  }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 318 "ass5_roll.y" /* yacc.c:1646  */
    {
					(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
				  	if((yyvsp[0].attribute_exp).loc1){
				  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[0].attribute_exp).type)->down);
				  		char *arg1 = strdup(((yyvsp[0].attribute_exp).array)->name);
				  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc1)->name);
				  		char *res = strdup(((yyval.attribute_exp).loc)->name);
				  		fields_quad x(arg1,arg2,res,EQ_BRACKET,(yyvsp[0].attribute_exp).loc,(yyvsp[0].attribute_exp).loc1,(yyval.attribute_exp).loc);
				  		quad_array->emit(x);
					}
				}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 330 "ass5_roll.y" /* yacc.c:1646  */
    {
					(yyval.attribute_exp).loc = current->gentemp(((yyvsp[0].attribute_exp).type)->down);
				  	char *arg1 = strdup(((yyvsp[0].attribute_exp).loc)->name);
				  	char *arg2 = new char[10];
				  	sprintf(arg2,"1");
				  	char *res = strdup(((yyvsp[0].attribute_exp).loc)->name);
				  	fields_quad y(arg1,arg2,res,PLUS,(yyvsp[0].attribute_exp).loc,0,(yyvsp[0].attribute_exp).loc);
				  	quad_array->emit(y);
				  	arg1 = strdup(((yyvsp[0].attribute_exp).loc)->name);
				  	res = strdup(((yyval.attribute_exp).loc)->name);
				  	fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,(yyval.attribute_exp).loc);
				  	quad_array->emit(x);
				  	(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
				}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 345 "ass5_roll.y" /* yacc.c:1646  */
    {
					(yyval.attribute_exp).loc = current->gentemp(((yyvsp[0].attribute_exp).type)->down);
				  	char *arg1 = strdup(((yyvsp[0].attribute_exp).loc)->name);
				  	char *arg2 = new char[10];
				  	sprintf(arg2,"1");
				  	char *res = strdup(((yyvsp[0].attribute_exp).loc)->name);
				  	fields_quad y(arg1,arg2,res,MINUS,(yyvsp[0].attribute_exp).loc,0,(yyvsp[0].attribute_exp).loc);
				  	quad_array->emit(y);
				  	arg1 = strdup(((yyvsp[0].attribute_exp).loc)->name);
				  	res = strdup(((yyval.attribute_exp).loc)->name);
				  	fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,(yyval.attribute_exp).loc);
				  	quad_array->emit(x);
				  	(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
				}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 360 "ass5_roll.y" /* yacc.c:1646  */
    {
					(yyval.attribute_exp).loc = current->gentemp(((yyvsp[0].attribute_exp).type)->down);
				  	char *arg1 = strdup(((yyvsp[0].attribute_exp).loc)->name);
				  	char *res = strdup(((yyval.attribute_exp).loc)->name);
				  	fields_quad x(arg1,0,res,(yyvsp[-1].attribute_unary),(yyvsp[0].attribute_exp).loc,0,(yyval.attribute_exp).loc);
				  	quad_array->emit(x);
				  	(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
				}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 369 "ass5_roll.y" /* yacc.c:1646  */
    {
					// not required
				}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 373 "ass5_roll.y" /* yacc.c:1646  */
    {
					// not required
				}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 380 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_ADDR;
				}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 384 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_STAR;
				}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 388 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_PLUS;
				}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 392 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_MINUS;
				}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 396 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_NEGATION;
				}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 400 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = BW_U_NOT;
				}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 407 "ass5_roll.y" /* yacc.c:1646  */
    {
			   		(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
			   }
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 411 "ass5_roll.y" /* yacc.c:1646  */
    {
			   		// not required 
			   }
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 418 "ass5_roll.y" /* yacc.c:1646  */
    {
							(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
						}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 422 "ass5_roll.y" /* yacc.c:1646  */
    {
							if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
						  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
						  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  		char *res = strdup(((yyval.attribute_exp).loc)->name);
						  		fields_quad x(arg1,arg2,res,INTO,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
						  		quad_array->emit(x);
						  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  	}
						  	else{
						  		symbol_table_fields *temp1, *temp2;
						  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == FLOAT_){
						  			temp1 = current->gentemp(FLOAT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(FLOAT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,INTO,temp1,(yyvsp[0].attribute_exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
						  		}
						  		else if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == CHAR_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[0].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,INTO,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  		}
						  		else if(((yyvsp[-2].attribute_exp).type)->down == FLOAT_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
						  			temp1 = current->gentemp(FLOAT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(FLOAT_);
						  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,INTO,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  		}
						  		else if(((yyvsp[-2].attribute_exp).type)->down == CHAR_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,INTO,temp1,(yyvsp[0].attribute_exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
						  		}
						  		(yyval.attribute_exp).loc = temp2;
						  	}
						}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 498 "ass5_roll.y" /* yacc.c:1646  */
    {
							if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
						  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
						  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  		char *res = strdup(((yyval.attribute_exp).loc)->name);
						  		fields_quad x(arg1,arg2,res,DIV,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
						  		quad_array->emit(x);
						  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  	}
						  	else{
						  		symbol_table_fields *temp1, *temp2;
						  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == FLOAT_){
						  			temp1 = current->gentemp(FLOAT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(FLOAT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,DIV,temp1,(yyvsp[0].attribute_exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
						  		}
						  		else if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == CHAR_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[0].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,DIV,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  		}
						  		else if(((yyvsp[-2].attribute_exp).type)->down == FLOAT_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
						  			temp1 = current->gentemp(FLOAT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(FLOAT_);
						  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,DIV,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  		}
						  		else if(((yyvsp[-2].attribute_exp).type)->down == CHAR_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,DIV,temp1,(yyvsp[0].attribute_exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
						  		}
						  		(yyval.attribute_exp).loc = temp2;
						  	}
						}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 574 "ass5_roll.y" /* yacc.c:1646  */
    {
							if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
						  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
						  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  		char *res = strdup(((yyval.attribute_exp).loc)->name);
						  		fields_quad x(arg1,arg2,res,PERCENT,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
						  		quad_array->emit(x);
						  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  	}
						  	else{
						  		symbol_table_fields *temp1, *temp2;
						  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == FLOAT_){
						  			temp1 = current->gentemp(FLOAT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(FLOAT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,PERCENT,temp1,(yyvsp[0].attribute_exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
						  		}
						  		else if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == CHAR_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[0].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,PERCENT,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  		}
						  		else if(((yyvsp[-2].attribute_exp).type)->down == FLOAT_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
						  			temp1 = current->gentemp(FLOAT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(FLOAT_);
						  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,PERCENT,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  		}
						  		else if(((yyvsp[-2].attribute_exp).type)->down == CHAR_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  			res = strdup(temp2->name);
						  			fields_quad y(arg1,arg2,res,PERCENT,temp1,(yyvsp[0].attribute_exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
						  		}
						  		(yyval.attribute_exp).loc = temp2;
						  	}
						}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 653 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp) = (yyvsp[0].attribute_exp);				 
				   }
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 657 "ass5_roll.y" /* yacc.c:1646  */
    {
				   		if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
					  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
					  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  		char *res = strdup(((yyval.attribute_exp).loc)->name);
					  		fields_quad x(arg1,arg2,res,PLUS,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
					  		quad_array->emit(x);
					  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
					  	}
					  	else{
					  		symbol_table_fields *temp1, *temp2;
					  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == FLOAT_){
					  			temp1 = current->gentemp(FLOAT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(FLOAT_);
					  			arg1 = strdup(temp1->name);
					  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  			res = strdup(temp2->name);
					  			fields_quad y(arg1,arg2,res,PLUS,temp1,(yyvsp[0].attribute_exp).loc,temp2);
					  			quad_array->emit(y);
					  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
					  		}
					  		else if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == CHAR_){
					  			temp1 = current->gentemp(INT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"char2int(%s)",((yyvsp[0].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(INT_);
					  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  			char *arg2 = strdup(temp1->name);
					  			res = strdup(temp2->name);
					  			fields_quad y(arg1,arg2,res,PLUS,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
					  			quad_array->emit(y);
					  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
					  		}
					  		else if(((yyvsp[-2].attribute_exp).type)->down == FLOAT_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
					  			temp1 = current->gentemp(FLOAT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(FLOAT_);
					  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  			char *arg2 = strdup(temp1->name);
					  			res = strdup(temp2->name);
					  			fields_quad y(arg1,arg2,res,PLUS,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
					  			quad_array->emit(y);
					  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
					  		}
					  		else if(((yyvsp[-2].attribute_exp).type)->down == CHAR_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
					  			temp1 = current->gentemp(INT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(INT_);
					  			arg1 = strdup(temp1->name);
					  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  			res = strdup(temp2->name);
					  			fields_quad y(arg1,arg2,res,PLUS,temp1,(yyvsp[0].attribute_exp).loc,temp2);
					  			quad_array->emit(y);
					  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
					  		}
					  		(yyval.attribute_exp).loc = temp2;
					  	}
				   }
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 733 "ass5_roll.y" /* yacc.c:1646  */
    {
				   		if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
					  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
					  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  		char *res = strdup(((yyval.attribute_exp).loc)->name);
					  		fields_quad x(arg1,arg2,res,MINUS,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
					  		quad_array->emit(x);
					  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
					  	}
					  	else{
					  		symbol_table_fields *temp1, *temp2;
					  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == FLOAT_){
					  			temp1 = current->gentemp(FLOAT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(FLOAT_);
					  			arg1 = strdup(temp1->name);
					  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  			res = strdup(temp2->name);
					  			fields_quad y(arg1,arg2,res,MINUS,temp1,(yyvsp[0].attribute_exp).loc,temp2);
					  			quad_array->emit(y);
					  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
					  		}
					  		else if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == CHAR_){
					  			temp1 = current->gentemp(INT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"char2int(%s)",((yyvsp[0].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(INT_);
					  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  			char *arg2 = strdup(temp1->name);
					  			res = strdup(temp2->name);
					  			fields_quad y(arg1,arg2,res,MINUS,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
					  			quad_array->emit(y);
					  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
					  		}
					  		else if(((yyvsp[-2].attribute_exp).type)->down == FLOAT_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
					  			temp1 = current->gentemp(FLOAT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(FLOAT_);
					  			arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  			char *arg2 = strdup(temp1->name);
					  			res = strdup(temp2->name);
					  			fields_quad y(arg1,arg2,res,MINUS,(yyvsp[-2].attribute_exp).loc,temp1,temp2);
					  			quad_array->emit(y);
					  			(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
					  		}
					  		else if(((yyvsp[-2].attribute_exp).type)->down == CHAR_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
					  			temp1 = current->gentemp(INT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(INT_);
					  			arg1 = strdup(temp1->name);
					  			char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  			res = strdup(temp2->name);
					  			fields_quad y(arg1,arg2,res,MINUS,temp1,(yyvsp[0].attribute_exp).loc,temp2);
					  			quad_array->emit(y);
					  			(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
					  		}
					  		(yyval.attribute_exp).loc = temp2;
					  	}
				   }
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 812 "ass5_roll.y" /* yacc.c:1646  */
    {
					(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
				}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 816 "ass5_roll.y" /* yacc.c:1646  */
    {
					if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
			  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
			  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
			  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
			  		char *res = strdup(((yyval.attribute_exp).loc)->name);
			  		fields_quad x(arg1,arg2,res,SL,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
			  		quad_array->emit(x);
			  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
	  				}
				}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 828 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
				  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
				  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
				  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
				  		char *res = strdup(((yyval.attribute_exp).loc)->name);
				  		fields_quad x(arg1,arg2,res,SR,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
				  		quad_array->emit(x);
				  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
				  	}
				  }
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 843 "ass5_roll.y" /* yacc.c:1646  */
    {
					 	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					 }
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 847 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp).TL = makelist(next_instr);
					  	char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  	char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  	fields_quad x(arg1,arg2,0,goto_LT,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,0);
					  	quad_array->emit(x);
					  	(yyval.attribute_exp).FL = makelist(next_instr);
					  	fields_quad y(0,0,0,GOTO_,0,0,0);
					  	quad_array->emit(y);
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);	
					  }
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 859 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp).TL = makelist(next_instr);
					  	char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  	char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  	fields_quad x(arg1,arg2,0,goto_GT,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,0);
					  	quad_array->emit(x);
					  	(yyval.attribute_exp).FL = makelist(next_instr);
					  	fields_quad y(0,0,0,GOTO_,0,0,0);
					  	quad_array->emit(y);
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);
					  }
#line 2645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 871 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp).TL = makelist(next_instr);
					  	char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  	char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  	fields_quad x(arg1,arg2,0,goto_LTE,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,0);
					  	quad_array->emit(x);
					  	(yyval.attribute_exp).FL = makelist(next_instr);
					  	fields_quad y(0,0,0,GOTO_,0,0,0);
					  	quad_array->emit(y);
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);
					  }
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 883 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp).TL = makelist(next_instr);
					  	char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  	char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  	fields_quad x(arg1,arg2,0,goto_GTE,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,0);
					  	quad_array->emit(x);
					  	(yyval.attribute_exp).FL = makelist(next_instr);
					  	fields_quad y(0,0,0,GOTO_,0,0,0);
					  	quad_array->emit(y);
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);
					 }
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 898 "ass5_roll.y" /* yacc.c:1646  */
    {
				   		(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
				   }
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 902 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp).TL = makelist(next_instr);
					  	char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  	char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  	fields_quad x(arg1,arg2,0,goto_EQ,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,0);
					  	quad_array->emit(x);
					  	(yyval.attribute_exp).FL = makelist(next_instr);
					  	fields_quad y(0,0,0,GOTO_,0,0,0);
					  	quad_array->emit(y);
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);
					}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 914 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp).TL = makelist(next_instr);
					  	char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
					  	char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  	fields_quad x(arg1,arg2,0,goto_NEQ,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,0);
					  	quad_array->emit(x);
					  	(yyval.attribute_exp).FL = makelist(next_instr);
					  	fields_quad y(0,0,0,GOTO_,0,0,0);
					  	quad_array->emit(y);
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);
					}
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 929 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
			  }
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 933 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
			  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
			  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
			  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
			  		char *res = strdup(((yyval.attribute_exp).loc)->name);
			  		fields_quad x(arg1,arg2,res,BW_AND,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
			  		quad_array->emit(x);
			  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
			  	}
			  }
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 948 "ass5_roll.y" /* yacc.c:1646  */
    {
						  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
						}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 952 "ass5_roll.y" /* yacc.c:1646  */
    {
					   		if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
						  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
						  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  		char *res = strdup(((yyval.attribute_exp).loc)->name);
						  		fields_quad x(arg1,arg2,res,BW_XOR,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
						  		quad_array->emit(x);
						  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  	}
					   }
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 967 "ass5_roll.y" /* yacc.c:1646  */
    {
						  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
						  }
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 971 "ass5_roll.y" /* yacc.c:1646  */
    {
					   		if(typecheck((yyvsp[-2].attribute_exp).type, (yyvsp[0].attribute_exp).type)){
						  		(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-2].attribute_exp).type)->down);
						  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).loc)->name);
						  		char *arg2 = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  		char *res = strdup(((yyval.attribute_exp).loc)->name);
						  		fields_quad x(arg1,arg2,res,BW_INOR,(yyvsp[-2].attribute_exp).loc,(yyvsp[0].attribute_exp).loc,(yyval.attribute_exp).loc);
						  		quad_array->emit(x);
						  		(yyval.attribute_exp).type = (yyvsp[-2].attribute_exp).type;
						  	}
					   }
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 986 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					  }
#line 2797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 990 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	backpatch((yyvsp[-3].attribute_exp).TL,(yyvsp[-1].instr));
					  	(yyval.attribute_exp).FL = merge((yyvsp[-3].attribute_exp).FL, (yyvsp[0].attribute_exp).FL);
					  	(yyval.attribute_exp).TL = (yyvsp[0].attribute_exp).TL;
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);
					  }
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1000 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					  }
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1004 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	backpatch((yyvsp[-3].attribute_exp).FL,(yyvsp[-1].instr));
					  	(yyval.attribute_exp).TL = merge((yyvsp[-3].attribute_exp).TL,(yyvsp[0].attribute_exp).TL);
					  	(yyval.attribute_exp).FL = (yyvsp[0].attribute_exp).FL;
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);
					  }
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1014 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					  }
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1018 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp).loc = current->gentemp(((yyvsp[-4].attribute_exp).type)->down);
					  	(yyval.attribute_exp).type = (yyvsp[-4].attribute_exp).type;
					  	char *res = strdup(((yyval.attribute_exp).loc)->name);
					  	char *arg1 = strdup(((yyvsp[0].attribute_exp).loc)->name);
					  	fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(x);
					  	lnode *l = makelist(next_instr);
					  	fields_quad y(0,0,0,GOTO_,0,0,0);
					  	quad_array->emit(y);
					  	backpatch((yyvsp[-3].N_attr),next_instr);
					  	res = strdup(((yyval.attribute_exp).loc)->name);
					  	arg1 = strdup(((yyvsp[-4].attribute_exp).loc)->name);
					  	fields_quad z(arg1,0,res,ASSIGN,(yyvsp[-4].attribute_exp).loc,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(z);
					  	l = merge(l,makelist(next_instr));
					  	fields_quad a(0,0,0,GOTO_,0,0,0);
					  	quad_array->emit(a);
					  	backpatch((yyvsp[-7].N_attr),next_instr);
					  	conv2Bool(&(yyvsp[-8].attribute_exp));
					  	backpatch((yyvsp[-8].attribute_exp).TL,(yyvsp[-5].instr));
					  	backpatch((yyvsp[-8].attribute_exp).FL,(yyvsp[-1].instr));
					  	backpatch(l,next_instr);
					  }
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1046 "ass5_roll.y" /* yacc.c:1646  */
    {
					 	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					 }
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1050 "ass5_roll.y" /* yacc.c:1646  */
    {
					 	if(typecheck((yyvsp[-2].attribute_exp).type,(yyvsp[0].attribute_exp).type)){
					  		if((yyvsp[-2].attribute_exp).loc1){
						  		//printf("%s\n",($1.loc)->name);
						  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).array)->name);
						  		char *arg2 = strdup(((yyvsp[-2].attribute_exp).loc1)->name);
						  		char *res = strdup(((yyvsp[0].attribute_exp).loc)->name);
						  		fields_quad x(arg1,arg2,res,BRACKET_EQ,(yyvsp[-2].attribute_exp).loc,(yyvsp[-2].attribute_exp).loc1,(yyvsp[0].attribute_exp).loc);
						  		quad_array->emit(x);
					  		}
					  		else{
						  		char *arg1 = strdup(((yyvsp[0].attribute_exp).loc)->name);
							  	char *res = strdup(((yyvsp[-2].attribute_exp).loc)->name);
							  	fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,(yyvsp[-2].attribute_exp).loc);
							  	quad_array->emit(x);
					  		}
					  	}
					  	else{
					  		symbol_table_fields *temp1, *temp2;
					  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == FLOAT_){
					  			temp1 = current->gentemp(INT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"dbl2int(%s)",((yyvsp[0].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  		}
					  		else if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == CHAR_){
					  			temp1 = current->gentemp(CHAR_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2char(%s)",((yyvsp[-2].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			
					  		}
					  		else if(((yyvsp[-2].attribute_exp).type)->down == FLOAT_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
					  			temp1 = current->gentemp(INT_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"dbl2int(%s)",((yyvsp[-2].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  		}
					  		else if(((yyvsp[-2].attribute_exp).type)->down == CHAR_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
					  			temp1 = current->gentemp(CHAR_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2char(%s)",((yyvsp[0].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  		}
					  		if((yyvsp[-2].attribute_exp).loc1){
						  		//printf("%s\n",($1.loc)->name);
						  		char *arg1 = strdup(((yyvsp[-2].attribute_exp).array)->name);
						  		char *arg2 = strdup(((yyvsp[-2].attribute_exp).loc1)->name);
						  		char *res = strdup((temp1)->name);
						  		fields_quad x(arg1,arg2,res,BRACKET_EQ,(yyvsp[-2].attribute_exp).loc,(yyvsp[-2].attribute_exp).loc1,(yyvsp[0].attribute_exp).loc);
						  		quad_array->emit(x);
					  		}
					  		else{
						  		char *arg1 = strdup((temp1)->name);
							  	char *res = strdup(((yyvsp[-2].attribute_exp).loc)->name);
							  	fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,(yyvsp[-2].attribute_exp).loc);
							  	quad_array->emit(x);
					  		}
					  	}
					 }
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1122 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 2953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1126 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1130 "ass5_roll.y" /* yacc.c:1646  */
    {
				    // no action
				   }
#line 2969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1134 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 2977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1138 "ass5_roll.y" /* yacc.c:1646  */
    {
				   // no action
				   }
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1142 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 2993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1146 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1150 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1154 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 3017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1158 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1162 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1169 "ass5_roll.y" /* yacc.c:1646  */
    {
		  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
		  }
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1173 "ass5_roll.y" /* yacc.c:1646  */
    {
		  	// not required
		  }
#line 3049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1180 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1187 "ass5_roll.y" /* yacc.c:1646  */
    {
	  		// not required
	  		}
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1191 "ass5_roll.y" /* yacc.c:1646  */
    {
	  			if(flag1 == 1 && flag2 == 0){
	  				tNode *temp = new_node(((yyvsp[-2].var_decl_attr).type)->down,-1);
	  				char *temp1 = strdup("retVal");
	  				symbol_table_fields x(temp1,temp,0,(yyvsp[-2].var_decl_attr).width,-1,0);
	  				temp_use->insert(x);
	  				temp = new_node(FUNCTION,-1);
	  				symbol_table_fields y((yyvsp[-1].var_decl_attr).var,temp,0,0,-1,temp_use);
	  				symbol_table->insert(y);
	  			}
	  			flag1 = 0;
	  			flag2 = 0;
	  			c = 0;
	  		}
#line 3084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1208 "ass5_roll.y" /* yacc.c:1646  */
    {/* not required*/}
#line 3090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1209 "ass5_roll.y" /* yacc.c:1646  */
    {/* not required*/}
#line 3096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1211 "ass5_roll.y" /* yacc.c:1646  */
    {
	  	                   if(flag1 == 0 || flag2 == 0){
	  		               	   (yyval.var_decl_attr).type = (yyvsp[0].var_decl_attr).type;
	  		               	   (yyval.var_decl_attr).width = (yyvsp[0].var_decl_attr).width;
	  		               	   t = (yyval.var_decl_attr).type;
	  		               	   w = (yyval.var_decl_attr).width;
	  	                   }
	                   }
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1219 "ass5_roll.y" /* yacc.c:1646  */
    {/* not required*/}
#line 3115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1220 "ass5_roll.y" /* yacc.c:1646  */
    {/* not required*/}
#line 3121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1221 "ass5_roll.y" /* yacc.c:1646  */
    {/* not required*/}
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1222 "ass5_roll.y" /* yacc.c:1646  */
    {/* not required*/}
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1223 "ass5_roll.y" /* yacc.c:1646  */
    {/* not required*/}
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1228 "ass5_roll.y" /* yacc.c:1646  */
    {	
	  					if(flag1 == 1 && flag2 == 0)
	  						(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
	  				}
#line 3148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1233 "ass5_roll.y" /* yacc.c:1646  */
    {

	  				}
#line 3156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1240 "ass5_roll.y" /* yacc.c:1646  */
    {
	  				if(flag1 == 0){
	  					tNode *temp = new_node(t->down,-1);
	  					temp = merge_node((yyvsp[0].var_decl_attr).type,temp);
	  					int temp_size;
	  					if(temp->down == PTR)
	  						temp_size = SIZE_OF_PTR;
	  					else{
		  					switch(t->down){
		  						case INT_ : temp_size = SIZE_OF_INT;
		  					   		break;
		  						case FLOAT_ : temp_size = SIZE_OF_FLOAT;
		  						    break;
		  						case CHAR_ : temp_size = SIZE_OF_CHAR;
		  						    break; 	
	  						}
	  					}
	  					temp_size = temp_size * (yyvsp[0].var_decl_attr).width;
	  					symbol_table_fields x((yyvsp[0].var_decl_attr).var,temp,0,temp_size,-1,0);
	  					current->insert(x);
	  					//current->print_Table();
	  				}
	  				else if(flag1 == 1 && flag2 == 0){
	  					(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
	  				}
	  			}
#line 3187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1267 "ass5_roll.y" /* yacc.c:1646  */
    {
	  				if(flag1 == 0){
	  					tNode *temp = new_node(t->down,-1);
	  					temp = merge_node((yyvsp[-2].var_decl_attr).type,temp);
	  					void *value;
	  					int *v1;
	  					float *v2;
	  					char *v3;
	  					int temp_size;
	  					switch(t->down){
	  						case INT_ : v1 = (int *)malloc(sizeof(int));
	  							(*v1) = (yyvsp[0].initializer_attr).int_data; 	
	  						    value = (void *)v1;
	  							temp_size = SIZE_OF_INT;
	  							break;
	  						case FLOAT_ : v2 = (float *)malloc(sizeof(float));
		  					   	(*v2) = (yyvsp[0].initializer_attr).float_data;
							   	//printf("%lf\n",$3.float_data); 	
  							   	value = (void *)v2;
		  						//printf("%lf\n",*v2);
		  						temp_size = SIZE_OF_FLOAT;
		  						break;
	  						case CHAR_ :v3 = (char *)malloc(sizeof(char));
	  							(*v3) = (yyvsp[0].initializer_attr).char_data; 	
	  							value = (void *)v3;
	  						   temp_size = SIZE_OF_CHAR;
	  							break;
	  						default     : value = 0; 	
	  					}
	  					temp_size = temp_size * (yyvsp[-2].var_decl_attr).width;
	  					symbol_table_fields x((yyvsp[-2].var_decl_attr).var,temp,value,temp_size,-1,0);
	  					current->insert(x);
	  				}
	  			}
#line 3226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1304 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1305 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1310 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0 || flag1 == 0){
			  		(yyval.var_decl_attr).type = new_node(VOID_,-1);
			  		(yyval.var_decl_attr).width = 0;
			  	}
			  }
#line 3249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1317 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0 || flag1 == 0){
			  		(yyval.var_decl_attr).type = new_node(CHAR_,-1);
			  		(yyval.var_decl_attr).width = SIZE_OF_CHAR;
			  	}
			  }
#line 3260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1323 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1325 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0 || flag1 == 0){			  		
			  		(yyval.var_decl_attr).type = new_node(INT_,-1);			  		
			  		(yyval.var_decl_attr).width = SIZE_OF_INT;			  		
			  	}
			  }
#line 3277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1331 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1333 "ass5_roll.y" /* yacc.c:1646  */
    {
				  if(flag2 == 0 || flag1 == 0){
			  		(yyval.var_decl_attr).type = new_node(FLOAT_,-1);
			  		(yyval.var_decl_attr).width = SIZE_OF_FLOAT;
			  	}
			  }
#line 3294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1339 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1343 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1344 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1348 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1349 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1353 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1354 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1355 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1359 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1364 "ass5_roll.y" /* yacc.c:1646  */
    {
		  	if(flag1 == 0 || flag2 == 0){
		  		(yyval.var_decl_attr).type = merge_node((yyvsp[0].var_decl_attr).type,(yyvsp[-1].var_decl_attr).type);
		  		(yyval.var_decl_attr).width = (yyvsp[0].var_decl_attr).width;
		  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
		  	}
		  }
#line 3360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1372 "ass5_roll.y" /* yacc.c:1646  */
    {
		  		(yyval.var_decl_attr).type = (yyvsp[0].var_decl_attr).type;
		  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
		  		(yyval.var_decl_attr).width = (yyvsp[0].var_decl_attr).width;
		  }
#line 3370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1381 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl_attr).var = (yyvsp[0].id_attr).var;
						  	(yyval.var_decl_attr).type = 0;
						  	(yyval.var_decl_attr).width = 1;
						  	if(c == 0){
						  		symbol_table_fields *t = current->lookup((yyvsp[0].id_attr).var);
							  	if(t){
							  		flag2 = 1;
							  		temp_use = (t->nestedTable);
							  	}														
							  	else                                            
							  		flag2 = 0; 
							  	c++;	
						  	}
					  	}										
					  }
#line 3392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1399 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1401 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1403 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	if(flag1 == 0 || flag2 == 0){
					  		tNode *temp = new_node(ARRAY,(yyvsp[-1].attribute_exp).val.int_data);
					  		(yyval.var_decl_attr).type = merge_node((yyvsp[-3].var_decl_attr).type,temp);
					  		(yyval.var_decl_attr).width = (yyvsp[-3].var_decl_attr).width * (yyvsp[-1].attribute_exp).val.int_data;
					  		(yyval.var_decl_attr).var = (yyvsp[-3].var_decl_attr).var;
					  	}
					  }
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1412 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1414 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl_attr).var = (yyvsp[-2].var_decl_attr).var;
						  	(yyval.var_decl_attr).type = (yyvsp[-2].var_decl_attr).type;
						  	(yyval.var_decl_attr).width = (yyvsp[-2].var_decl_attr).width;
					  	}
					  }
#line 3435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1422 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1424 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1426 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1428 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	flag1 = 1;										
				  	(yyval.var_decl_attr).var = (yyvsp[-3].var_decl_attr).var;
				  	(yyval.var_decl_attr).type = 0;
				  	(yyval.var_decl_attr).width = 1;
				  }
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1435 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	flag1 = 1;
					  	if(flag2 == 0)
					  		temp_use = construct_Symbol_Table();
					  	(yyval.var_decl_attr).var = (yyvsp[-2].var_decl_attr).var;
					  	(yyval.var_decl_attr).type = 0;
					  	(yyval.var_decl_attr).width = 1;
				    }
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1444 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1449 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1451 "ass5_roll.y" /* yacc.c:1646  */
    {
	  		(yyval.var_decl_attr).type = new_node(PTR,-1);
	  	}
#line 3497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1454 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1456 "ass5_roll.y" /* yacc.c:1646  */
    {
	   	tNode *temp = new_node(PTR,-1);
	  	(yyval.var_decl_attr).type = merge_node((yyvsp[0].var_decl_attr).type,temp);
	   }
#line 3512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1463 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1464 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1468 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1469 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1473 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1474 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1479 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0){										
			  		temp_use = construct_Symbol_Table();				
			  		symbol_table_fields x((yyvsp[0].var_decl_attr).var,(yyvsp[0].var_decl_attr).type,0,(yyvsp[0].var_decl_attr).width,-1,0); 
			  		temp_use->insert(x);
			  	}
			  }
#line 3560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1487 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0){
			  		symbol_table_fields x((yyvsp[0].var_decl_attr).var,(yyvsp[0].var_decl_attr).type,0,(yyvsp[0].var_decl_attr).width,-1,0); 
			  		temp_use->insert(x);
			  		}
	  			}
#line 3571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1497 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	if(flag2 == 0){						
					  		(yyval.var_decl_attr).type = merge_node((yyvsp[0].var_decl_attr).type,(yyvsp[-1].var_decl_attr).type);
					  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
					  		(yyval.var_decl_attr).width = (yyvsp[-1].var_decl_attr).width*(yyvsp[0].var_decl_attr).width;
					  	}	
					  }
#line 3583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1508 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1509 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1513 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1518 "ass5_roll.y" /* yacc.c:1646  */
    {
			 	(yyval.initializer_attr) = (yyvsp[0].attribute_exp).val;
			}
#line 3609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1521 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1522 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1526 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1527 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1531 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1535 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1536 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1540 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1541 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1545 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1546 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1550 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1551 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1552 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1553 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1554 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1555 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1559 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1560 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1561 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1565 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1567 "ass5_roll.y" /* yacc.c:1646  */
    { 
				  	(yyval.attribute_exp) = (yyvsp[-1].attribute_exp);
				  }
#line 3743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1574 "ass5_roll.y" /* yacc.c:1646  */
    { 
				  (yyval.attribute_exp) = (yyvsp[0].attribute_exp);
				}
#line 3751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1578 "ass5_roll.y" /* yacc.c:1646  */
    { 
					backpatch((yyvsp[-2].attribute_exp).NL,(yyvsp[-1].instr));
					(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
			  	}
#line 3760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1585 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1586 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1591 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) =(yyvsp[-1].attribute_exp);}
#line 3778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1592 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1597 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	backpatch((yyvsp[-4].N_attr),next_instr);
				  	conv2Bool(&(yyvsp[-5].attribute_exp));
				  	backpatch((yyvsp[-5].attribute_exp).TL,(yyvsp[-2].instr));
				  	(yyval.attribute_exp).NL = merge((yyvsp[-1].attribute_exp).NL,(yyvsp[-5].attribute_exp).FL);
				  	(yyval.attribute_exp).NL = merge((yyval.attribute_exp).NL,(yyvsp[0].N_attr));
				  }
#line 3796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1605 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	lnode *l = 0;
					  	if(((yyvsp[-8].attribute_exp).type)->down!=BOOL_){
					  		l = makelist(next_instr);
					  		fields_quad x(0,0,0,GOTO_,0,0,0);
					  		quad_array->emit(x);
					  	}
					  	backpatch((yyvsp[-7].N_attr),next_instr);
					  	conv2Bool(&(yyvsp[-8].attribute_exp));
					  	backpatch((yyvsp[-8].attribute_exp).TL,(yyvsp[-5].instr));
					  	backpatch((yyvsp[-8].attribute_exp).FL,(yyvsp[-1].instr));
					  	lnode *temp = merge((yyvsp[-3].N_attr),(yyvsp[-4].attribute_exp).NL);
					  	(yyval.attribute_exp).NL = merge(temp,(yyvsp[0].attribute_exp).NL);
					  	(yyval.attribute_exp).NL = merge((yyval.attribute_exp).NL,l);
					 }
#line 3816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1620 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1625 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	char *res = new char[10];
				  	sprintf(res,"%d",(yyvsp[-6].instr));
				  	fields_quad x(0,0,res,GOTO_,0,0,0);
				  	quad_array->emit(x);
				  	backpatch((yyvsp[-3].N_attr),next_instr);
				  	conv2Bool(&(yyvsp[-4].attribute_exp));
				  	backpatch((yyvsp[0].attribute_exp).NL,(yyvsp[-6].instr));
				  	backpatch((yyvsp[-4].attribute_exp).TL,(yyvsp[-1].instr));
				  	(yyval.attribute_exp).NL = (yyvsp[-4].attribute_exp).FL;
				  }
#line 3838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1637 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	backpatch((yyvsp[-2].N_attr),next_instr);
					  	conv2Bool(&(yyvsp[-3].attribute_exp));
					  	backpatch((yyvsp[-3].attribute_exp).TL,(yyvsp[-8].instr));
					  	backpatch((yyvsp[-7].attribute_exp).NL,(yyvsp[-6].instr));
					  	(yyval.attribute_exp).NL = (yyvsp[-3].attribute_exp).FL;
					}
#line 3850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1645 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	backpatch((yyvsp[-3].N_attr),(yyvsp[-8].instr));
					  	lnode *l = makelist(next_instr);
					  	fields_quad x(0,0,0,GOTO_,0,0,0);
					  	quad_array->emit(x);
					  	(yyvsp[0].attribute_exp).NL = merge((yyvsp[0].attribute_exp).NL,l);
					  	backpatch((yyvsp[0].attribute_exp).NL,(yyvsp[-5].instr));
					  	backpatch((yyvsp[-6].N_attr),next_instr);
					  	conv2Bool(&(yyvsp[-7].attribute_exp));
					  	backpatch((yyvsp[-7].attribute_exp).TL,(yyvsp[-1].instr));
					  	(yyval.attribute_exp).NL = (yyvsp[-7].attribute_exp).FL;
					}
#line 3867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1657 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1661 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1662 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1663 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1665 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	char *arg1 = strdup(((yyvsp[-1].attribute_exp).loc)->name);
			  	fields_quad x(arg1,0,0,RETURN_EXP,(yyvsp[-1].attribute_exp).loc,0,0);
			  	quad_array->emit(x);
			  }
#line 3901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1671 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	fields_quad x(0,0,0,RETURN_,0,0,0);
	  			quad_array->emit(x);
			  }
#line 3910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1678 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1679 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1683 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1684 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1688 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1690 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	current = symbol_table; 
					}
#line 3948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1696 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1697 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1701 "ass5_roll.y" /* yacc.c:1646  */
    {
					(yyval.instr) = next_instr;
				}
#line 3968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1706 "ass5_roll.y" /* yacc.c:1646  */
    {
		(yyval.N_attr) = makelist(next_instr);
		fields_quad x(0,0,0,GOTO_,0,0,0);
		quad_array->emit(x);
	}
#line 3978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1713 "ass5_roll.y" /* yacc.c:1646  */
    {
		current = temp_use;
		int i;
		char *t;
		for(i=0;i<=symbol_table->curr_length;i++){
			if((((symbol_table->table)[i]).nestedTable) == current){
				t = strdup(((symbol_table->table)[i]).name);
				break;
			}
		}
		fields_quad x(t,0,0,Function,0,0,0);
		quad_array->emit(x);
		flag1 = 0;
		flag2 = 0;
		c = 0;
	}
#line 3999 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4003 "y.tab.c" /* yacc.c:1646  */
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
#line 1731 "ass5_roll.y" /* yacc.c:1906  */


void yyerror(const char *s) {
    printf("Error: %s\n",s);
}
