#include <stdlib.h>
#include <stdio.h>

int main(){
    int A[5] = {0,0,0,0,0};
    int B[5] = {1,1,1,1,1};
    for (int i = 0; i < 5; i++){
        printf("%d %d ", A[i], B[i]);
    }
    getchar();
    return 0;
}