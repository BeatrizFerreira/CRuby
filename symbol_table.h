#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct simbolo simbolo;
struct simbolo{
    
    char nome[MAX];
    char valor[MAX];
    //char tipo[MAX];
    int foiDefinido;
    int linha;
    struct simbolo * proximo;
};
/*
    VETOR DA TABELA DE SÍMBOLOS
*/
FILE *fp;
simbolo * tabela_simbolos
//simbolo tabela_simbolos[50];
int contador_simbolos = 0;
int cont = 0;

int procura_tabela_simbolos(char *nomesimbolo){
    
    if(tabela_simbolos == NULL){
        return 0; // nao esta na tabela de simbolos
    }else{
        simbolo aux = tabela_simbolos;
        while(aux->proximo != NULL)
        {
            if ( strcmp(nomesimbolo, tabela_simbolos.nome) == 0 ) 
                return 1; //esta na tabela de simbolos
            aux = aux->proximo;
        }
        return 0; //simbolo nao foi encontrado
    }

}

simbolo * AddSimbolo(char nome[MAX], char valor[MAX], int definido)
{
    simbolo * add = (simbolo*) malloc(sizeof(simbolo));
    strcpy(add->nome, nome);
    strcpy(add->valor, valor);
    //strcpy(add->tipo, tipo);
    strcpy(add->foiDefinido, definido);
    add->proximo == NULL;

    return add;
}

void InserirSimbolo(simbolo ** temp, char nome[MAX], char valor[MAX], int definido)
{
    simbolo * aux = AddSimbolo(nome, valor, definido);
    simbolo * head = *temp;
    if(*temp == NULL)
    {
        *temp = aux;
    }
    else
    {
        simbolo * aux2 = *temp;
        while(aux2->proximo != NULL)
        {
            aux2 = aux2->proximo;
        }

        aux2->proximo = aux;
    }
}
