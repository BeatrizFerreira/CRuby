#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int linhas;

int erro = 0;

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
        printf("vazio!\n");
        return 0; // nao esta na tabela de simbolos
    }else{

        printf("nao vazio1\n");
        Simbolo *aux = tabela_simbolos;
        while( aux != NULL)
        {
            printf("hue\n");
            if ( strcmp(nomesimbolo, aux->nome) == 0 ){

                return 1; //esta na tabela de simbolos
            }
            aux = aux->proximo;
        }
        return 0; //simbolo nao foi encontrado
    }

}

Simbolo * AddSimbolo(char nome[MAX])
{
    Simbolo * novo = (Simbolo*) malloc(sizeof(Simbolo));
    strcpy(novo->nome, nome);
    novo->proximo = NULL;

    return novo;
}

void InserirSimbolo(Simbolo ** temp, char nome[MAX])
{
    if ( !procura_tabela_simbolos(nome) ){//se nao esta na tabela, insere o novo simbolo
        Simbolo * aux = AddSimbolo(nome);
        // Simbolo * head = *temp;
        if(*temp == NULL)
        {
            *temp = aux;
            // aux->proximo = NULL;
            printf("entrou if\n");
        }
        else
        {

            printf("entrou else\n");
            Simbolo * aux2 = *temp;
            while(aux2->proximo != NULL)
            {
                aux2 = aux2->proximo;
            }
            aux2->proximo = aux;
        }
    } else {
        printf("Ja esta na tabela de simbolos (%s)", nome);   
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

void InsereTabsSaida(Saida ** temp, int tabs , int linha){

    int i;

    for ( i = 0 ; i < tabs ; i++ )
        InsereNaSaida(&saida, "\t" , linha );

}

void Imprime(Saida * temp)
{

    if ( erro == 0){

        Saida * aux = temp;
        while(aux != NULL)
        {
            fprintf(fp, "%s", aux->string );
            aux= aux->proximo;    
        }
    }else{


        fprintf(fp, "##\n## SYNTAX ERROR\n##\n");
    }
}
