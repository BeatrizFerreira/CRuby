%{
#include <stdlib.h>
#include <stdio.h>
#include "compiler.tab.h"
#include "symbol_table.h"
%}
digit [0-9]
identifier [a-zA-Z]+[a-zA-Z{digit}]*
n_integer [+-]?{digit}+
n_real [+-]?{digit}+\.{digit}+
char \'.{1}\'
white [ \t]+
end_line [\n]

%%
";" {printf ("xxpto"); return SEMICOLON;}
"int" return TYPE_INT;
"float" return TYPE_FLOAT;
"double" return TYPE_DOUBLE;
"char" return TYPE_CHAR;
{identifier} {insert(yytext); return IDENTIFIER;}
{white} ;
"=" return ATTRIBUTION;
{n_integer} return N_INTEGER;
{n_real} return N_REAL;
{char} return CHAR;
{end_line} return END_LINE;

%%
main(){yylex();}
int yywrap() {
return 0;
}
