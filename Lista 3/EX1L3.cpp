#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, fatorial = 1;
    printf("Escolha um numero para saber o seu fatorial: ");
    scanf("%d", &i);
    while (i > 0){
        fatorial = fatorial * i; //Calculo da sequencia fatorial
        i--;//Sempre subtraindo 1 de i e multiplicando para formar a sequencia fatorial
    }
    printf("Fatorial: %d\n", fatorial);
    getchar();
    return(0);
}