%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

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
%token PLUS MINUS TIMES DIVISION MENOR MENORIGUAL MAIOR MAIORIGUAL IGUAL DIFERENTE E OU SE SENAO
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS

%start Input

%%
Input:
    /* Empty */
    | Input Line 
    ;
Line:
    command
    | END_LINE
    ;

command:
    declaration
    | attribution
    | conditional
    ;

declaration:
    type IDENTIFIER SEMICOLON {InserirSimbolo(&tabela_simbolos, $2); cont++; linhas++;}
    | declaration_attribution
    ;

declaration_attribution:
    type IDENTIFIER{InserirSimbolo(&tabela_simbolos, $2);InsereNaSaida(&saida, ($2), linhas);cont++;} ATTR {InsereNaSaida(&saida, " = ", linhas);} expression SEMICOLON {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;

attribution:
    IDENTIFIER{InsereNaSaida(&saida, $1, linhas);} ATTR {InsereNaSaida(&saida, " = ", linhas);} expression SEMICOLON {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;

expression:
    N_INTEGER {InsereNaSaida(&saida, yytext, linhas);}
    | N_REAL {InsereNaSaida(&saida, yytext, linhas);}
    | N_CHAR {InsereNaSaida(&saida, yytext, linhas);}
    | IDENTIFIER {if(procura_tabela_simbolos($1)){InsereNaSaida(&saida, yytext, linhas);}else{yyerror("Variavel nao declarada");} }
    | math_operation
    | comparator
    | LEFT_PARENTHESIS{InsereNaSaida(&saida, yytext, linhas);} expression RIGHT_PARENTHESIS{InsereNaSaida(&saida, yytext, linhas);}
    ;

math_operation:
    | expression PLUS {InsereNaSaida(&saida, " + ", linhas);} expression 
    | expression MINUS {InsereNaSaida(&saida, " - ", linhas);} expression 
    | expression TIMES {InsereNaSaida(&saida, " * ", linhas);} expression
    | expression DIVISION {InsereNaSaida(&saida, " / ", linhas);} expression
    ;

comparator:
    expression MENOR expression
    | expression MENORIGUAL expression
    | expression MAIOR expression
    | expression MAIORIGUAL expression
    | expression IGUAL expression 
    | expression DIFERENTE expression
    ;

conditional:
    SE LEFT_PARENTHESIS multiple_conditional RIGHT_PARENTHESIS SEMICOLON
    ;

multiple_conditional:
    comparator
    | comparator booleans
    ;

booleans:
    E multiple_conditional
    | OU multiple_conditional
    ;

type:
    TYPE_INT
    |TYPE_FLOAT
    |TYPE_DOUBLE
    |TYPE_CHAR
%%

int yyerror(char *s) {
    printf("error: %s\n",s);

}

int main(void) {
    saida = NULL;
    tabela_simbolos = NULL;
    linhas = 0;

    yyparse();

    fp = fopen("ruby.rb", "w");
    Imprime(saida);
    fclose(fp);
    /*passo = 1;
    yyparse();

    rewind(fp, 0); //volta o arquivo para 0

    passo = 2;
    yyparse();

    fclose(fp);*/
}


