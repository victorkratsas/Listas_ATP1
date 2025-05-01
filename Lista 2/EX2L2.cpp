#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;
    printf("Digite um numero para descobrir seu valor absoluto: ");
    scanf("%d", &numero);
    
    
    if(numero < 0){
       numero = -numero;
    }
    printf("%d", numero);
    getchar();
    return(0);
}