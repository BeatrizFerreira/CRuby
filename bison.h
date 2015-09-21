%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bison.h"

typedef struct simbolo simbolo;
struct simbolo{
    
    char *nome;
    char *valor;
    char *tipo;
    int foiDefinido;
    int linha;
};
/*
    VETOR DA TABELA DE SÍMBOLOS
*/
simbolo tabela_simbolos[50];
int contador_simbolos = 0;


char p1[100];
char p2[100];
char p3[100];

extern char* yytext;
%}


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
    type IDENTIFIER SEMICOLON {
        printf("=======%s\n", %2);
        //tabela_simbolo[cont].nome = strdup($2);
        //tabela_simbolo[cont].foiDefinido = 0;
    }
    | type attribution
    ;

attribution:
    /*{ printf("%s", yytext );}*/
    IDENTIFIER ATTR expression SEMICOLON {printf("%s = %s", $1, p1); procura_tablela_simbolos($1); }
    ;

expression:
    N_INTEGER {strcpy(p1, yytext);}
    | N_REAL {printf("%s\n", $1);}
    | N_CHAR {printf("%s\n", $1);}
    /*| IDENTIFIER {printf("%s\n", $1);}*/  
    ;

type:
    TYPE_INT /*{tabela_simbolo[cont].tipo = strdup($1);}*/
    |TYPE_FLOAT 
    |TYPE_DOUBLE
    |TYPE_CHAR
%%

void procura_tablela_simbolos(char *simbolo){
    
    int i;

    for( i = 0; i < cont ; i++ ){

        if ( strcmp(simbolo, tabela_simbolo[i].nome) == 0 ) 
            break;
    }

    if ( i == cont )
        printf("Variavel não declarada\n");

}

int yyerror(char *s) {
    printf("error: %s\n",s);
}

int main(void) {
    yyparse();
}


