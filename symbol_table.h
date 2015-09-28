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

int procura_tabela_simbolos(char *simbolo){
    
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
