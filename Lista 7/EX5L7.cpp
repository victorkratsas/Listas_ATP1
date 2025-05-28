#include <stdio.h>
#include <stdlib.h>


void inverter(int *v, int tamanho) {
    int *inicio = v;              
    int *fim = v + tamanho - 1;  
    int temp;

    
    while (inicio < fim) {
        temp = *inicio;   
        *inicio = *fim;   
        *fim = temp;      

        inicio++;  
        fim--;    
    }
}

int main() {
    int vetor[5] = {10, 50, 27, 33, 12};

    printf("Vetor original:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);  
    }
    printf("\n");

    inverter(vetor, 5); 

    printf("Vetor invertido:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);  
    }
    printf("\n");

    getchar(); 
    return 0;
}