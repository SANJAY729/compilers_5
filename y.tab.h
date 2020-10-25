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

#line 213 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
