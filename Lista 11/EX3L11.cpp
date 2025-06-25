#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_cartela(FILE *arquivo) {
    for (int i = 0; i < 5; i++) {
        fprintf(arquivo, "%d, ", (rand() % 15) + 1);
        fprintf(arquivo, "%d, ", (rand() % 15) + 16);

        if (i == 2)
            fprintf(arquivo, "FREE, ");
        else
            fprintf(arquivo, "%d, ", (rand() % 15) + 31);

        fprintf(arquivo, "%d, ", (rand() % 15) + 46);
        fprintf(arquivo, "%d\n", (rand() % 15) + 61);
    }
}

int main() {
    srand(time(NULL));

    FILE *arquivo = fopen("cartelas.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    int qtd_cartelas;
    printf("Digite a quantidade de cartelas: ");
    scanf("%d", &qtd_cartelas);

    fprintf(arquivo, "B, I, N, G, O\n");

    for (int i = 0; i < qtd_cartelas; i++) {
        gerar_cartela(arquivo);
    }

    fclose(arquivo);
    printf("Cartelas geradas em 'cartelas.csv'.\n");

    return 0;
}