#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int linhas;

typedef struct simbolo{
    char nome[MAX];
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

int procura_tabela_simbolos(char nomesimbolo[MAX]){
    
    if(tabela_simbolos == NULL){
        return 0; // nao esta na tabela de simbolos
    }else{
        Simbolo *aux = tabela_simbolos;
        while(aux->proximo != NULL)
        {
            if ( strcmp(nomesimbolo, tabela_simbolos->nome) == 0 ) 
                return 1; //esta na tabela de simbolos
            aux = aux->proximo;
        }
        return 0; //simbolo nao foi encontrado
    }

}

Simbolo * AddSimbolo(char nome[MAX])
{
    Simbolo * novo = (Simbolo*) malloc(sizeof(Simbolo));
    strcpy(novo->nome, nome);
    novo->proximo == NULL;

    return novo;
}

void InserirSimbolo(Simbolo ** temp, char nome[MAX])
{
    if ( !procura_tabela_simbolos(nome) ){//se nao esta na tabela, insere o novo simbolo
        Simbolo * aux = AddSimbolo(nome);
        Simbolo * head = *temp;
        if(*temp == NULL)
        {
            *temp = aux;
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
}

Saida * AddSaida(char string[MAX], int linha){
    Saida * novo = (Saida*) malloc(sizeof(Saida));
    strcpy(novo->string, string);
    novo->linha = linha;
    novo->proximo == NULL;

    return novo;
}

void InsereNaSaida(Saida ** temp, char string[MAX], int linha){
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

void Imprime(Saida * temp)
{
    Saida * aux = temp;
    while(aux != NULL)
    {
        fprintf(fp, "%s", aux->string );
        aux= aux->proximo;    
    }
}
