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

int procura_tabela_simbolos(char nomesimbolo[MAX], int escopo){
    
    if(tabela_simbolos == NULL){
        // printf("vazio!\n");
        return 0; // nao esta na tabela de simbolos
    }else{

        // printf("nao vazio1\n");
        Simbolo *aux = tabela_simbolos;
        while( aux != NULL)
        {
            // printf("hue\n");
            if ( strcmp(nomesimbolo, aux->nome) == 0 ){

                if ( aux->nivelEscopo == escopo )
                    return ENCONTRADO;//esta na tabela de simbolos
            }
            aux = aux->proximo;
        }
        return NAO_ENCONTRADO; //simbolo nao foi encontrado
    }

}

int verifica_usabilidade(char nomesimbolo[MAX], int escopo){
    
    if(tabela_simbolos == NULL){
        // printf("vazio!\n");
        return 0; // nao esta na tabela de simbolos
    }else{

        // printf("nao vazio1\n");
        Simbolo *aux = tabela_simbolos;
        while( aux != NULL)
        {
            // printf("hue\n");
            if ( strcmp(nomesimbolo, aux->nome) == 0 ){

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

void InserirSimbolo(Simbolo ** temp, char nome[MAX], int escopo)
{
    if ( !procura_tabela_simbolos(nome, escopo) ){//se nao esta na tabela, insere o novo simbolo
        Simbolo * aux = AddSimbolo(nome , escopo );

        if(*temp == NULL)
        {
            *temp = aux;
            aux->proximo = NULL;
            // printf("entrou if\n");
        }
        else
        {

            // printf("entrou else\n");
            Simbolo * aux2 = *temp;
            while(aux2->proximo != NULL)
            {
                aux2 = aux2->proximo;
            }
            aux2->proximo = aux;
        }
    } else {
        printf("(%s) => ", nome); 
        yyerror("Variavel já declarada.\n");  
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

void InsereTabsSaida(Saida ** temp, int tabs ){

    int i;

    for ( i = 0 ; i < tabs ; i++ )
        InsereNaSaida(&saida, "\t" , tabs );

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
