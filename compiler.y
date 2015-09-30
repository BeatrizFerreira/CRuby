%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"


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
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS

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
        InserirSimbolo(&tabela_simbolos, strdup($2), '0', 0)
        //tabela_simbolos[cont].nome = strdup($2);
        //tabela_simbolos[cont].foiDefinido = 0;

        fp = fopen("ruby.rb", "a");
        fprintf(fp, "%s = 0\n", $2);
        fclose(fp);
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
    | IDENTIFIER {

        if ( procura_tabela_simbolos($1) ){

            printf("Variavel foi declarada!\n");

            // fp = fopen("ruby.rb", "a");
            // fprintf(fp, "\n%s = ", $1 );
            // fclose(fp);
        }else{

            yyerror("syntax\n");

            exit(1);
            printf("Variavel nao foi dec2222222222222larada!\n");
        }

        fp = fopen("ruby.rb", "a");fprintf(fp, "%s", yytext ); fclose(fp);}  
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
    
    fp = fopen("ruby.rb", "w");
    fclose(fp);
    printf("error: %s\n",s);

}

int main(void) {

    fp = fopen("ruby.rb", "w+");
    
    /*passo = 1;
    yyparse();

    rewind(fp, 0); //volta o arquivo para 0

    passo = 2;*/
    yyparse();

    fclose(fp);
}


