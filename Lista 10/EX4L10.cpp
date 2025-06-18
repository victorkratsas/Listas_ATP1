#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Este programa aloca um vetor de inteiro dinamicamente e depois o realoca de modo que restem apenas a metade dos itens.\n");
    printf("Digite o tamanho do vetor: ");
    int tamanho;
    scanf("%d", &tamanho);
    int *v = (int*) malloc(tamanho * sizeof(int));
    if(v == NULL) {
        printf("Erro ao alocar o vetor;");
        free(v);
        return 1;
    }
    else {
        for(int i = 0; i < tamanho; i++) {
            printf("Digite o %d° elemento do vetor: ", i+1);
            scanf("%d", &v[i]);
        }
        printf("Original: ");
        for(int i = 0; i < tamanho; i++){
            printf("%d ", v[i]);
        }
        int metadeT = (int) tamanho / 2;
        v = (int*) realloc(v, metadeT * sizeof(int));
        if(v != NULL) {
            printf("\nMetade: ");
            for(int i = 0; i < metadeT; i++){
                printf("%d ", v[i]);
            }
        }
        else {
            printf("Erro ao alocar o vetor;");
            free(v);
            return 1;
        }
    }
    getchar();
    free(v);
    return 0;
}