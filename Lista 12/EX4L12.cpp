#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FATOR_DECIMAL 10000.0f

typedef struct {
    long int valor_inteiro;
} Decimal;

Decimal criar_decimal(float num) {
    Decimal d;
    d.valor_inteiro = (long int)roundf(num * FATOR_DECIMAL);
    return d;
}

Decimal somar_decimais(Decimal d1, Decimal d2) {
    Decimal resultado;
    resultado.valor_inteiro = d1.valor_inteiro + d2.valor_inteiro;
    return resultado;
}

Decimal subtrair_decimais(Decimal d1, Decimal d2) {
    Decimal resultado;
    resultado.valor_inteiro = d1.valor_inteiro - d2.valor_inteiro;
    return resultado;
}

void imprimir_decimal(Decimal d) {
    printf("%.4f", d.valor_inteiro / FATOR_DECIMAL);
}

int main() {
    Decimal num1 = criar_decimal(123.4567f);
    Decimal num2 = criar_decimal(50.1230f);
    Decimal num3 = criar_decimal(0.0001f);
    Decimal num4 = criar_decimal(10.0000f);

    printf("Numero 1: "); imprimir_decimal(num1); printf("\n");
    printf("Numero 2: "); imprimir_decimal(num2); printf("\n");
    printf("Numero 3: "); imprimir_decimal(num3); printf("\n");
    printf("Numero 4: "); imprimir_decimal(num4); printf("\n");

    Decimal soma = somar_decimais(num1, num2);
    printf("Soma (1 + 2): "); imprimir_decimal(soma); printf("\n");

    Decimal subtracao = subtrair_decimais(num1, num2);
    printf("Subtracao (1 - 2): "); imprimir_decimal(subtracao); printf("\n");

    Decimal soma_pequena = somar_decimais(num3, num4);
    printf("Soma (3 + 4): "); imprimir_decimal(soma_pequena); printf("\n");

    getchar();
    return 0;
}