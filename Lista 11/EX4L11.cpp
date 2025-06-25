#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo = fopen("matriz.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo matriz.txt\n");
        return 1;
    }

    int n;
    fscanf(arquivo, "%d", &n);

    int matriz1[n][n], matriz2[n][n], soma[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(arquivo, "%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(arquivo, "%d", &matriz2[i][j]);
        }
    }

    fclose(arquivo);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("Matriz soma:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}