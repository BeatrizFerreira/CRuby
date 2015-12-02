#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define USAVEL 1;
#define ENCONTRADO 1;
#define NAO_ENCONTRADO 0;

int linhas;

int erro = 0;

typedef struct simbolo{
    char nome[MAX];
    int nivelEscopo;
    struct simbolo * proximo;
}Simbolo;

typedef struct saida{
    char string[MAX];
    int linha;
    struct saida * proximo;
}Saida;


FILE *fp;
Simbolo * tabela_simbolos;
Saida * saida;

int contador_simbolos = 0;
int cont = 0;

// Verifica se uma variável está na tabela de símbolo.
int procura_tabela_simbolos(char nomesimbolo[MAX], int escopo)
{
    
    if(tabela_simbolos == NULL)
    {

        return 0; // nao esta na tabela de simbolos
    }
    else
    {

        Simbolo *aux = tabela_simbolos;
        while( aux != NULL)
        {

            if ( strcmp(nomesimbolo, aux->nome) == 0 )
            {

                if ( aux->nivelEscopo == escopo )
                    return ENCONTRADO;//esta na tabela de simbolos
            }
            aux = aux->proximo;
        }
        return NAO_ENCONTRADO; //simbolo nao foi encontrado
    }

}

// Verifica se uma variável pode ser usada dentro de determinado escopo.
int verifica_usabilidade(char nomesimbolo[MAX], int escopo)
{
    
    if(tabela_simbolos == NULL)
    {

        return 0; // nao esta na tabela de simbolos
    }
    else
    {

        Simbolo *aux = tabela_simbolos;
        while( aux != NULL)
        {

            if ( strcmp(nomesimbolo, aux->nome) == 0 )
            {

                if ( aux->nivelEscopo <= escopo )
                    return USAVEL;
            }
            aux = aux->proximo;
        }
        return NAO_ENCONTRADO; //simbolo nao foi encontrado
    }

}

// fazer metodo que ve se o simbolo existe antes de usar
Simbolo * AddSimbolo(char nome[MAX] , int escopo )
{
    Simbolo * novo = (Simbolo*) malloc(sizeof(Simbolo));
    strcpy(novo->nome, nome);
    novo->nivelEscopo = escopo;
    novo->proximo = NULL;

    return novo;
}

// Insere símbolo na tabela de símbolos.
void InserirSimbolo(Simbolo ** temp, char nome[MAX], int escopo)
{
    if ( !procura_tabela_simbolos(nome, escopo) )
    {//se nao esta na tabela, insere o novo simbolo
        Simbolo * aux = AddSimbolo(nome , escopo );

        if(*temp == NULL)
        {
            *temp = aux;
            aux->proximo = NULL;
        }
        else
        {

            Simbolo * aux2 = *temp;
            while(aux2->proximo != NULL)
            {
                aux2 = aux2->proximo;
            }
            aux2->proximo = aux;
        }
    } 
    else
    {
        printf("(%s) => ", nome); 
        yyerror("Variavel já declarada.\n");  
    }
}
// Aloca memória de símbolos para gerar o código em Ruby.
Saida * AddSaida(char string[MAX], int linha)
{
    Saida * novo = (Saida*) malloc(sizeof(Saida));
    strcpy(novo->string, string);
    novo->linha = linha;
    novo->proximo == NULL;

    return novo;
}

// Insere símbolos em uma lista dinâmica para gerar o código em Ruby.
void InsereNaSaida(Saida ** temp, char string[MAX], int linha)
{

    Saida * aux = AddSaida(string, linha);
    Saida * head = *temp;

    if(*temp == NULL)
    {
        *temp = aux;
    }
    else
    {
        Saida * aux2 = *temp;
        while(aux2->proximo != NULL)
        {
            aux2 = aux2->proximo;
        }
        aux2->proximo = aux;
    }
}

// Insere tabs na lista dinâmica para gerar o código em Ruby.
void InsereTabsSaida(Saida ** temp, int tabs )
{

    int i;

    for ( i = 0 ; i < tabs ; i++ )
        InsereNaSaida(&saida, "\t" , tabs );

}

// Imprime a lista dinâmica contendo o código em Ruby.
void Imprime(Saida * temp)
{

    Saida * aux = temp;

    while(aux != NULL)
    {
        fprintf(fp, "%s", aux->string );
        aux= aux->proximo;    
    }
    
}
