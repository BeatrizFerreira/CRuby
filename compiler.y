%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

FILE *fp;
simbolo tabela_simbolos[50];
int contador_simbolos = 0;
int cont = 0;



/*
    ASSINATURAS
*/
int procura_tablela_simbolos(char *simbolo);

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

    type IDENTIFIER ATTR expression SEMICOLON{

        if ( procura_tablela_simbolos ($2) ){

            printf("Já está declarada!\n");
        }else{

            tabela_simbolos[cont].nome = strdup($2);
            tabela_simbolos[cont].foiDefinido = 0;
            cont++;
            printf("Variavel declarada com sucesso!\n");
            fp = fopen("ruby.rb", "a");
            fprintf(fp, "%s = %s\n", $2 , p1 );
            fclose(fp);
        }

    }
    ;

attribution:
    /*{ printf("%s", yytext );}*/
    IDENTIFIER ATTR expression SEMICOLON {

        if ( procura_tablela_simbolos($1) ){

            printf("Variavel foi declarada!\n");

            fp = fopen("ruby.rb", "a");
            fprintf(fp, "%s = %s\n", $1 , p1 );
            fclose(fp);
        }else{

            printf("Variavel nao foi declarada!\n");
        }
     }
    ;

expression:
    N_INTEGER {strcpy(p1, yytext);}
    | N_REAL {printf("%s\n", $1);}
    | N_CHAR {printf("%s\n", $1);}
    /*| IDENTIFIER {printf("%s\n", $1);}*/  
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

int procura_tablela_simbolos(char *simbolo){
    
    int i;

    for( i = 0; i < cont ; i++ ){

        if ( strcmp(simbolo, tabela_simbolos[i].nome) == 0 ) 
            break;
    }

    printf("%d < %d\n", i , cont);

    if ( i == cont )
        return 0; // não está na tabela de símbolos
    else
        return 1;

}

int yyerror(char *s) {
    printf("error: %s\n",s);
}

int main(void) {

    fp = fopen("ruby.rb", "w+");
    yyparse();
    fclose(fp);
}


