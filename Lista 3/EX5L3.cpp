#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int a = 0, b = 1, proximo;

    printf("Sequencia de Fibonacci ate um valor maximo (n): "); //Imprimir todos os termos ate o numero max. escolhido
    scanf("%d", &n);

    printf("Sequencia de Fibonacci ate %d:\n", n);

    while (a <= n) {//Enquanto a for menor que o numero escolhido, o programa continua imprimindo
        printf("%d ", a);
        proximo = a + b;//Calculo do proximo termo
        a = b;
        b = proximo;
    }

    getchar();
    return 0;
}