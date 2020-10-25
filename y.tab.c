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
    ENUM = 265,
    EXTERN = 266,
    FLOAT = 267,
    FOR = 268,
    GOTO = 269,
    IF = 270,
    INLINE = 271,
    INT = 272,
    LONG = 273,
    REGISTER = 274,
    RESTRICT = 275,
    RETURN = 276,
    SHORT = 277,
    SIGNED = 278,
    SIZEOF = 279,
    STATIC = 280,
    STRUCT = 281,
    SWITCH = 282,
    TYPEDEF = 283,
    UNION = 284,
    UNSIGNED = 285,
    VOID = 286,
    VOLATILE = 287,
    DECREMENT = 288,
    LSHIFT = 289,
    RSHIFT = 290,
    LESS_THAN_EQUAL_TO = 291,
    GREATER_THAN_EQUAL_TO = 292,
    DOUBLE_EQUAL = 293,
    NOT_EQUAL = 294,
    BINARY_AND = 295,
    BINARY_OR = 296,
    ELLIPSIS = 297,
    STAR_EQUAL = 298,
    SLASH_EQUAL = 299,
    PERCENTILE_EQUAL = 300,
    PLUS_EQUAL = 301,
    MINUS_EQUAL = 302,
    LEFT_SHIFT_EQUAL = 303,
    RIGHT_SHIFT_EQUAL = 304,
    AND_EQUAL = 305,
    XOR_EQUAL = 306,
    OR_EQUAL = 307,
    AUTO = 308,
    BREAK = 309,
    CASE = 310,
    CHAR = 311,
    CONST = 312,
    WHILE = 313,
    BOOL = 314,
    COMPLEX = 315,
    IMAGINARY = 316,
    SINGLE_COMMENT = 317,
    MULTI_COMMENT = 318,
    IDENTIFIER = 319,
    INTEGER_NO = 320,
    FLOAT_NO = 321,
    CHARACTER = 322,
    STRING = 323,
    ENUMERATION_CONSTANT = 324,
    PUNCTUATOR = 325,
    WS = 326,
    CONFLICTIVE_IF = 327
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
#define ENUM 265
#define EXTERN 266
#define FLOAT 267
#define FOR 268
#define GOTO 269
#define IF 270
#define INLINE 271
#define INT 272
#define LONG 273
#define REGISTER 274
#define RESTRICT 275
#define RETURN 276
#define SHORT 277
#define SIGNED 278
#define SIZEOF 279
#define STATIC 280
#define STRUCT 281
#define SWITCH 282
#define TYPEDEF 283
#define UNION 284
#define UNSIGNED 285
#define VOID 286
#define VOLATILE 287
#define DECREMENT 288
#define LSHIFT 289
#define RSHIFT 290
#define LESS_THAN_EQUAL_TO 291
#define GREATER_THAN_EQUAL_TO 292
#define DOUBLE_EQUAL 293
#define NOT_EQUAL 294
#define BINARY_AND 295
#define BINARY_OR 296
#define ELLIPSIS 297
#define STAR_EQUAL 298
#define SLASH_EQUAL 299
#define PERCENTILE_EQUAL 300
#define PLUS_EQUAL 301
#define MINUS_EQUAL 302
#define LEFT_SHIFT_EQUAL 303
#define RIGHT_SHIFT_EQUAL 304
#define AND_EQUAL 305
#define XOR_EQUAL 306
#define OR_EQUAL 307
#define AUTO 308
#define BREAK 309
#define CASE 310
#define CHAR 311
#define CONST 312
#define WHILE 313
#define BOOL 314
#define COMPLEX 315
#define IMAGINARY 316
#define SINGLE_COMMENT 317
#define MULTI_COMMENT 318
#define IDENTIFIER 319
#define INTEGER_NO 320
#define FLOAT_NO 321
#define CHARACTER 322
#define STRING 323
#define ENUMERATION_CONSTANT 324
#define PUNCTUATOR 325
#define WS 326
#define CONFLICTIVE_IF 327

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

#line 273 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 290 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1329

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  362

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,     2,     2,    88,    81,     2,
      73,    74,    82,    83,    80,    84,    77,    87,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    94,    96,
      89,    95,    90,    93,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,    92,    79,    85,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   144,   144,   155,   166,   177,   188,   192,   199,   203,
     235,   256,   269,   273,   277,   292,   307,   311,   318,   322,
     329,   341,   356,   371,   380,   384,   391,   395,   399,   403,
     407,   411,   418,   422,   429,   433,   509,   585,   664,   668,
     744,   823,   827,   839,   854,   858,   870,   882,   894,   909,
     913,   925,   940,   944,   959,   963,   978,   982,   997,  1001,
    1011,  1015,  1025,  1029,  1057,  1061,  1133,  1137,  1141,  1145,
    1149,  1153,  1157,  1161,  1165,  1169,  1173,  1180,  1184,  1191,
    1198,  1202,  1220,  1221,  1222,  1231,  1232,  1233,  1234,  1235,
    1239,  1244,  1251,  1278,  1324,  1325,  1326,  1327,  1331,  1338,
    1345,  1346,  1356,  1357,  1358,  1365,  1366,  1367,  1368,  1369,
    1370,  1374,  1375,  1379,  1380,  1384,  1386,  1388,  1393,  1394,
    1399,  1401,  1406,  1407,  1408,  1412,  1416,  1424,  1433,  1461,
    1463,  1465,  1474,  1476,  1484,  1486,  1488,  1490,  1497,  1506,
    1511,  1513,  1517,  1518,  1526,  1527,  1531,  1532,  1536,  1537,
    1541,  1549,  1559,  1567,  1571,  1572,  1576,  1580,  1584,  1585,
    1589,  1590,  1594,  1598,  1599,  1603,  1604,  1608,  1609,  1613,
    1614,  1615,  1616,  1617,  1618,  1622,  1623,  1624,  1628,  1629,
    1636,  1640,  1648,  1649,  1653,  1655,  1659,  1667,  1683,  1687,
    1699,  1707,  1720,  1724,  1725,  1726,  1727,  1733,  1741,  1742,
    1746,  1747,  1751,  1752,  1759,  1760,  1764,  1765,  1768,  1773,
    1780
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARROW", "INCREMENT", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR",
  "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT", "RETURN",
  "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF",
  "UNION", "UNSIGNED", "VOID", "VOLATILE", "DECREMENT", "LSHIFT", "RSHIFT",
  "LESS_THAN_EQUAL_TO", "GREATER_THAN_EQUAL_TO", "DOUBLE_EQUAL",
  "NOT_EQUAL", "BINARY_AND", "BINARY_OR", "ELLIPSIS", "STAR_EQUAL",
  "SLASH_EQUAL", "PERCENTILE_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL",
  "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL", "AND_EQUAL", "XOR_EQUAL",
  "OR_EQUAL", "AUTO", "BREAK", "CASE", "CHAR", "CONST", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "SINGLE_COMMENT", "MULTI_COMMENT", "IDENTIFIER",
  "INTEGER_NO", "FLOAT_NO", "CHARACTER", "STRING", "ENUMERATION_CONSTANT",
  "PUNCTUATOR", "WS", "CONFLICTIVE_IF", "'('", "')'", "'['", "']'", "'.'",
  "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_optional", "enum_specifier", "enumerator_list",
  "enumerator", "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "type_qualifier_list_optional", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designation_optional",
  "designator_list", "designator", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", "identifier_optional", "M",
  "N", "F", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,    40,    41,    91,    93,    46,   123,   125,
      44,    38,    42,    43,    45,   126,    33,    47,    37,    60,
      62,    94,   124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -257

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-257)))

