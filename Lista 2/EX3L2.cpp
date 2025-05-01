#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("o numero e par.\n");
    
    } else {
        printf("o numero e impar.\n");
    }
    getchar();
    return(0);
}
