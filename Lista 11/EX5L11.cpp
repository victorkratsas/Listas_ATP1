#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *menu = fopen("menu.txt", "r");
    if (menu == NULL) {
        printf("Erro ao abrir menu.txt\n");
        return 1;
    }

    int qtd_itens;
    fscanf(menu, "%d", &qtd_itens);

    char nomes[qtd_itens][50];
    float precos[qtd_itens];
    int quantidades[qtd_itens];

    for (int i = 0; i < qtd_itens; i++) {
        fscanf(menu, "%s %f", nomes[i], &precos[i]);
        quantidades[i] = 0;
    }

    fclose(menu);

    // Exibir menu
    printf("\n===== MENU =====\n");
    for (int i = 0; i < qtd_itens; i++) {
        printf("%d - %s (R$ %.2f)\n", i + 1, nomes[i], precos[i]);
    }
    printf("================\n");

    int escolha, qtd;
    do {
        printf("Digite o numero do item (0 para finalizar): ");
        scanf("%d", &escolha);

        if (escolha > 0 && escolha <= qtd_itens) {
            printf("Quantidade de %s: ", nomes[escolha - 1]);
            scanf("%d", &qtd);
            quantidades[escolha - 1] += qtd;
        } else if (escolha != 0) {
            printf("Item invalido.\n");
        }
    } while (escolha != 0);

    FILE *boleto = fopen("boleto.txt", "w");
    if (boleto == NULL) {
        printf("Erro ao criar boleto.txt\n");
        return 1;
    }

    float total = 0;
    fprintf(boleto, "======= BOLETO =======\n");
    for (int i = 0; i < qtd_itens; i++) {
        if (quantidades[i] > 0) {
            float subtotal = quantidades[i] * precos[i];
            fprintf(boleto, "%s x%d - R$ %.2f\n", nomes[i], quantidades[i], subtotal);
            total += subtotal;
        }
    }
    fprintf(boleto, "-----------------------\n");
    fprintf(boleto, "TOTAL: R$ %.2f\n", total);
    fprintf(boleto, "=======================\n");

    fclose(boleto);

    printf("\nBoleto gerado em 'boleto.txt'.\n");

    return 0;
}