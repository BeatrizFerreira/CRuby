%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

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

%token <strval> TYPE_INT TYPE_FLOAT TYPE_DOUBLE TYPE_CHAR
%token <strval> IDENTIFIER
%token <strval> ATTR
%token <strval> N_INTEGER N_REAL N_CHAR
%token END_LINE END
%token SEMICOLON
%token PLUS MINUS TIMES DIVISION MENOR MENORIGUAL MAIOR MAIORIGUAL IGUAL DIFERENTE E OU SE SENAO
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS LEFT_BRACKETS RIGHT_BRACKETS FOR WHILE REFUSE

%start Input

%%
Input:
    Input Line 
    | /*Empty*/
    ;
Line:
    command
    | END_LINE
    ;

command:
    {InsereTabsSaida(&saida, contador_tab);} declaration
    | {InsereTabsSaida(&saida, contador_tab);} attribution
    | loop_and_conditional
    ;

loop_and_conditional:
    {InsereTabsSaida(&saida, contador_tab);} conditional
    | loop
    ;

declaration:
    type IDENTIFIER {InsereNaSaida(&saida, ($2), linhas); InsereNaSaida(&saida, " = 0\n", linhas);}SEMICOLON {InserirSimbolo(&tabela_simbolos, $2, contador_tab); cont++; linhas++; }
    | declaration_attribution
    ;