#define YYTABLE_NINF -211

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1252,  -257,   -20,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,   -46,  1252,  1252,  -257,  1252,  1252,  1144,
    -257,  -257,   -63,   -23,  -257,    55,    -9,  -257,   -19,  -257,
     673,    78,    75,  -257,  -257,  -257,  -257,  -257,  -257,    54,
      13,  -257,  -257,    -9,    55,  -257,   173,  -257,   -46,  1025,
      64,  1079,   762,    78,  -257,   121,  -257,  -257,  -257,  -257,
      17,   892,   919,   892,  -257,  -257,  -257,  -257,  -257,   732,
      98,  -257,  -257,  -257,  -257,  -257,  -257,  -257,    48,   260,
     946,  -257,    58,   124,   187,    -7,   116,    76,    77,    82,
     144,   -33,  -257,  -257,  -257,   268,  -257,  -257,  -257,  -257,
    -257,    55,   119,   125,  -257,   -58,     1,  -257,   133,   800,
     129,  -257,   -22,   732,  -257,   732,  -257,  -257,  -257,    -8,
    1268,  -257,  1268,   139,   946,   151,   145,  -257,   173,   -21,
    -257,   155,  -257,  -257,   827,   946,   165,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,   946,  -257,
    -257,   946,   946,   946,   946,   946,   946,   946,   946,   946,
     946,   946,   946,   946,   946,   946,   946,  -257,  -257,   141,
     136,   142,  -257,   170,   181,   194,   546,   195,   164,   946,
    -257,   176,  -257,  -257,   -12,  -257,  -257,  -257,  -257,   198,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,  1198,  -257,   230,
       1,   946,  -257,   946,  -257,   226,   237,   219,  -257,  -257,
     241,   242,  -257,   946,  -257,  -257,  -257,   854,  -257,   243,
    -257,  -257,    83,  -257,  -257,  -257,  -257,  -257,    37,  -257,
      46,  -257,  -257,  -257,  -257,  -257,    58,    58,   124,   124,
     187,   187,    97,   187,   187,    97,   116,    76,    77,   946,
     946,  -257,  -257,   522,   522,   438,   221,   946,  -257,    34,
     946,  -257,   224,   247,   522,  -257,  -257,   355,  -257,  -257,
    -257,   254,   255,  -257,  -257,   946,   259,   259,  -257,    98,
    -257,  -257,  -257,   173,  -257,   946,  -257,    82,   144,   946,
    -257,  -257,   592,  -257,  -257,   258,  -257,    67,   522,   946,
    -257,  -257,  -257,  -257,  -257,   147,  -257,  -257,   258,   281,
     946,   592,   266,   522,  -257,   258,  -257,    88,   248,   270,
      69,  -257,  -257,  -257,   271,  -257,  -257,   946,   522,  -257,
     522,  -257,   946,   258,  -257,   946,  -257,   522,  -257,   274,
     258,   335,  -257,   261,   282,  -257,  -257,  -257,   522,   522,
    -257,  -257
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   104,   207,    94,   103,   125,   101,   102,    97,   123,
     100,   105,    95,   106,    98,   124,    96,    99,   122,   107,
     108,   109,   201,     0,    82,    84,   110,    86,    88,     0,
     198,   200,   117,     0,   128,     0,   141,    80,     0,    90,
      92,   127,     0,    83,    85,    87,    89,     1,   199,     0,
       0,   144,   143,   140,     0,    81,     0,   204,     0,     0,
       0,     0,     0,   126,   118,     0,   129,   145,   142,    91,
      92,     0,     0,     0,     2,     3,     4,     5,     6,     0,
     164,    26,    27,    28,    29,    30,    31,     8,    20,    32,
       0,    34,    38,    41,    44,    49,    52,    54,    56,    58,
      60,    62,    64,   157,    93,     0,   205,   202,   203,   154,
     138,   153,     0,   148,   150,     0,   147,   133,     0,     0,
       0,   115,     0,     0,    21,     0,    24,    22,    77,     0,
     114,   156,   114,     0,     0,     0,     0,   163,     0,     0,
     165,     0,    14,    15,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    66,     0,    32,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   208,   208,     0,
       0,     0,   208,     0,     0,     0,     0,     0,     0,     0,
     208,     2,   178,   185,     0,   182,   183,   169,   170,   208,
     180,   171,   172,   173,   174,   152,   137,     0,   139,     0,
     146,     0,   131,     0,   132,     0,     0,   120,   116,   119,
       0,     0,     7,     0,   113,   111,   112,     0,    79,     0,
     168,   158,   164,   160,   162,   166,    13,    11,     0,    18,
       0,    12,    65,    35,    36,    37,    39,    40,    42,    43,
      47,    48,    51,    45,    46,    50,    53,    55,    57,     0,
       0,   208,   194,     0,     0,     0,     0,     0,   197,     0,
       0,   195,     0,     0,     0,   184,   179,     0,   149,   151,
     155,     0,     0,   130,   136,     0,     0,    25,    78,   164,
      33,   167,   159,     0,    10,     0,     9,    59,    61,     0,
     177,   208,     0,   208,   193,   209,   196,     0,     0,     0,
     175,   181,   134,   135,   121,     0,   161,    19,   209,     0,
       0,     0,     0,     0,   176,   209,    16,   164,     0,     0,
       0,   209,   208,   188,     0,    17,   208,     0,     0,   208,
       0,   208,     0,   209,   192,     0,   209,     0,    63,     0,
     209,   186,   189,     0,     0,   208,   190,   208,     0,     0,
     187,   191
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -257,  -257,  -257,  -257,   -71,  -257,   -83,   101,   130,    81,
    -153,   184,   206,   207,   131,   132,  -257,  -130,   -31,  -257,
     -76,  -177,   -35,    10,  -257,   330,  -257,     6,    49,   257,
    -257,  -257,  -257,    53,  -257,     5,   349,   -10,   -49,   277,
    -257,  -257,   189,  -257,    73,  -132,   105,  -257,  -218,  -257,
     256,  -188,  -257,   188,  -257,   120,  -256,  -257,  -257,  -257,
    -257,   369,  -257,  -257,  -257,  -137,  -115,  -257
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    88,   238,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   128,   158,
     194,   229,    22,    58,    38,    39,    24,    25,   131,   225,
      26,    65,   219,    27,    28,    70,    41,    42,    53,   120,
     112,   113,   114,   115,   133,   104,   136,   137,   138,   139,
     140,   196,   197,   198,   199,   200,   201,   202,   203,   204,
      29,    30,    31,    59,    33,   259,   179,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     124,   126,   127,   129,   228,    57,   233,   160,   178,   303,
      23,     9,   272,   119,   293,  -206,   208,   252,    34,   159,
     255,     9,   209,    15,   106,   103,    52,    35,    40,   168,
     169,   118,   170,    15,    43,    44,    36,    45,    46,    23,
      50,   260,   217,    68,    32,   264,   320,   129,    18,   129,
      37,   141,   142,   273,   134,    49,   135,   218,    18,   228,
    -209,    54,   277,   159,    64,   331,   222,   210,   223,   240,
     195,   111,   223,    36,   234,   300,   301,    55,   243,   244,
     245,   143,   171,   172,   275,   130,   310,    66,   215,    51,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,    67,   103,   314,   293,
     269,   294,    56,   239,   223,    51,   205,   295,   159,    34,
     324,   144,   296,   145,   299,   146,   223,   242,    35,   130,
     306,   130,   132,   168,   169,   333,   130,    36,   130,    34,
     161,   323,   105,   338,   290,   162,   163,   223,    35,   223,
     344,    61,   346,    62,   173,   228,   159,   174,   134,   352,
     135,   316,   292,   134,   319,   135,   321,   335,   175,    51,
     360,   361,    67,   134,   176,   135,   132,    71,   132,   224,
     281,   224,   282,   132,   177,   132,   171,   172,   159,   159,
     322,   305,   288,   206,   307,   340,   220,    72,   221,   342,
     121,   122,   345,   328,   347,   207,    73,   164,   165,   212,
     334,   216,   348,   227,   159,   230,   339,   111,   358,   236,
     359,   166,   167,   318,   231,   232,   326,   327,   349,   241,
     302,   351,   262,   325,   261,   354,   263,    74,    75,    76,
      77,    78,   195,   265,   330,   266,    79,   107,   108,   250,
     251,    80,   253,   254,    81,    82,    83,    84,    85,    86,
     271,   343,   103,    67,   317,   246,   247,   267,   270,   350,
     274,   159,    71,   180,   181,   182,     1,   276,     2,     3,
       4,   183,   184,   185,     5,     6,     7,     8,     9,   186,
      10,    11,    72,    12,   280,   187,   248,   249,    13,    14,
      15,    73,   283,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   284,   285,   286,   287,   304,   308,   291,
     309,    16,   188,   189,    17,    18,   190,    19,    20,    21,
     312,   313,   191,    75,    76,    77,    78,   289,   223,   329,
     332,    79,   336,   337,   355,   341,   105,   192,   353,    81,
      82,    83,    84,    85,    86,   157,   357,   356,   256,    71,
     180,   181,   182,     1,   193,     2,     3,     4,   183,   184,
     185,     5,     6,     7,     8,     9,   186,    10,    11,    72,
      12,   257,   187,   258,    69,    13,    14,    15,    73,   226,
     297,    63,   298,   211,   315,   235,   279,   311,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,   188,
     189,    17,    18,   190,    19,    20,    21,     0,     0,   191,
      75,    76,    77,    78,     0,     0,     0,     0,    79,     0,
       0,     0,     0,   105,     0,     0,    81,    82,    83,    84,
      85,    86,    71,     0,     0,     0,     1,     0,     2,     3,
       4,   193,     0,     0,     5,     6,     7,     8,     9,     0,
      10,    11,    72,    12,     0,     0,     0,     0,    13,    14,
      15,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,    17,    18,     0,    19,    20,    21,
       0,     0,    74,    75,    76,    77,    78,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,     0,    71,   180,   181,   182,
       0,     0,     0,     0,   193,   183,   184,   185,     0,     0,
       0,     0,     0,   186,     0,     0,    72,     0,     0,   187,
      71,     0,     0,     0,     0,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,   188,   189,     0,    73,
     190,     0,     0,     0,     0,     0,   191,    75,    76,    77,
      78,     0,     0,     0,     0,    79,    71,     0,     0,     0,
     105,     0,     0,    81,    82,    83,    84,    85,    86,     0,
      74,    75,    76,    77,    78,     0,    72,     0,   193,    79,
       0,     0,     0,     0,     0,    73,     0,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,     0,
       0,     1,     0,     2,     3,     4,     0,     0,   193,     5,
       6,     7,     8,     9,     0,    10,    11,     0,    12,     0,
       0,     0,     0,    13,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,    17,
      18,     0,    19,    20,    21,     0,    71,     0,     0,     0,
       1,     0,     2,     0,     4,     0,     0,     0,     0,     6,
       7,  -210,     9,     0,    10,    11,    72,     0,     0,     0,
       0,     0,    13,    14,    15,    73,    71,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,    72,   116,    17,    18,
       0,    19,    20,    21,    15,    73,    74,    75,    76,    77,
      78,     0,     0,     0,    71,    79,     0,     0,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    18,
       9,     0,     0,     0,    72,   213,    74,    75,    76,    77,
      78,    71,    15,    73,     0,    79,     0,     0,   117,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,     0,
       0,    72,     0,     0,     0,     0,     0,    18,    71,     0,
      73,     0,     0,     0,    74,    75,    76,    77,    78,     0,
       0,     0,     0,    79,     0,     0,   214,     0,    72,     0,
       0,    81,    82,    83,    84,    85,    86,    73,     0,     0,
       0,    74,    75,    76,    77,    78,    71,     0,     0,     0,
      79,   237,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,     0,     0,    72,     0,    74,    75,
      76,    77,    78,    71,     0,    73,     0,    79,     0,     0,
       0,     0,   289,     0,     0,    81,    82,    83,    84,    85,
      86,     0,     0,    72,     0,     0,     0,     0,     0,     0,
      71,     0,    73,     0,     0,     0,    74,    75,    76,    77,
      78,     0,     0,     0,     0,   123,     0,     0,     0,     0,
      72,     0,     0,    81,    82,    83,    84,    85,    86,    73,
       0,     0,     0,    74,    75,    76,    77,    78,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
      74,    75,    76,    77,    78,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,     1,     0,     2,     3,     4,     0,     0,
       0,     5,     6,     7,     8,     9,     0,    10,    11,     0,
      12,     0,     0,     0,     0,    13,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,    17,    18,     0,    19,    20,    21,     1,     0,     2,
       3,     4,     0,     0,     0,     5,     6,     7,     8,     9,
       0,    10,    11,   105,    12,     0,     0,     0,     0,    13,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,    17,    18,     0,    19,    20,
      21,     0,     0,   109,    47,     0,     0,     0,     0,     0,
       0,     0,     1,   110,     2,     3,     4,     0,     0,     0,
       5,     6,     7,     8,     9,     0,    10,    11,     0,    12,
       0,     0,     0,     0,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
      17,    18,     0,    19,    20,    21,     1,     0,     2,     3,
       4,     0,     0,     0,     5,     6,     7,     8,     9,     0,
      10,    11,     0,    12,     0,     0,     0,     0,    13,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     278,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,    17,    18,     0,    19,    20,    21,
       1,     0,     2,     3,     4,     0,     0,     0,     5,     6,
       7,     8,     9,     0,    10,    11,     1,    12,     2,     0,
       4,     0,    13,    14,    15,     6,     7,     0,     9,     0,
      10,    11,     0,     0,     0,     0,     0,     0,    13,    14,
      15,     0,     0,     0,     0,    16,     0,     0,    17,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      71,    72,    73,    79,   134,    40,   138,    90,    41,   265,
       0,    20,   189,    62,   232,    78,    74,   170,    64,    90,
     173,    20,    80,    32,    59,    56,    36,    73,    23,    36,
      37,    62,    39,    32,    24,    25,    82,    27,    28,    29,
      35,   178,    64,    53,    64,   182,   302,   123,    57,   125,
      96,     3,     4,   190,    75,    78,    77,    79,    57,   189,
      93,    80,   199,   134,    10,   321,    74,   116,    80,   145,
     105,    61,    80,    82,    95,   263,   264,    96,   161,   162,
     163,    33,    89,    90,    96,    79,   274,    74,   119,    36,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    53,   138,   285,   327,
     186,    74,    95,   144,    80,    62,   111,    80,   189,    64,
     308,    73,    76,    75,   261,    77,    80,   158,    73,   123,
      96,   125,    79,    36,    37,   323,   130,    82,   132,    64,
      82,    74,    78,    74,   227,    87,    88,    80,    73,    80,
     338,    73,   340,    75,    38,   285,   227,    81,    75,   347,
      77,   293,    79,    75,   301,    77,   303,    79,    91,   116,
     358,   359,   119,    75,    92,    77,   123,     4,   125,   130,
     211,   132,   213,   130,    40,   132,    89,    90,   259,   260,
     305,   267,   223,    74,   270,   332,   123,    24,   125,   336,
      79,    80,   339,   318,   341,    80,    33,    83,    84,    76,
     325,    82,   342,    74,   285,    64,   331,   207,   355,    64,
     357,    34,    35,   299,    79,    80,    79,    80,   343,    64,
     265,   346,    96,   309,    93,   350,    94,    64,    65,    66,
      67,    68,   277,    73,   320,    64,    73,    59,    60,   168,
     169,    78,   171,   172,    81,    82,    83,    84,    85,    86,
      96,   337,   293,   210,   295,   164,   165,    73,    73,   345,
      94,   342,     4,     5,     6,     7,     8,    79,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    64,    27,   166,   167,    30,    31,
      32,    33,    76,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    76,    95,    74,    74,    96,    94,    76,
      73,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      76,    76,    64,    65,    66,    67,    68,    78,    80,    58,
      74,    73,    94,    73,     9,    74,    78,    79,    74,    81,
      82,    83,    84,    85,    86,    95,    74,    96,   174,     4,
       5,     6,     7,     8,    96,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   175,    27,   176,    54,    30,    31,    32,    33,   132,
     259,    42,   260,   116,   289,   139,   207,   277,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    81,    82,    83,    84,
      85,    86,     4,    -1,    -1,    -1,     8,    -1,    10,    11,
      12,    96,    -1,    -1,    16,    17,    18,    19,    20,    -1,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    56,    57,    -1,    59,    60,    61,
      -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    96,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    24,    -1,    -1,    27,
       4,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    33,
      58,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    73,     4,    -1,    -1,    -1,
      78,    -1,    -1,    81,    82,    83,    84,    85,    86,    -1,
      64,    65,    66,    67,    68,    -1,    24,    -1,    96,    73,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    81,    82,    83,
      84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    -1,
      -1,     8,    -1,    10,    11,    12,    -1,    -1,    96,    16,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    61,    -1,     4,    -1,    -1,    -1,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,    17,
      18,    78,    20,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,     4,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    25,    56,    57,
      -1,    59,    60,    61,    32,    33,    64,    65,    66,    67,
      68,    -1,    -1,    -1,     4,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    57,
      20,    -1,    -1,    -1,    24,    25,    64,    65,    66,    67,
      68,     4,    32,    33,    -1,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    57,     4,    -1,
      33,    -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    76,    -1,    24,    -1,
      -1,    81,    82,    83,    84,    85,    86,    33,    -1,    -1,
      -1,    64,    65,    66,    67,    68,     4,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    -1,    -1,    24,    -1,    64,    65,
      66,    67,    68,     4,    -1,    33,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    81,    82,    83,    84,    85,
      86,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    33,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    81,    82,    83,    84,    85,    86,    33,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,     8,    -1,    10,    11,    12,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    61,     8,    -1,    10,
      11,    12,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      -1,    22,    23,    78,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      61,    -1,    -1,    64,     0,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,    74,    10,    11,    12,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    -1,    22,    23,    -1,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    57,    -1,    59,    60,    61,     8,    -1,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    18,    19,    20,    -1,
      22,    23,    -1,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    56,    57,    -1,    59,    60,    61,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    -1,    22,    23,     8,    25,    10,    -1,
      12,    -1,    30,    31,    32,    17,    18,    -1,    20,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    57,
      -1,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    59,    60,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    10,    11,    12,    16,    17,    18,    19,    20,
      22,    23,    25,    30,    31,    32,    53,    56,    57,    59,
      60,    61,   119,   120,   123,   124,   127,   130,   131,   157,
     158,   159,    64,   161,    64,    73,    82,    96,   121,   122,
     132,   133,   134,   120,   120,   120,   120,     0,   158,    78,
     132,   130,   134,   135,    80,    96,    95,   119,   120,   160,
     164,    73,    75,   133,    10,   128,    74,   130,   134,   122,
     132,     4,    24,    33,    64,    65,    66,    67,    68,    73,
      78,    81,    82,    83,    84,    85,    86,    98,    99,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   142,    78,   119,   150,   150,    64,
      74,   120,   137,   138,   139,   140,    25,    76,   115,   135,
     136,    79,    80,    73,   101,    73,   101,   101,   115,   117,
     124,   125,   130,   141,    75,    77,   143,   144,   145,   146,
     147,     3,     4,    33,    73,    75,    77,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    95,   116,   101,
     103,    82,    87,    88,    83,    84,    34,    35,    36,    37,
      39,    89,    90,    38,    81,    91,    92,    40,    41,   163,
       5,     6,     7,    13,    14,    15,    21,    27,    54,    55,
      58,    64,    79,    96,   117,   119,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   132,    74,    80,    74,    80,
     135,   136,    76,    25,    76,   115,    82,    64,    79,   129,
     141,   141,    74,    80,   125,   126,   126,    74,   114,   118,
      64,    79,    80,   142,    95,   147,    64,    74,   100,   115,
     117,    64,   115,   103,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   106,   106,   107,   108,   109,   110,   162,
     162,    93,    96,    94,   162,    73,    64,    73,    96,   117,
      73,    96,   118,   162,    94,    96,    79,   162,    42,   139,
      64,   115,   115,    76,    76,    95,    74,    74,   115,    78,
     103,    76,    79,   145,    74,    80,    76,   111,   112,   162,
     148,   148,   119,   153,    96,   117,    96,   117,    94,    73,
     148,   152,    76,    76,   118,   143,   142,   115,   117,   162,
     153,   162,   163,    74,   148,   117,    79,    80,   163,    58,
     117,   153,    74,   148,   163,    79,    94,    73,    74,   163,
     162,    74,   162,   117,   148,   162,   148,   162,   114,   163,
     117,   163,   148,    74,   163,     9,    96,    74,   162,   162,
     148,   148
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    98,    98,    98,    98,    98,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   102,
     102,   102,   103,   103,   104,   104,   104,   104,   105,   105,
     105,   106,   106,   106,   107,   107,   107,   107,   107,   108,
     108,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   117,   117,   118,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   123,   123,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   128,   128,
     129,   129,   130,   130,   130,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   142,   142,   142,
     143,   143,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   148,   148,   148,   149,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   154,   155,
     155,   155,   155,   156,   156,   156,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   163,
     164
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     5,     6,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     3,
       5,     4,     4,     3,     6,     6,     5,     4,     3,     4,
       2,     1,     3,     2,     1,     2,     1,     0,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     1,     3,     4,
       2,     4,     2,     1,     0,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       1,     3,     1,     1,     2,     1,     8,    11,     5,     8,
      10,    12,     7,     3,     2,     2,     3,     2,     1,     2,
       1,     1,     4,     4,     1,     2,     1,     0,     0,     0,
       0
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
#line 145 "ass5_roll.y" /* yacc.c:1646  */
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
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 156 "ass5_roll.y" /* yacc.c:1646  */
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
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 167 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp).val.double_data = (yyvsp[0].floatval);
						(yyval.attribute_exp).type = new_node(DOUBLE_,-1);
						(yyval.attribute_exp).loc = current->gentemp(DOUBLE_);
					  	char *arg1 = new char[10];
					  	sprintf(arg1,"%lf",(yyvsp[0].floatval));
					  	char *res = strdup(((yyval.attribute_exp).loc)->name);
					  	fields_quad x(arg1,0,res,ASSIGN,0,0,(yyval.attribute_exp).loc);
					  	quad_array->emit(x);
					}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 178 "ass5_roll.y" /* yacc.c:1646  */
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
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 189 "ass5_roll.y" /* yacc.c:1646  */
    {
						// not required 
					}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 193 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp) = (yyvsp[-1].attribute_exp);
					}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 200 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 204 "ass5_roll.y" /* yacc.c:1646  */
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
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 236 "ass5_roll.y" /* yacc.c:1646  */
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
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 257 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 270 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		// not to be implemented
				  	}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 274 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		// not to be implemented
				  	}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 278 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 293 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 308 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		// not to be implemented
				  	}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 312 "ass5_roll.y" /* yacc.c:1646  */
    {
				  		// not to be implemented
				  	}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 319 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.param_attr) = make_param_list((yyvsp[0].attribute_exp).loc);
					  }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 323 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.param_attr) = merge_param_list((yyvsp[-2].param_attr),make_param_list((yyvsp[0].attribute_exp).loc));
					  }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 330 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 342 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 357 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 372 "ass5_roll.y" /* yacc.c:1646  */
    {
					(yyval.attribute_exp).loc = current->gentemp(((yyvsp[0].attribute_exp).type)->down);
				  	char *arg1 = strdup(((yyvsp[0].attribute_exp).loc)->name);
				  	char *res = strdup(((yyval.attribute_exp).loc)->name);
				  	fields_quad x(arg1,0,res,(yyvsp[-1].attribute_unary),(yyvsp[0].attribute_exp).loc,0,(yyval.attribute_exp).loc);
				  	quad_array->emit(x);
				  	(yyval.attribute_exp).type = (yyvsp[0].attribute_exp).type;
				}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 381 "ass5_roll.y" /* yacc.c:1646  */
    {
					// not to be implemented
				}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 385 "ass5_roll.y" /* yacc.c:1646  */
    {
					// not to be implemented
				}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 392 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_ADDR;
				}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 396 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_STAR;
				}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 400 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_PLUS;
				}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 404 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_MINUS;
				}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 408 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = U_NEGATION;
				}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 412 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	(yyval.attribute_unary) = BW_U_NOT;
				}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 419 "ass5_roll.y" /* yacc.c:1646  */
    {
			   		(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
			   }
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 423 "ass5_roll.y" /* yacc.c:1646  */
    {
			   		// not to be implemented 
			   }
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 430 "ass5_roll.y" /* yacc.c:1646  */
    {
							(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
						}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 434 "ass5_roll.y" /* yacc.c:1646  */
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
						  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == DOUBLE_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
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
						  		else if(((yyvsp[-2].attribute_exp).type)->down == DOUBLE_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
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
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 510 "ass5_roll.y" /* yacc.c:1646  */
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
						  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == DOUBLE_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
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
						  		else if(((yyvsp[-2].attribute_exp).type)->down == DOUBLE_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
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
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 586 "ass5_roll.y" /* yacc.c:1646  */
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
						  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == DOUBLE_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
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
						  		else if(((yyvsp[-2].attribute_exp).type)->down == DOUBLE_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
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
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 665 "ass5_roll.y" /* yacc.c:1646  */
    {
						(yyval.attribute_exp) = (yyvsp[0].attribute_exp);				 
				   }
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 669 "ass5_roll.y" /* yacc.c:1646  */
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
					  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == DOUBLE_){
					  			temp1 = current->gentemp(DOUBLE_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(DOUBLE_);
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
					  		else if(((yyvsp[-2].attribute_exp).type)->down == DOUBLE_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
					  			temp1 = current->gentemp(DOUBLE_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(DOUBLE_);
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
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 745 "ass5_roll.y" /* yacc.c:1646  */
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
					  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == DOUBLE_){
					  			temp1 = current->gentemp(DOUBLE_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[-2].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(DOUBLE_);
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
					  		else if(((yyvsp[-2].attribute_exp).type)->down == DOUBLE_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
					  			temp1 = current->gentemp(DOUBLE_);
					  			char *arg1 = new char[100];
					  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].attribute_exp).loc)->name);
					  			char *res = strdup(temp1->name);
					  			fields_quad x(arg1,0,res,ASSIGN,(yyvsp[0].attribute_exp).loc,0,temp1);
					  			quad_array->emit(x);
					  			temp2 = current->gentemp(DOUBLE_);
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
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 824 "ass5_roll.y" /* yacc.c:1646  */
    {
					(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
				}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 828 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 840 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 855 "ass5_roll.y" /* yacc.c:1646  */
    {
					 	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					 }
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 859 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 871 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 883 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 895 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 910 "ass5_roll.y" /* yacc.c:1646  */
    {
				   		(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
				   }
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 914 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 926 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 941 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
			  }
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 945 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 960 "ass5_roll.y" /* yacc.c:1646  */
    {
						  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
						}
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 964 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 979 "ass5_roll.y" /* yacc.c:1646  */
    {
						  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
						  }
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 983 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 998 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					  }
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1002 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	backpatch((yyvsp[-3].attribute_exp).TL,(yyvsp[-1].instr));
					  	(yyval.attribute_exp).FL = merge((yyvsp[-3].attribute_exp).FL, (yyvsp[0].attribute_exp).FL);
					  	(yyval.attribute_exp).TL = (yyvsp[0].attribute_exp).TL;
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);
					  }
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1012 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					  }
#line 2909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1016 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	backpatch((yyvsp[-3].attribute_exp).FL,(yyvsp[-1].instr));
					  	(yyval.attribute_exp).TL = merge((yyvsp[-3].attribute_exp).TL,(yyvsp[0].attribute_exp).TL);
					  	(yyval.attribute_exp).FL = (yyvsp[0].attribute_exp).FL;
					  	(yyval.attribute_exp).type = new_node(BOOL_,-1);
					  }
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1026 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					  }
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1030 "ass5_roll.y" /* yacc.c:1646  */
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
#line 2957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1058 "ass5_roll.y" /* yacc.c:1646  */
    {
					 	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
					 }
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1062 "ass5_roll.y" /* yacc.c:1646  */
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
					  		if(((yyvsp[-2].attribute_exp).type)->down == INT_ && ((yyvsp[0].attribute_exp).type)->down == DOUBLE_){
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
					  		else if(((yyvsp[-2].attribute_exp).type)->down == DOUBLE_ && ((yyvsp[0].attribute_exp).type)->down == INT_){
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
#line 3038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1134 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// do nothing
				   }
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1138 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// no action
				   }
#line 3054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1142 "ass5_roll.y" /* yacc.c:1646  */
    {
				   // DO NOTHING
				   }
#line 3062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1146 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// NO ACTION
				   }
