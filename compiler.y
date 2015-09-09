%{
#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.h"
%}

%token SEMICOLON
%token TYPE_INT TYPE_FLOAT TYPE_DOUBLE TYPE_CHAR
%token IDENTIFIER
%token ATTR
%token N_INTEGER N_REAL CHAR
%token END_LINE

%start Input

%%
Input:
    /* Empty */
    | Input Line
    ;
Line:
    END_LINE
    | inclusion
    | command
    ;
inclusion:
    '#include' '<'|'"' IDENTIFIER'.h''>'|'"'';'
    ;
command:
    attribution
    | declaration
    ;
attribution:
    IDENTIFIER ATTR expression';'
    ;

expression:
    N_INTEGER
    | N_REAL
    | CHAR
    | IDENTIFIER
    ;
declaration:
    type IDENTIFIER';'
    ;

type:
    TYPE_INT
    |TYPE_FLOAT
    |TYPE_DOUBLE
    |TYPE_CHAR
    ;
%%

int yyerror(char *s) {
    printf("error: %s\n",s);
}

int main(void) {
    yyparse();
}

