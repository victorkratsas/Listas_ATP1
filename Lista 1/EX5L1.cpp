#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d, e, f;
    printf("Digite o valor A e o valor B: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    printf("A soma dos valores é: %d\n", c);
    printf("A subtracao dos valores é: %d\n", d);
    printf("A multiplicacao dos valores é: %d\n", e);
    printf("A divisao dos valores é: %d\n", f);
    getchar();
    return(0);
    
}