#line 3070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1150 "ass5_roll.y" /* yacc.c:1646  */
    {
				   // NO ACTION
				   }
#line 3078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1154 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// NO ACTION
				   }
#line 3086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1158 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// NO ACTION
				   }
#line 3094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1162 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// NO ACTION
				   }
#line 3102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1166 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// NO ACTION
				   }
#line 3110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1170 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// NO ACTION
				   }
#line 3118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1174 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// NO ACTION
				   }
#line 3126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1181 "ass5_roll.y" /* yacc.c:1646  */
    {
		  	(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
		  }
#line 3134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1185 "ass5_roll.y" /* yacc.c:1646  */
    {
		  	// not to be implemented
		  }
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1192 "ass5_roll.y" /* yacc.c:1646  */
    {
				   	// do nothing
				   }
#line 3150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1199 "ass5_roll.y" /* yacc.c:1646  */
    {
	  	// not in use
	  }
#line 3158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1203 "ass5_roll.y" /* yacc.c:1646  */
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
#line 3177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1220 "ass5_roll.y" /* yacc.c:1646  */
    {/* not in use*/}
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1221 "ass5_roll.y" /* yacc.c:1646  */
    {/* not in use*/}
#line 3189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1223 "ass5_roll.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 0 || flag2 == 0){
	  		(yyval.var_decl_attr).type = (yyvsp[0].var_decl_attr).type;
	  		(yyval.var_decl_attr).width = (yyvsp[0].var_decl_attr).width;
	  		t = (yyval.var_decl_attr).type;
	  		w = (yyval.var_decl_attr).width;
	  	}
	}
