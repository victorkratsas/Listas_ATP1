#include <stdio.h>
#include <stdlib.h>

void transposta(int A[3][3], int At[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            At[i][j] = A[j][i];
        }
    }
}

int main(){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrizt[3][3];

    transposta(matriz, matrizt); 
    
    for(int m = 0; m < 3; m++){
        for(int n = 0; n < 3; n++){
            printf("%d ", matrizt[m][n]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}