#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3, numx;
    printf("Digite tres numeros inteiros: ");
    scanf("%d""%d""%d", &num1,&num2,&num3);
    
    if(num1>num2){
        numx = num1;
        num1 = num2;
        num2 = numx;
    }
    if (num1>num3){
        numx = num1;
        num1 = num3;
        num3 = numx;
    }
    if (num2>num3){
    numx = num2;
    num2 = num3;
    num3 = numx;
    }
    printf("Numeros ordenados: %d %d %d\n", num1,num2,num3);
    getchar();
    return(0);
}