#line 3202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1231 "ass5_roll.y" /* yacc.c:1646  */
    {/* not in use*/}
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1232 "ass5_roll.y" /* yacc.c:1646  */
    {/* not in use*/}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1233 "ass5_roll.y" /* yacc.c:1646  */
    {/* not in use*/}
#line 3220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1234 "ass5_roll.y" /* yacc.c:1646  */
    {/* not in use*/}
#line 3226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1235 "ass5_roll.y" /* yacc.c:1646  */
    {/* not in use*/}
#line 3232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1240 "ass5_roll.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 1 && flag2 == 0)
	  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
	  }
#line 3241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1245 "ass5_roll.y" /* yacc.c:1646  */
    {

	  }
#line 3249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1252 "ass5_roll.y" /* yacc.c:1646  */
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
		  			case DOUBLE_ : temp_size = SIZE_OF_DOUBLE;
		  						  break;
		  			case CHAR_   : temp_size = SIZE_OF_CHAR;
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
#line 3280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1279 "ass5_roll.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 0){
	  		tNode *temp = new_node(t->down,-1);
	  		temp = merge_node((yyvsp[-2].var_decl_attr).type,temp);
	  		void *value;
	  		int *v1;
	  		double *v2;
	  		char *v3;
	  		int temp_size;
	  		switch(t->down){
	  			case INT_ : v1 = (int *)malloc(sizeof(int));
	  					   (*v1) = (yyvsp[0].initializer_attr).int_data; 	
	  					   value = (void *)v1;
	  					   temp_size = SIZE_OF_INT;
	  					   break;
	  			case DOUBLE_ : v2 = (double *)malloc(sizeof(double));
		  					   (*v2) = (yyvsp[0].initializer_attr).double_data;
		  					   //printf("%lf\n",$3.double_data); 	
		  					   value = (void *)v2;
		  					   //printf("%lf\n",*v2);
		  					   temp_size = SIZE_OF_DOUBLE;
		  					   break;
	  			case CHAR_   :v3 = (char *)malloc(sizeof(char));
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
#line 3319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1324 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1325 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1326 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1327 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1332 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0 || flag1 == 0){
			  		(yyval.var_decl_attr).type = new_node(VOID_,-1);
			  		(yyval.var_decl_attr).width = 0;
			  	}
			  }
