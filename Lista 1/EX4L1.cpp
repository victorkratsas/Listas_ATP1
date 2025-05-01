#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    c = a;
    d = b;
    printf("Com a troca dos valores o primeiro valor vira %d e o segundo %d", d, c);
    getchar();
    return(0);
}