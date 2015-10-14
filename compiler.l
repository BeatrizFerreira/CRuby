%{
#include <stdlib.h>
#include <stdio.h>
#include "compiler.tab.h"
%}
digit [0-9]
identifier [a-zA-Z]+[a-zA-Z{digit}]*
n_integer [+-]?{digit}+
n_real [+-]?{digit}+\.{digit}+
char .{1}
white [ \t]+
end_line [\n]

%%
"if"			return SE;
";" 			return SEMICOLON;
"int" 			return TYPE_INT;
"float" 		return TYPE_FLOAT;
"double" 		return TYPE_DOUBLE;
"char" 			return TYPE_CHAR;
{identifier} 	{yylval.strval = strdup(yytext); return IDENTIFIER;}
"=" 			return ATTR;
{n_integer} 	{yylval.strval = strdup(yytext); return N_INTEGER;}
{n_real} 		{yylval.strval = strdup(yytext); return N_REAL;}
"'"{char}"'" 	{yylval.strval = strdup(yytext); return N_CHAR;}
"if"			return SE;
"+"				return PLUS;
"-"				return MINUS;
"*"				return TIMES;
"/"				return DIVISION;
"<"				return MENOR;
"<="			return MENORIGUAL;
">"				return MAIOR;
">="			return MAIORIGUAL;
"=="			return IGUAL;
"!="			return DIFERENTE;
"&&"			return E;
"||"			return OU;
"else"			return SENAO;
"("				return LEFT_PARENTHESIS;
")"				return RIGHT_PARENTHESIS;
"{"				return LEFT_BRACKETS;
"}"				return RIGHT_BRACKETS;

{end_line} 		return END_LINE;
{white} 		/*ignore*/;
<<EOF>>			return eof;

%%
/*main(){yylex();}*/
int yywrap() {
return 0;
}