#line 3354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1339 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0 || flag1 == 0){
			  		(yyval.var_decl_attr).type = new_node(CHAR_,-1);
			  		(yyval.var_decl_attr).width = SIZE_OF_CHAR;
			  	}
			  }
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1345 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1347 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0 || flag1 == 0){
			  		//printf("Yo1\n");
			  		(yyval.var_decl_attr).type = new_node(INT_,-1);
			  		//printf("Yo2\n");
			  		(yyval.var_decl_attr).width = SIZE_OF_INT;
			  		//printf("Yo3\n");
			  	}
			  }
#line 3385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1356 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1357 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1359 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0 || flag1 == 0){
			  		(yyval.var_decl_attr).type = new_node(DOUBLE_,-1);
			  		(yyval.var_decl_attr).width = SIZE_OF_DOUBLE;
			  	}
			  }
#line 3408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1365 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1366 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1367 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1368 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1369 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1370 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1374 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1375 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1379 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1380 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1385 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1387 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1389 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1393 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1395 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1400 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1402 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1406 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1407 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1408 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1412 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1417 "ass5_roll.y" /* yacc.c:1646  */
    {
		  	if(flag1 == 0 || flag2 == 0){
		  		(yyval.var_decl_attr).type = merge_node((yyvsp[0].var_decl_attr).type,(yyvsp[-1].var_decl_attr).type);
		  		(yyval.var_decl_attr).width = (yyvsp[0].var_decl_attr).width;
		  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
		  	}
		  }
