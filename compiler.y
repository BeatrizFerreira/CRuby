%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char p1[100];
char p2[100];
char p3[100];

extern char* yytext;
%}

%union{
    char * strval;
    int intval;
}

%token <strval> TYPE_INT TYPE_FLOAT TYPE_DOUBLE TYPE_CHAR
%token <strval> IDENTIFIER
%token <strval> ATTR
%token <strval> N_INTEGER N_REAL N_CHAR
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

declaration:
    type IDENTIFIER SEMICOLON {printf("%s (DEC)\n", $2 );}
    | type attribution
    ;

attribution:
    /*{ printf("%s", yytext );}*/
    IDENTIFIER ATTR expression SEMICOLON {printf("%s (ID) = ", $1);}
    ;

expression:
    N_INTEGER {printf("%s\n", $1);}
    | N_REAL {printf("%s\n", $1);}
    | N_CHAR {printf("%s\n", $1);}
    | IDENTIFIER {printf("%s\n", $1);}
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

