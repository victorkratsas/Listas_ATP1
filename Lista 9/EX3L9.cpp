#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero, linha = -1, coluna = -1;

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Insira um numero:\n");
    scanf("%d", &numero);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] == numero){
                linha = i;
                coluna = j;
            }
        }
    }

    if(linha != -1 && coluna != -1)
        printf("O numero informado esta na posicao (%d,%d) da matriz.", linha, coluna);
    else
        printf("O numero informado nao esta presente na matriz.");

    getchar();
    return 0;
}