#line 3546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1425 "ass5_roll.y" /* yacc.c:1646  */
    {
		  		(yyval.var_decl_attr).type = (yyvsp[0].var_decl_attr).type;
		  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
		  		(yyval.var_decl_attr).width = (yyvsp[0].var_decl_attr).width;
		  }
#line 3556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1434 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl_attr).var = (yyvsp[0].id_attr).var;
						  	(yyval.var_decl_attr).type = 0;
						  	(yyval.var_decl_attr).width = 1;
						  	if(c == 0){
						  		//printf("DD->Id me load hai kya?\n");
						  		symbol_table_fields *t = current->lookup((yyvsp[0].id_attr).var);
							  	if(t){
							  		flag2 = 1;
							  		temp_use = (t->nestedTable);	// Set flag to handle multiple declaration
							  		//printf("%s\n",(t->nestedTable)[0].name);
							  		//printf("%p\n",temp_use);
							  		//printf("%p\n",t->nestedTable);
							  		//if(!temp_use)
							  		//printf("Null hai\n");
							  		//printf("%d\n",temp_use->curr_length);
							  		//printf("%s\n",(temp_use->table)[0].name);
							  		//temp_use->print_Table();
							  		//printf("Type casting ka load nahi hai\n");
							  	}												// (to be used in other actions)		
							  	else                                            
							  		flag2 = 0; 
							  	c++;	
						  	}
					  	}										
					  }
