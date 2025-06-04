#include <stdio.h>
#include <stdlib.h>

int main() {
    int *matriz = NULL;
    int l = 3, c = 3;

    matriz = (int *) calloc(l * c, sizeof(int));

    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Matriz %dx%d:\n", l, c);
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[i * c + j]);
        }
        printf("\n");
    }

    free(matriz);

    system("pause");
    return 0;
}
