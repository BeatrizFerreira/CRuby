%{
#include <stdlib.h>
#include <stdio.h>
#include "compiler.tab.h"
%}
digito [0-9]
identificador [a-zA-Z]+[a-zA-Z0-9]*
n_inteiro [+-]?{digito}+
n_real [+-]?{digito}+\.{digito}+
caractere .{1}
espaco_branco [ \t]+
final_de_linha [\n]

%option noyywrap

%%
"while"				return WHILE;
"for"				return FOR;
"if"				return SE;
"else"				return SENAO;
";" 				return PONTO_VIRGULA;
"int" 				return TIPO_INTEIRO;
"float" 			return TIPO_FLOAT;
"double" 			return TIPO_DOUBLE;
"char" 				return TIPO_CHAR;
{identificador} 	{yylval.strval = strdup(yytext);}; return IDENTIFICADOR;
"=" 				return ATTR;
{n_inteiro} 		{yylval.strval = strdup(yytext); return N_INTEIRO;}
{n_real} 			{yylval.strval = strdup(yytext); return N_REAL;}
"'"{caractere}"'" 	{yylval.strval = strdup(yytext); return N_CARACTERE;}
"+"					return PLUS;
"-"					return MINUS;
"*"					return TIMES;
"/"					return DIVISION;
"<"					return MENOR;
"<="				return MENORIGUAL;
">"					return MAIOR;
">="				return MAIORIGUAL;
"=="				return IGUAL;
"!="				return DIFERENTE;
"&&"				return E;
"||"				return OU;
"("					return LEFT_PARENTHESIS;
")"					return RIGHT_PARENTHESIS;
"{"					return LEFT_BRACKETS;
"}"					return RIGHT_BRACKETS;
"["					return REFUSE;

{final_de_linha} 	/*ignore*/;
{espaco_branco} 	/*ignore*/;

%%