#line 3588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1462 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1464 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1466 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	if(flag1 == 0 || flag2 == 0){
					  		tNode *temp = new_node(ARRAY,(yyvsp[-1].attribute_exp).val.int_data);
					  		(yyval.var_decl_attr).type = merge_node((yyvsp[-3].var_decl_attr).type,temp);
					  		(yyval.var_decl_attr).width = (yyvsp[-3].var_decl_attr).width * (yyvsp[-1].attribute_exp).val.int_data;
					  		(yyval.var_decl_attr).var = (yyvsp[-3].var_decl_attr).var;
					  	}
					  }
#line 3613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1475 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1477 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl_attr).var = (yyvsp[-2].var_decl_attr).var;
						  	(yyval.var_decl_attr).type = (yyvsp[-2].var_decl_attr).type;
						  	(yyval.var_decl_attr).width = (yyvsp[-2].var_decl_attr).width;
					  	}
					  }
#line 3631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1485 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1487 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1489 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1491 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	flag1 = 1;										
				  	(yyval.var_decl_attr).var = (yyvsp[-3].var_decl_attr).var;
				  	(yyval.var_decl_attr).type = 0;
				  	(yyval.var_decl_attr).width = 1;
				  }
#line 3660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1498 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	flag1 = 1;
					  	if(flag2 == 0)
					  		temp_use = construct_Symbol_Table();
					  	(yyval.var_decl_attr).var = (yyvsp[-2].var_decl_attr).var;
					  	(yyval.var_decl_attr).type = 0;
					  	(yyval.var_decl_attr).width = 1;
				    }
