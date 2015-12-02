%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_simbolos.h"

char condicao[100][100];
    
int contador_for = 0;
int contador_tab = 0;

extern FILE *yyin;
extern char* yytext;
%}
 
%union{
    char * strval;
    int intval;
}

%token <strval> TIPO_INTEIRO TIPO_FLOAT TIPO_DOUBLE TIPO_CHAR
%token <strval> IDENTIFICADOR
%token <strval> ATTR
%token <strval> N_INTEIRO N_REAL N_CARACTERE
%token PONTO_VIRGULA FINAL_LINHA
%token MAIS MENOS VEZES DIVISAO MENOR MENORIGUAL MAIOR MAIORIGUAL IGUAL DIFERENTE E OU SE SENAO
%token PARENTESIS_ESQUERDO PARENTESIS_DIREITO CHAVES_ESQUERDA CHAVES_DIREITA FOR WHILE

%start Entrada

%%
Entrada:
    Entrada Linha 
    | /*Empty*/
    ;
Linha:
    comando
    | FINAL_LINHA
    ;

comando:
    {InsereTabsSaida(&saida, contador_tab);} declaracao
    | {InsereTabsSaida(&saida, contador_tab);} atribuicao
    | laco_e_condicional
    ;

laco_e_condicional:
    {InsereTabsSaida(&saida, contador_tab);} condicional
    | laco
    ;

declaracao:
    tipo IDENTIFICADOR {InsereNaSaida(&saida, ($2), linhas); InsereNaSaida(&saida, " = 0\n", linhas);}PONTO_VIRGULA {InserirSimbolo(&tabela_simbolos, $2, contador_tab); cont++; linhas++; }
    | declaracao_atribuicao
    ;

