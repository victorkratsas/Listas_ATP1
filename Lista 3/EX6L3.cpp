#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, altura;

    printf("Altura do triangulo: ");
    scanf("%d", &altura);

    for (i = 1; i <= altura; i++) {//Valor de i representa a linha do triângulo
        for (j = 1; j <= i; j++) {//Valor de j representa a quantidade de asteriscos
            printf("*");
        }
        printf("\n");
    }

    getchar();
    return 0;
}