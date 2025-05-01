#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;
    printf("digite um numero para saber se e positivo ou negativo: ");
    scanf("%d", &numero);
    if(numero > 0){
        printf("positivo");
    }
    else if(numero < 0){
        printf("negativo");
    }
    getchar();
    return(0);
}

