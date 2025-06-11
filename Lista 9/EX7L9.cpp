#include <stdio.h>
#include <stdlib.h>

void liberarMatriz(int** matriz, int linhas){
    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}