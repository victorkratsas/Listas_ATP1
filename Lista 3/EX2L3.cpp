#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i, primo = 1;
    printf("Entrada: ");
    scanf("%d", &num);
    if (num <= 1) {
        primo = 0; // 0 e 1 nao sao primos
    } else {
        for (i = 2; i <= num / 2; i++) { //Verificar se existe algum outro numero que possa dividir alem de 1 e num
            if (num % i == 0) { //Se num for divisivel por i e tiver resto zero quebra a definicao de numero primo
                primo = 0; //Primo vai receber zero e vai parar a operacao
                break;
            }
        }
    }

    if (primo) {
        printf("E Primo \n");
    } else {
        printf("Nao e Primo \n");
    }
    getchar();
    return 0;
}