#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    c = a + b;
    printf("A soma dos algarismos é %f,", c);
    getchar();
    return(0);
}