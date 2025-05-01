#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {// A sequencia precisa de ao menos um termo maior q zero
        printf("Digite um numero maior que zero.\n");
    } else {
        printf("Sequencia de Fibonacci com %d termo(s):\n", n);

        for (i = 1; i <= n; i++) {//Valor atual da sequencia
            printf("%d ", a);
            proximo = a + b;// Calcula a soma dos dois termos anteriores
            a = b;
            b = proximo;
        }

    }

    getchar();
    return 0;
}