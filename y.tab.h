/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 11 "ass5_roll.y" /* yacc.c:1909  */

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

#line 189 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