#line 3673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1507 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1512 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1514 "ass5_roll.y" /* yacc.c:1646  */
    {
	  		(yyval.var_decl_attr).type = new_node(PTR,-1);
	  	}
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1517 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1519 "ass5_roll.y" /* yacc.c:1646  */
    {
	   	tNode *temp = new_node(PTR,-1);
	  	(yyval.var_decl_attr).type = merge_node((yyvsp[0].var_decl_attr).type,temp);
	   }
#line 3708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1526 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1527 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1531 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1532 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1536 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1537 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1542 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0){										// An indication of the fact that function has not been
			  		temp_use = construct_Symbol_Table();				// declared previously
			  		symbol_table_fields x((yyvsp[0].var_decl_attr).var,(yyvsp[0].var_decl_attr).type,0,(yyvsp[0].var_decl_attr).width,-1,0); //Insert in sym tab of function(offset comp.in insert)
			  		temp_use->insert(x);
			  	}
			  }
#line 3756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1550 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	if(flag2 == 0){
			  		symbol_table_fields x((yyvsp[0].var_decl_attr).var,(yyvsp[0].var_decl_attr).type,0,(yyvsp[0].var_decl_attr).width,-1,0); //Insert in sym tab of function(offset comp. in insert)
			  		temp_use->insert(x);
			  		}
	  			}
#line 3767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1560 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	if(flag2 == 0){						
					  		(yyval.var_decl_attr).type = merge_node((yyvsp[0].var_decl_attr).type,(yyvsp[-1].var_decl_attr).type);
					  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
					  		(yyval.var_decl_attr).width = (yyvsp[-1].var_decl_attr).width*(yyvsp[0].var_decl_attr).width;
					  	}	
					  }
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1571 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1572 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1576 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1581 "ass5_roll.y" /* yacc.c:1646  */
    {
			 	(yyval.initializer_attr) = (yyvsp[0].attribute_exp).val;
			}
#line 3805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1584 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1585 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1589 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1590 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1594 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1598 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1599 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1603 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1604 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1608 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1609 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1613 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1614 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1615 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1616 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1617 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1618 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1622 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1623 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1624 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1628 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1630 "ass5_roll.y" /* yacc.c:1646  */
    { 
				  	(yyval.attribute_exp) = (yyvsp[-1].attribute_exp);
				  }
#line 3939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1637 "ass5_roll.y" /* yacc.c:1646  */
    { 
				  (yyval.attribute_exp) = (yyvsp[0].attribute_exp);
				}
#line 3947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1641 "ass5_roll.y" /* yacc.c:1646  */
    { 
					backpatch((yyvsp[-2].attribute_exp).NL,(yyvsp[-1].instr));
					(yyval.attribute_exp) = (yyvsp[0].attribute_exp);
			  	}
#line 3956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1648 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1649 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) = (yyvsp[0].attribute_exp);}
#line 3968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1654 "ass5_roll.y" /* yacc.c:1646  */
    {(yyval.attribute_exp) =(yyvsp[-1].attribute_exp);}
#line 3974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1655 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 3980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1660 "ass5_roll.y" /* yacc.c:1646  */
    {
				  	backpatch((yyvsp[-4].N_attr),next_instr);
				  	conv2Bool(&(yyvsp[-5].attribute_exp));
				  	backpatch((yyvsp[-5].attribute_exp).TL,(yyvsp[-2].instr));
				  	(yyval.attribute_exp).NL = merge((yyvsp[-1].attribute_exp).NL,(yyvsp[-5].attribute_exp).FL);
				  	(yyval.attribute_exp).NL = merge((yyval.attribute_exp).NL,(yyvsp[0].N_attr));
				  }
#line 3992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1668 "ass5_roll.y" /* yacc.c:1646  */
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
#line 4012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1683 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1688 "ass5_roll.y" /* yacc.c:1646  */
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
#line 4034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1700 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	backpatch((yyvsp[-2].N_attr),next_instr);
					  	conv2Bool(&(yyvsp[-3].attribute_exp));
					  	backpatch((yyvsp[-3].attribute_exp).TL,(yyvsp[-8].instr));
					  	backpatch((yyvsp[-7].attribute_exp).NL,(yyvsp[-6].instr));
					  	(yyval.attribute_exp).NL = (yyvsp[-3].attribute_exp).FL;
					}
#line 4046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1708 "ass5_roll.y" /* yacc.c:1646  */
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
#line 4063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1720 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1724 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1725 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1726 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1728 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	char *arg1 = strdup(((yyvsp[-1].attribute_exp).loc)->name);
			  	fields_quad x(arg1,0,0,RETURN_EXP,(yyvsp[-1].attribute_exp).loc,0,0);
			  	quad_array->emit(x);
			  }
#line 4097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1734 "ass5_roll.y" /* yacc.c:1646  */
    {
			  	fields_quad x(0,0,0,RETURN_,0,0,0);
	  			quad_array->emit(x);
			  }
#line 4106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1741 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1742 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1746 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1747 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1751 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1753 "ass5_roll.y" /* yacc.c:1646  */
    {
					  	current = symbol_table; 
					}
#line 4144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1759 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1760 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1764 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1765 "ass5_roll.y" /* yacc.c:1646  */
    {}
#line 4168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1768 "ass5_roll.y" /* yacc.c:1646  */
    {
					(yyval.instr) = next_instr;
				}
#line 4176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1773 "ass5_roll.y" /* yacc.c:1646  */
    {
		(yyval.N_attr) = makelist(next_instr);
		fields_quad x(0,0,0,GOTO_,0,0,0);
		quad_array->emit(x);
	}
#line 4186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1780 "ass5_roll.y" /* yacc.c:1646  */
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
#line 4207 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4211 "y.tab.c" /* yacc.c:1646  */
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
#line 1798 "ass5_roll.y" /* yacc.c:1906  */


void yyerror(const char *s) {
    printf("Error occured : %s\n",s);
}
