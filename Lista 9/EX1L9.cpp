#include <stdio.h>
#include <stdlib.h>

void soma_matrizes(int A[3][3], int B[3][3], int C[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main(){
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matriz2[3][3] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };
    int matriz3[3][3];

    soma_matrizes(matriz1, matriz2, matriz3); 
    
    for(int m = 0; m < 3; m++){
        for(int n = 0; n < 3; n++){
            printf("%d ", matriz3[m][n]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}