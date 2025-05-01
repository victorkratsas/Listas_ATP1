#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    c = a + b;
    printf("A soma dos algarismos é %d,", c);
    getchar();
    return(0);
}