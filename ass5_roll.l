%{
#include <stdio.h>
#include "ass5_roll_translator.h"
#include "y.tab.h"
#include <math.h>
%}

digit 					[0-9]
identifier-nondigit 	[a-zA-Z]
identifier 				(({identifier-nondigit}+)({digit}*))+

nonzero-digit 			[1-9]
integer-constant		{nonzero-digit}{digit}*|0

sign					"+"|"-"
digit-sequence 			{digit}+
exponent-part		  	e({sign})?{digit-sequence}|E({sign})?{digit-sequence}
fractional-constant 	({digit-sequence})?"."{digit-sequence}|{digit-sequence}"."
floating-constant 		{fractional-constant}({exponent-part})?|{digit-sequence}{exponent-part}

slash					[\\]
singlequote				[\']
doublequote				[\"]
questionmark			[\?]
escape-sequence 		{slash}{singlequote}|{slash}{doublequote}|{slash}{slash}|{slash}{questionmark}|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
c-char 					{escape-sequence}|[^'\\\n]
c-char-sequence			({c-char})+
character-constant		\'{c-char-sequence}\'

constant 				{integer-constant}|{floating-constant}|{character-constant}

s-char					{escape-sequence}|[^"\\\n]
s-char-sequence			({s-char})+
string-literal			\"({s-char-sequence})?\"

single-char-punctuator	"["|"]"|"."|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"("|")"|"{"|"}"|"%"|","|"<"|">"|"^"|"|"|"="|"?"|":"|";"|"#"

singleline-comments		\/\/(.*)
multiline-comments 		\/\*(.|\n)*\*\/
white-space 			[ \t\n]

%%

"break"				{return BREAK;}
"case"				{return CASE;}
"char"				{return CHAR;}
"const"				{return CONST;}
"continue"			{return CONTINUE;}
"default"			{return DEFAULT;}
"do"				{return DO;}
"double"			{return DOUBLE;}
"else"				{return ELSE;}
"extern"			{return EXTERN;}
"float"				{return FLOAT;}
"for"				{return FOR;}
"goto"				{return GOTO;}
"if"				{return IF;}
"inline"			{return INLINE;}
"int"				{return INT;}
"long"				{return LONG;}
"restrict"			{return RESTRICT;}
"return"			{return RETURN;}
"short"				{return SHORT;}
"sizeof"			{return SIZEOF;}
"static"			{return STATIC;}
"switch"			{return SWITCH;}
"void"				{return VOID;}
"volatile"			{return VOLATILE;}
"while"				{return WHILE;}

{identifier}		        {(yylval.id_attr).var = strdup(yytext);return IDENTIFIER;}
{integer-constant}		    {yylval.intval = atoi(yytext); return INTEGER_NO;} 
{floating-constant}	        {yylval.floatval = atof(yytext);return FLOAT_NO;}
{character-constant}	    {yylval.charval = yytext[1];return CHARACTER;}
{string-literal}	        {yylval.strval = strdup(yytext); return STRING;}

"->"				{return ARROW;}
"++"				{return INCREMENT;}
"--"				{return DECREMENT;}
"<<"				{return LEFT_SHIFT;}
">>"				{return RIGHT_SHIFT;}
"<="				{return LSOE;}
">="				{return GTOE;}
"=="				{return IS_EQUAL;}
"!="				{return NOT_EQUAL;}
"&&"				{return AND;}
"||"				{return OR;}
"..."				{return TRIPLE_DOT;}
"*="				{return MULTIPLY_EQUAL;}
"/="				{return DIVIDE_EQUAL;}
"%="				{return PERCENT_EQUAL;}
"+="				{return PLUS_EQUAL;}
"-="				{return MINUS_EQUAL;}
"<<="				{return LEFT_SHIFT_EQUAL;}
">>="				{return RIGHT_SHIFT_EQUAL;}
"&="				{return AND_EQUAL;}
"^="				{return HAT_EQUAL;}
"|="				{return OR_EQUAL;}

{single-char-punctuator}	{return yytext[0];}
{singleline-comments}       {}
{multiline-comments}        {}
{white-space}               {}

%%
int yywrap(){}