declaracao_atribuicao:
    tipo IDENTIFICADOR{InserirSimbolo(&tabela_simbolos, $2, contador_tab);InsereNaSaida(&saida, ($2), linhas);cont++;} ATTR {InsereNaSaida(&saida, " = ", linhas);} expressao PONTO_VIRGULA {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;

atribuicao:
    IDENTIFICADOR{if(verifica_usabilidade($1, contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");}} ATTR {InsereNaSaida(&saida, " = ", linhas);} expressao PONTO_VIRGULA {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;

expressao:
    N_INTEIRO {InsereNaSaida(&saida, yytext, linhas);}
    | N_REAL {InsereNaSaida(&saida, yytext, linhas);}
    | N_CARACTERE {InsereNaSaida(&saida, yytext, linhas);}
    | IDENTIFICADOR {if(verifica_usabilidade($1, contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");} }
    | operacao_matematica
    | comparador
    | PARENTESIS_ESQUERDO{InsereNaSaida(&saida, yytext, linhas);} expressao PARENTESIS_DIREITO{InsereNaSaida(&saida, yytext, linhas);}
    ;

laco_expressao:
    N_INTEIRO { strcat(condicao[contador_for], yytext ); }
    | N_REAL { strcat(condicao[contador_for], yytext); }
    | N_CARACTERE { strcat(condicao[contador_for], yytext ); }
    | IDENTIFICADOR { strcat(condicao[contador_for], yytext ); }
    | laco_operacao_matematica
    | laco_comparador
    | PARENTESIS_ESQUERDO laco_expressao PARENTESIS_DIREITO
    ;

laco_operacao_matematica:
    | laco_expressao MAIS { strcat(condicao[contador_for], yytext ); } laco_expressao 
    | laco_expressao MENOS { strcat(condicao[contador_for], yytext ); } laco_expressao 
    | laco_expressao VEZES { strcat(condicao[contador_for], yytext ); } laco_expressao
    | laco_expressao DIVISAO { strcat(condicao[contador_for], yytext ); } laco_expressao
    ;

laco_comparador:
    laco_expressao MENOR { strcat(condicao[contador_for], yytext ); } laco_expressao
    | laco_expressao MENORIGUAL { strcat(condicao[contador_for], yytext ); }  laco_expressao
    | laco_expressao MAIOR { strcat(condicao[contador_for], yytext ); }  laco_expressao
    | laco_expressao MAIORIGUAL { strcat(condicao[contador_for], yytext ); } laco_expressao
    | laco_expressao IGUAL { strcat(condicao[contador_for], yytext ); }  laco_expressao 
    | laco_expressao DIFERENTE { strcat(condicao[contador_for], yytext ); } laco_expressao
    ;

operacao_matematica:
    | expressao MAIS {InsereNaSaida(&saida, " + ", linhas);} expressao 
    | expressao MENOS {InsereNaSaida(&saida, " - ", linhas);} expressao 
    | expressao VEZES {InsereNaSaida(&saida, " * ", linhas);} expressao
    | expressao DIVISAO {InsereNaSaida(&saida, " / ", linhas);} expressao
    ;

comparador:
    expressao MENOR {InsereNaSaida(&saida, " < ", linhas);} expressao
    | expressao MENORIGUAL {InsereNaSaida(&saida, " <= ", linhas);}  expressao
    | expressao MAIOR {InsereNaSaida(&saida, " > ", linhas);}  expressao
    | expressao MAIORIGUAL {InsereNaSaida(&saida, " >= ", linhas);} expressao
    | expressao IGUAL {InsereNaSaida(&saida, " == ", linhas);}  expressao 
    | expressao DIFERENTE {InsereNaSaida(&saida, " != ", linhas);}  expressao
    ;

declaracao_if:
    SE { InsereNaSaida(&saida, "if (", linhas); }PARENTESIS_ESQUERDO condicionais_multiplos PARENTESIS_DIREITO {InsereNaSaida(&saida, ")\n", linhas); contador_tab++; } 
    
declaracao_else:
    SENAO { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "els", linhas); } condicional
    |
    SENAO { InsereNaSaida(&saida, "else\n", linhas); } comando {  contador_tab--;  InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
    |
    SENAO{ contador_tab--; InsereTabsSaida(&saida, contador_tab); contador_tab++; InsereNaSaida(&saida, "else\n", linhas); } CHAVES_ESQUERDA comandos_multiplos CHAVES_DIREITA { contador_tab--;InsereTabsSaida(&saida, contador_tab);InsereNaSaida(&saida, "end\n", linhas);}
    ;

laco:
    comando_for
    | {InsereTabsSaida(&saida, contador_tab);} declaracao_while
    ;

declaracao_while:
    WHILE { InsereNaSaida(&saida, "while ( ", linhas); } PARENTESIS_ESQUERDO condicionais_multiplos PARENTESIS_DIREITO { InsereNaSaida(&saida, " ) \n" , linhas); contador_tab++; }
    ;

declaracao_while:
    declaracao_while  comando { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "\nend\n" , linhas);}
    | declaracao_while CHAVES_ESQUERDA  comandos_multiplos CHAVES_DIREITA { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n" , linhas); }
    ;

declaracao_for:
    FOR PARENTESIS_ESQUERDO laco_for_primeira_parte PONTO_VIRGULA PARENTESIS_DIREITO {InsereTabsSaida(&saida, contador_tab);} {InsereNaSaida(&saida, "while true\n", linhas);} 
    |
    FOR PARENTESIS_ESQUERDO laco_for_primeira_parte {InsereTabsSaida(&saida, contador_tab);} {InsereNaSaida(&saida, "while ", linhas);} laco_condicionais_multiplos PONTO_VIRGULA {InsereNaSaida(&saida, "\n", linhas);} laco_for_ultima_parte PARENTESIS_DIREITO  {contador_for++;}
    ;

comando_for:
    declaracao_for  {contador_tab++;} comando {InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0';} {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}  
    |
    declaracao_for CHAVES_ESQUERDA {contador_tab++;} comandos_multiplos CHAVES_DIREITA { InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0'; InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
    |
    FOR PARENTESIS_ESQUERDO laco_for_primeira_parte PONTO_VIRGULA PARENTESIS_DIREITO CHAVES_ESQUERDA {contador_tab++; InsereNaSaida(&saida, "while true\n", linhas);}  comandos_multiplos CHAVES_DIREITA {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
    ;

laco_for_primeira_parte:
    {InsereTabsSaida(&saida, contador_tab);} atribuicao
    ;

laco_for_ultima_parte:
    IDENTIFICADOR {if(procura_tabela_simbolos($1, contador_tab)){strcat(condicao[contador_for], yytext );}else{yyerror("Variable not declared!\n");}} ATTR { strcat(condicao[contador_for], " = " ); } laco_expressao {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;    

condicional:
    declaracao_if comando {contador_tab--; {InsereTabsSaida(&saida, contador_tab);}  InsereNaSaida(&saida, "end\n", linhas);}
    |
    declaracao_if CHAVES_ESQUERDA comandos_multiplos CHAVES_DIREITA {contador_tab--; {InsereTabsSaida(&saida, contador_tab);} InsereNaSaida(&saida, "end\n", linhas);}
    |
    declaracao_if CHAVES_ESQUERDA comandos_multiplos CHAVES_DIREITA declaracao_else
    |
    declaracao_if comando declaracao_else
    ;

comandos_multiplos:
    | comando comandos_multiplos  
    | FINAL_LINHA comandos_multiplos
    ;

condicionais_multiplos:
    N_INTEIRO { if ( strcmp($1, "0") == 0 )InsereNaSaida(&saida, "false", linhas); else InsereNaSaida(&saida, "true", linhas);}
    | comparador
    | comparador booleanas
    ;

laco_condicionais_multiplos:
    comparador
    | comparador booleanas
    ;

booleanas:
    E {InsereNaSaida(&saida, " and ", linhas);}  condicionais_multiplos
    | {InsereNaSaida(&saida, " or ", linhas);} OU condicionais_multiplos
    ;

tipo:
    TIPO_INTEIRO
    |TIPO_FLOAT
    |TIPO_DOUBLE
    |TIPO_CHAR
%%

int yyerror(char *s) {
    printf("error: %s\n",s);
    erro++;
}

int main(int argc, char *argv[]) {
    saida = NULL;
    tabela_simbolos = NULL;
    linhas = 0;
    yyin = fopen(argv[1], "r");
    if (yyin == NULL){
        printf("Could not open the file.\n");
        exit(1);
    }

    char file_name[100];

    file_name[0] = '\0';

    strcat(file_name, argv[1]);

    strcat(file_name, ".rb");

    yyparse();

    // Gera o arquivo compilado corretamente , caso dê erro de compilação
    // ultimo arquivo fica disponível sem alteração.
    if ( erro == 0 ){

        printf("Name of the file: %s\n", file_name);
        fp = fopen(file_name, "w");
        Imprime(saida);
        fclose(fp);
        printf("FILE COMPILED SUCCESSFULLY!\n");
    }

}


