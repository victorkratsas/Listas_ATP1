#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = NULL;
    int tam;

    printf("Digite quantas posicoes deseja no vetor: ");
    scanf("%d", &tam);

    v = (int *) malloc(tam * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocacao.\n");
        return 1;
    }

    for (int i = 0; i < tam; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Valores armazenados:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);

    system("pause");
    return 0;
}
