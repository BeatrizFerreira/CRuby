%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

/*
    ASSINATURAS
*/
int procura_tabela_simbolos(char *simbolo);

char p1[100];
char p2[100];
char p3[100];

char type[100];
char valor[100];

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
%token PLUS MINUS TIMES DIVISION

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
        printf("=======%s\n", $2);
        tabela_simbolos[cont].nome = strdup($2);
        tabela_simbolos[cont].foiDefinido = 0;
        cont++;
    }
    | declaration_attribution
    ;

declaration_attribution:

    type IDENTIFIER {

        if ( procura_tabela_simbolos ($2) ){

            printf("Já está declarada!\n");
        }else{

            tabela_simbolos[cont].nome = strdup($2);
            tabela_simbolos[cont].foiDefinido = 0;
            cont++;
            printf("Variavel declarada com sucesso!\n");
            fp = fopen("ruby.rb", "a");
            fprintf(fp, "\n%s = ", $2);
            fclose(fp);
        }

    } ATTR expression SEMICOLON
    ;

attribution:
    /*{ printf("%s", yytext );}*/
    IDENTIFIER ATTR {

        if ( procura_tabela_simbolos($1) ){

            printf("Variavel foi declarada!\n");

            fp = fopen("ruby.rb", "a");
            fprintf(fp, "\n%s = ", $1 );
            fclose(fp);
        }else{

            printf("Variavel nao foi declarada!\n");
        }
     } expression SEMICOLON
    ;

expression:
    N_INTEGER {fp = fopen("ruby.rb", "a");fprintf(fp, "%s", yytext ); fclose(fp);}
    | N_REAL {fp = fopen("ruby.rb", "a");fprintf(fp, "%s", yytext ); fclose(fp);}
    | N_CHAR {fp = fopen("ruby.rb", "a");fprintf(fp, "%s", yytext ); fclose(fp);}
    | IDENTIFIER {fp = fopen("ruby.rb", "a");fprintf(fp, "%s", yytext ); fclose(fp);}  
    | math_operation
    ;

math_operation:
    | expression PLUS {fp = fopen("ruby.rb", "a");fprintf(fp, " + " ); fclose(fp);} expression 
    | expression MINUS {fp = fopen("ruby.rb", "a");fprintf(fp, " - " ); fclose(fp);} expression 
    | expression TIMES {fp = fopen("ruby.rb", "a");fprintf(fp, " * " ); fclose(fp);} expression
    | expression DIVISION {fp = fopen("ruby.rb", "a");fprintf(fp, " / " ); fclose(fp);} expression
    ;
type:
    TYPE_INT { tabela_simbolos[cont].tipo = strdup(yytext);
                strcpy(type, yytext); 
                printf("tipo = %s\n", tabela_simbolos[cont].tipo );}
    |TYPE_FLOAT { tabela_simbolos[cont].tipo = strdup(yytext);

                printf("tipo = %s\n", tabela_simbolos[cont].tipo );}
    |TYPE_DOUBLE { tabela_simbolos[cont].tipo = strdup(yytext);

                printf("tipo = %s\n", tabela_simbolos[cont].tipo );}
    |TYPE_CHAR { tabela_simbolos[cont].tipo = strdup(yytext);

                printf("tipo = %s\n", tabela_simbolos[cont].tipo );}
%%

int yyerror(char *s) {
    printf("error: %s\n",s);
}

int main(void) {

    fp = fopen("ruby.rb", "w+");
    yyparse();
    fclose(fp);
}