declaration_attribution:
    type IDENTIFIER{InserirSimbolo(&tabela_simbolos, $2, contador_tab);InsereNaSaida(&saida, ($2), linhas);cont++;} ATTR {InsereNaSaida(&saida, " = ", linhas);} expression SEMICOLON {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;

attribution:
    IDENTIFIER{if(verifica_usabilidade($1, contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");}} ATTR {InsereNaSaida(&saida, " = ", linhas);} expression SEMICOLON {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;

expression:
    N_INTEGER {InsereNaSaida(&saida, yytext, linhas);}
    | N_REAL {InsereNaSaida(&saida, yytext, linhas);}
    | N_CHAR {InsereNaSaida(&saida, yytext, linhas);}
    | IDENTIFIER {if(verifica_usabilidade($1, contador_tab)){InsereNaSaida(&saida, yytext, linhas);}else{printf("(%s) => ", yytext); yyerror("Variable not declared!\n");} }
    | math_operation
    | comparator
    | LEFT_PARENTHESIS{InsereNaSaida(&saida, yytext, linhas);} expression RIGHT_PARENTHESIS{InsereNaSaida(&saida, yytext, linhas);}
    ;

expression_loop:
    N_INTEGER { strcat(condicao[contador_for], yytext ); }
    | N_REAL { strcat(condicao[contador_for], yytext); }
    | N_CHAR { strcat(condicao[contador_for], yytext ); }
    | IDENTIFIER { strcat(condicao[contador_for], yytext ); printf("[%d] = %s\n", contador_for , condicao[contador_for]); }
    | math_operation_loop
    | comparator_loop
    | LEFT_PARENTHESIS expression_loop RIGHT_PARENTHESIS
    ;

math_operation_loop:
    | expression_loop PLUS { strcat(condicao[contador_for], yytext ); } expression_loop 
    | expression_loop MINUS { strcat(condicao[contador_for], yytext ); } expression_loop 
    | expression_loop TIMES { strcat(condicao[contador_for], yytext ); } expression_loop
    | expression_loop DIVISION { strcat(condicao[contador_for], yytext ); } expression_loop
    ;

comparator_loop:
    expression_loop MENOR { strcat(condicao[contador_for], yytext ); } expression_loop
    | expression_loop MENORIGUAL { strcat(condicao[contador_for], yytext ); }  expression_loop
    | expression_loop MAIOR { strcat(condicao[contador_for], yytext ); }  expression_loop
    | expression_loop MAIORIGUAL { strcat(condicao[contador_for], yytext ); } expression_loop
    | expression_loop IGUAL { strcat(condicao[contador_for], yytext ); }  expression_loop 
    | expression_loop DIFERENTE { strcat(condicao[contador_for], yytext ); } expression_loop
    ;

math_operation:
    | expression PLUS {InsereNaSaida(&saida, " + ", linhas);} expression 
    | expression MINUS {InsereNaSaida(&saida, " - ", linhas);} expression 
    | expression TIMES {InsereNaSaida(&saida, " * ", linhas);} expression
    | expression DIVISION {InsereNaSaida(&saida, " / ", linhas);} expression
    ;

comparator:
    expression MENOR {InsereNaSaida(&saida, " < ", linhas);} expression
    | expression MENORIGUAL {InsereNaSaida(&saida, " <= ", linhas);}  expression
    | expression MAIOR {InsereNaSaida(&saida, " > ", linhas);}  expression
    | expression MAIORIGUAL {InsereNaSaida(&saida, " >= ", linhas);} expression
    | expression IGUAL {InsereNaSaida(&saida, " == ", linhas);}  expression 
    | expression DIFERENTE {InsereNaSaida(&saida, " != ", linhas);}  expression
    ;

if_:
    SE { InsereNaSaida(&saida, "if (", linhas); }LEFT_PARENTHESIS multiple_conditional RIGHT_PARENTHESIS {InsereNaSaida(&saida, ")\n", linhas); contador_tab++; } 
    
else_:
    SENAO { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "els", linhas); } conditional
    |
    SENAO { InsereNaSaida(&saida, "else\n", linhas); } command {  contador_tab--;  InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
    |
    SENAO{ contador_tab--; InsereTabsSaida(&saida, contador_tab); contador_tab++; InsereNaSaida(&saida, "else\n", linhas); } LEFT_BRACKETS multiple_command RIGHT_BRACKETS { contador_tab--;InsereTabsSaida(&saida, contador_tab);InsereNaSaida(&saida, "end\n", linhas);}
    ;

loop:
    for_statement
    | {InsereTabsSaida(&saida, contador_tab);} while
    ;

while_statement:
    WHILE { InsereNaSaida(&saida, "while ( ", linhas); } LEFT_PARENTHESIS multiple_conditional RIGHT_PARENTHESIS { InsereNaSaida(&saida, " ) \n" , linhas); contador_tab++; }
    ;

while:
    while_statement  command { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "\nend\n" , linhas);}
    | while_statement LEFT_BRACKETS  multiple_command RIGHT_BRACKETS { contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n" , linhas); }
    ;

for_:
    // FOR LEFT_PARENTHESIS SEMICOLON SEMICOLON RIGHT_PARENTHESIS  {InsereTabsSaida(&saida, contador_tab);} {InsereNaSaida(&saida, "while true\n", linhas);}
    // |
    FOR LEFT_PARENTHESIS first_for_loop_part SEMICOLON RIGHT_PARENTHESIS {InsereTabsSaida(&saida, contador_tab);} {InsereNaSaida(&saida, "while true\n", linhas);} 
    |
    FOR LEFT_PARENTHESIS first_for_loop_part {InsereTabsSaida(&saida, contador_tab);} {InsereNaSaida(&saida, "while ", linhas);} multiple_conditional_loop SEMICOLON {InsereNaSaida(&saida, "\n", linhas);} last_for_loop_part RIGHT_PARENTHESIS  {contador_for++;}
    ;

for_statement:
    for_  {contador_tab++;} command {InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0';} {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}  
    |
    for_ LEFT_BRACKETS {contador_tab++;} multiple_command RIGHT_BRACKETS { InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0'; printf("condicao eh %s\n", condicao[contador_for]); InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
    |
    FOR LEFT_PARENTHESIS first_for_loop_part SEMICOLON RIGHT_PARENTHESIS LEFT_BRACKETS {contador_tab++; InsereNaSaida(&saida, "while true\n", linhas);}  multiple_command RIGHT_BRACKETS {InsereNaSaida(&saida, "\n", linhas); contador_tab--; InsereTabsSaida(&saida, contador_tab); InsereNaSaida(&saida, "end\n", linhas);}
    ;

first_for_loop_part:
    {InsereTabsSaida(&saida, contador_tab);} attribution
    ;

last_for_loop_part:
    IDENTIFIER {if(procura_tabela_simbolos($1, contador_tab)){strcat(condicao[contador_for], yytext );printf(" KK %s\n", condicao[contador_for]);}else{yyerror("Variable not declared!\n");}} ATTR { strcat(condicao[contador_for], " = " ); } expression_loop {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;    

conditional:
    if_ command {contador_tab--; {InsereTabsSaida(&saida, contador_tab);}  InsereNaSaida(&saida, "end\n", linhas);}
    |
    if_ LEFT_BRACKETS multiple_command RIGHT_BRACKETS {contador_tab--; {InsereTabsSaida(&saida, contador_tab);} InsereNaSaida(&saida, "end\n", linhas);}
    |
    if_ LEFT_BRACKETS multiple_command RIGHT_BRACKETS else_
    |
    if_ command else_
    ;

multiple_command:
    | command multiple_command  
    | END_LINE multiple_command
    ;

multiple_conditional:
    N_INTEGER { if ( strcmp($1, "0") == 0 )InsereNaSaida(&saida, "false", linhas); else InsereNaSaida(&saida, "true", linhas);}
    | comparator
    | comparator booleans
    ;

multiple_conditional_loop:
    comparator
    | comparator booleans
    ;

booleans:
    E {InsereNaSaida(&saida, " and ", linhas);}  multiple_conditional
    | {InsereNaSaida(&saida, " or ", linhas);} OU multiple_conditional
    ;

type:
    TYPE_INT
    |TYPE_FLOAT
    |TYPE_DOUBLE
    |TYPE_CHAR
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


