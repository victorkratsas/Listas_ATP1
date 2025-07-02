#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    float preco;
    int qtdVendida;
} Produto;

typedef struct {
    Produto* itens;
    int totalItens;
} Menu;

void inicializarMenu(Menu* cardapio, Produto produtos[], int numProdutos) {
    cardapio->itens = produtos;
    cardapio->totalItens = numProdutos;
}

void exibir_produtos_do_menu(Menu *menu) {
    printf("Cardapio\n");
    if (menu->totalItens == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    printf("ID\tNome\t\tPreco\tQtde\n");
    for (int i = 0; i < menu->totalItens; i++) {
        printf("%d\t%s\t\t%.2f\t%d\n",
               i + 1,
               menu->itens[i].nome,
               menu->itens[i].preco,
               menu->itens[i].qtdVendida);
    }
}

int main() {
    Produto produtos_disponiveis[] = {
        {"Hamburguer", 15.99, 0},
        {"Batata Frita", 8.50, 0},
        {"Refrigerante", 6.00, 0}
    };
    int num_produtos = sizeof(produtos_disponiveis) / sizeof(Produto);

    Menu meu_cardapio;
    inicializarMenu(&meu_cardapio, produtos_disponiveis, num_produtos);

    exibir_produtos_do_menu(&meu_cardapio);

    printf("\nEscolha uma opcao (0 para finalizar):\n");
    printf("1. Comprar Hamburguer\n");
    printf("2. Comprar Batata Frita\n");
    printf("3. Comprar Refrigerante\n");

    int opcaoItem, quantidade;
    do {
        printf("Digite o numero do item (0 para finalizar): ");
        scanf("%d", &opcaoItem);

        if (opcaoItem > 0 && opcaoItem <= meu_cardapio.totalItens) {
            printf("Quantidade de %s: ", meu_cardapio.itens[opcaoItem - 1].nome);
            scanf("%d", &quantidade);
            meu_cardapio.itens[opcaoItem - 1].qtdVendida += quantidade;
        } else if (opcaoItem != 0) {
            printf("Item invalido.\n");
        }
    } while (opcaoItem != 0);

    FILE *boleto = fopen("boleto.txt", "w");
    if (boleto == NULL) {
        printf("Erro ao criar o arquivo\n");
        return 1;
    }

    float valorTotal = 0;
    fprintf(boleto, "BOLETO:\n");
    for (int i = 0; i < meu_cardapio.totalItens; i++) {
        if (meu_cardapio.itens[i].qtdVendida > 0) {
            float subtotal = meu_cardapio.itens[i].qtdVendida * meu_cardapio.itens[i].preco;
            fprintf(boleto, "%s x%d - R$ %.2f\n", meu_cardapio.itens[i].nome, meu_cardapio.itens[i].qtdVendida, subtotal);
            valorTotal += subtotal;
        }
    }
    fprintf(boleto, "\n");
    fprintf(boleto, "TOTAL: R$ %.2f\n", valorTotal);
    fprintf(boleto, "\n");

    fclose(boleto);

    printf("\nBoleto gerado em 'boleto.txt'.\n");

    getchar();
    return 0;
}