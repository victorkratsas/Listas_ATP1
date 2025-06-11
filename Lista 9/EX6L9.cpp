#include <stdio.h>
#include <stdlib.h>

int** alocarMatriz(int linhas, int colunas){
    int **matriz = NULL;
    matriz = (int **)malloc(linhas * sizeof(int *));
    if(matriz == NULL)
        return NULL;

    for(int i = 0; i < linhas; i++){
        matriz[i] = NULL;
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if(matriz[i] == NULL)
            return NULL;
    }    
    return matriz;
}

int main(){
    int linhas, colunas;
    int **matriz;

    printf("Insira o numero de linhas:\n");
    scanf("%d", &linhas);

    printf("Insira o numero de colunas:\n");
    scanf("%d", &colunas);

    matriz = alocarMatriz(linhas, colunas);
}