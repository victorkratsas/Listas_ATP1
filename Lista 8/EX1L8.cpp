#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v = NULL;
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (int *) malloc (tam * sizeof(int));
    if (v == NULL){
        printf("Erro de alocacao\n");
        return 1;
    }

    printf("Vetor: ");
    for (int i = 0; i < tam; i++){
        v[i] = i;
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);

    system("pause");
    return 0;
}