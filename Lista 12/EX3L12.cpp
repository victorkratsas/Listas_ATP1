#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int linhas;
    int colunas;
    int **dados;
} Matriz;

Matriz* criar_matriz(int num_linhas, int num_colunas) {
    Matriz *nova_matriz = (Matriz*)malloc(sizeof(Matriz));
    if (nova_matriz == NULL) {
        printf("Erro de alocacao de memoria para a struct Matriz!\n");
        return NULL;
    }

    nova_matriz->linhas = num_linhas;
    nova_matriz->colunas = num_colunas;

    nova_matriz->dados = (int**)malloc(num_linhas * sizeof(int *));
    if (nova_matriz->dados == NULL) {
        printf("Erro de alocacao de memoria para as linhas da matriz!\n");
        free(nova_matriz);
        return NULL;
    }

    for (int i = 0; i < num_linhas; i++) {
        nova_matriz->dados[i] = (int*)malloc(num_colunas * sizeof(int));
        if (nova_matriz->dados[i] == NULL) {
            printf("Erro de alocacao de memoria para a coluna %d!\n", i);
            for (int k = 0; k < i; k++) {
                free(nova_matriz->dados[k]);
            }
            free(nova_matriz->dados);
            free(nova_matriz);
            return NULL;
        }
        for (int j = 0; j < num_colunas; j++) {
            nova_matriz->dados[i][j] = 0;
        }
    }
    printf("Matriz de %dx%d criada com sucesso.\n", num_linhas, num_colunas);
    return nova_matriz;
}

void imprimir_matriz(Matriz *m) {
    if (m == NULL || m->dados == NULL) {
        printf("Matriz invalida ou nao alocada.\n");
        return;
    }
    printf("Conteudo da Matriz (%dx%d)\n", m->linhas, m->colunas);
    for (int i = 0; i < m->linhas; i++) {
        for (int j = 0; j < m->colunas; j++) {
            printf("%d\t", m->dados[i][j]);
        }
        printf("\n");
    }
}

void liberar_matriz(Matriz *m) {
    if (m == NULL) return;

    if (m->dados != NULL) {
        for (int i = 0; i < m->linhas; i++) {
            free(m->dados[i]);
        }
        free(m->dados);
    }
    free(m);
    printf("Matriz liberada.\n");
}

int main() {
    Matriz *minha_matriz = criar_matriz(3, 4);

    if (minha_matriz != NULL) {
        minha_matriz->dados[0][0] = 1;
        minha_matriz->dados[1][2] = 5;
        minha_matriz->dados[2][3] = 9;

        imprimir_matriz(minha_matriz);

        liberar_matriz(minha_matriz);
    } else {
        return 1;
    }

    getchar();
    return 0;
}