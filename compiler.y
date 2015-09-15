%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char p1[100];
char p2[100];
char p3[100];

extern char* yytext;
%}

%token TYPE_INT TYPE_FLOAT TYPE_DOUBLE TYPE_CHAR
%token IDENTIFIER
%token ATTR
%token N_INTEGER N_REAL N_CHAR
%token END_LINE
%token SEMICOLON

%start Input

%%
Input:
    /* Empty */
    {printf("Qualquer coisa: INPUT \n ");}
    | Input Line 
    ;
Line:
    command
    | END_LINE
    ;
command:
    declaration
    | attribution
    ;
attribution:
    /*{ printf("%s", yytext );}*/
    IDENTIFIER { strcpy(p1, yytext); } ATTR expression { strcpy(p2, yytext); } SEMICOLON { printf("%s = %s\n", p1 , p2 );}
    ;

expression:
    N_INTEGER
    | N_REAL
    | N_CHAR
    | IDENTIFIER
    ;
declaration:
    type IDENTIFIER SEMICOLON
    | type attribution
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

