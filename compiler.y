%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

char condicao[100][100];

int contador_for = 0;

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
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS eof LEFT_BRACKETS RIGHT_BRACKETS FOR
%token REFUSE

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
    | loop
    ;

declaration:
    type IDENTIFIER {InsereNaSaida(&saida, ($2), linhas); InsereNaSaida(&saida, " = 0\n", linhas);}SEMICOLON {InserirSimbolo(&tabela_simbolos, $2); cont++; linhas++; }
    | declaration_attribution
    ;

declaration_attribution:
    type IDENTIFIER{InserirSimbolo(&tabela_simbolos, $2);InsereNaSaida(&saida, ($2), linhas);cont++;} ATTR {InsereNaSaida(&saida, " = ", linhas);} expression SEMICOLON {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;

attribution:
    IDENTIFIER{if(procura_tabela_simbolos($1)){InsereNaSaida(&saida, yytext, linhas);}else{erro++;yyerror("Variavel nao declarada");}} ATTR {InsereNaSaida(&saida, " = ", linhas);} expression SEMICOLON {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;

expression:
    N_INTEGER {InsereNaSaida(&saida, yytext, linhas);}
    | N_REAL {InsereNaSaida(&saida, yytext, linhas);}
    | N_CHAR {InsereNaSaida(&saida, yytext, linhas);}
    | IDENTIFIER {printf("!%s\n", $1);if(procura_tabela_simbolos($1)){InsereNaSaida(&saida, yytext, linhas);}else{erro++;yyerror("Variavel nao declarada");} }
    | math_operation
    | comparator
    | LEFT_PARENTHESIS{InsereNaSaida(&saida, yytext, linhas);} expression RIGHT_PARENTHESIS{InsereNaSaida(&saida, yytext, linhas);}
    ;

expression_loop:
    N_INTEGER { strcat(condicao[contador_for], yytext ); }
    | N_REAL { strcat(condicao[contador_for], yytext); }
    | N_CHAR { strcat(condicao[contador_for], yytext ); }
    | IDENTIFIER { printf("expressao %s\n", yytext); strcat(condicao[contador_for], yytext ); printf("[%d] = %s\n", contador_for , condicao[contador_for]); }
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
    SE {InsereNaSaida(&saida, "if (", linhas); }LEFT_PARENTHESIS multiple_conditional RIGHT_PARENTHESIS {InsereNaSaida(&saida, ")\n", linhas);} 
    
else_:
    SENAO {InsereNaSaida(&saida, "els", linhas); } conditional
    |
    SENAO END_LINE {InsereNaSaida(&saida, "else\n", linhas); } command {InsereNaSaida(&saida, "end\n", linhas);}
    |
    SENAO{InsereNaSaida(&saida, "else\n", linhas); } LEFT_BRACKETS multiple_command RIGHT_BRACKETS {InsereNaSaida(&saida, "end\n", linhas);}
    ;

loop:
    for_statement
    ;

for_:
    FOR LEFT_PARENTHESIS SEMICOLON SEMICOLON RIGHT_PARENTHESIS END_LINE{InsereNaSaida(&saida, "while true\n", linhas);}
    |
    FOR LEFT_PARENTHESIS first_for_loop_part SEMICOLON RIGHT_PARENTHESIS END_LINE{InsereNaSaida(&saida, "while true\n", linhas);} 
    |
    FOR LEFT_PARENTHESIS first_for_loop_part {InsereNaSaida(&saida, "while ", linhas);} multiple_conditional_loop SEMICOLON {InsereNaSaida(&saida, "\n", linhas);} last_for_loop_part RIGHT_PARENTHESIS {contador_for++;}
    ;

for_statement:
    for_ command {InsereNaSaida(&saida, "end\n", linhas);}
    |
    for_ LEFT_BRACKETS multiple_command RIGHT_BRACKETS {InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0'; printf("condicao eh %s\n", condicao[contador_for]);InsereNaSaida(&saida, "\nend\n", linhas);}
    |
    FOR LEFT_PARENTHESIS first_for_loop_part SEMICOLON RIGHT_PARENTHESIS LEFT_BRACKETS END_LINE {InsereNaSaida(&saida, "while true\n", linhas);}  multiple_command RIGHT_BRACKETS {InsereNaSaida(&saida, "end\n", linhas);}
    ;

first_for_loop_part:
    attribution
    ;

last_for_loop_part:
    IDENTIFIER{if(procura_tabela_simbolos($1)){strcat(condicao[contador_for], yytext );printf(" KK %s\n", condicao[contador_for]);}else{erro++;yyerror("Variavel nao declarada");}} ATTR { strcat(condicao[contador_for], " = " ); } expression_loop {InsereNaSaida(&saida, "\n", linhas);linhas++;}
    ;    

conditional:
    if_ END_LINE {InsereNaSaida(&saida, "\t", linhas);} command {InsereNaSaida(&saida, "end\n", linhas);}
    |
    if_ LEFT_BRACKETS multiple_command RIGHT_BRACKETS {InsereNaSaida(&saida, "end\n", linhas);}
    |
    if_ LEFT_BRACKETS multiple_command RIGHT_BRACKETS {InsereNaSaida(&saida, "end\n", linhas);} else_
    ;

/*incremento:
    IDENTIFIER PLUS PLUS
    | attribution
    ;
*/
multiple_command:
    | command multiple_command  
    | END_LINE multiple_command
    ;

multiple_conditional:
    comparator
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
    // erro++;
}

int main(void) {
    saida = NULL;
    tabela_simbolos = NULL;
    linhas = 0;

    yyparse();

    fp = fopen("ruby.rb", "w");
    Imprime(saida);
    printf("caracalho %s\n", condicao[contador_for]);

    int i;

    printf("hue\n%s\n", condicao[0]);
    printf("hue\n%s\n", condicao[1]);
    printf("hue\n%s\n", condicao[2]);


    fclose(fp);
    /*passo = 1;
    yyparse();

    rewind(fp, 0); //volta o arquivo para 0

    passo = 2;
    yyparse();

    fclose(fp);*/
}


