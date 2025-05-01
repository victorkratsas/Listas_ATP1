#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    int num1, num2;
    int resultado;

    do {
        printf("Escolha uma operacao:\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        printf("Digite sua opcao: "); //Entrada da escolha 
        scanf("%d", &opcao);

        if (opcao == 0) { //Para parar o programa
            printf("Encerrando a calculadora.\n");
            break;
        }

        printf("Digite o primeiro numero: ");//Entrada dos numeros
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);

        if (opcao == 1) {//Escolha da adicao
            resultado = num1 + num2;
            printf("Resultado da soma: %d\n", resultado);
        } else if (opcao == 2) {//Escolha da subtracao
            resultado = num1 - num2;
            printf("Resultado da subtracao: %d\n", resultado);
        } else if (opcao == 3) {//Escolha da multiplicacao
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %d\n", resultado);
        } else if (opcao == 4) { //Escolha da divisao
            if (num2 == 0) { //"Nao dividir por zero"
                printf("Erro: divisao por zero nao e permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado da divisao inteira: %d\n", resultado);
            }
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (1);//Repeticao da operacao

    getchar();
    return 0;
}