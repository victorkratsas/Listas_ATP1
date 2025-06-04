#include <stdio.h>
#include <stdlib.h>

int pares(int* v, int tam){
    int *vpares = NULL;
    int j = 0;
    vpares = (int *) malloc(tam * sizeof(int));

    if(vpares == NULL) return 1;

    printf("\n\nValores pares do seu vetor: ");
    for(int i = 0; i < tam; i++){    
        if(v[i] % 2 == 0){
            vpares[j] = v[i];
            j++;
        }
    }
    
    for(int i = 0; i < j; i++) printf("%d ", vpares[i]);
    printf("\n");

    free(vpares);
}

int main(){
    int* v = NULL;
    int tam;

    printf("Digite quantas posicoes deseja no vetor: ");
    scanf("%d", &tam);

    v = (int*) malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        printf("Digite o valor %d do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Valores do vetor: ");

    for(int i = 0; i < tam; i++) printf("%d ", v[i]);

    pares(v, tam);

    free(v);

    system("pause");
    return 0;
}