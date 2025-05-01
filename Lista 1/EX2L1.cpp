#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    b = a + b;
    printf("A soma dos algarismos é %d,", b);
    getchar();
    return(0);
}