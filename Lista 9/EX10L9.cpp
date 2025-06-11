#include <stdio.h>
#include <stdlib.h>

// Aloca uma matriz
int** alocarMatriz(int linhas, int colunas) {
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL)
        return NULL;

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            for (int j = 0; j < i; j++)
                free(matriz[j]);
            free(matriz);
            return NULL;
        }
    }
    return matriz;
}

// Preenche uma matriz com entrada do usuário
void preencherMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Imprime uma matriz
void imprimirMatriz(int **matriz, int linhas, int colunas) {
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Libera uma matriz
void liberarMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

// Multiplica duas matrizes
int** multiplicarMatrizes(int **A, int linhasA, int colunasA, int **B, int linhasB, int colunasB) {
    if (colunasA != linhasB)
        return NULL;

    int **C = alocarMatriz(linhasA, colunasB);
    if (C == NULL)
        return NULL;

    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colunasA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

int main() {
    int linhasA, colunasA, linhasB, colunasB;
    int **A, **B, **C;

    printf("MATRIZ A:\n");
    printf("digite o numero de linhas: ");
    scanf("%d", &linhasA);
    printf("digite o numero de colunas: ");
    scanf("%d", &colunasA);

    A = alocarMatriz(linhasA, colunasA);
    if (A == NULL) return 1;
    preencherMatriz(A, linhasA, colunasA);

    printf("\nMATRIZ B:\n");
    printf("digite o numero de linhas: ");
    scanf("%d", &linhasB);
    printf("digite o numero de colunas: ");
    scanf("%d", &colunasB);

    B = alocarMatriz(linhasB, colunasB);
    if (B == NULL) {
        liberarMatriz(A, linhasA);
        return 1;
    }
    preencherMatriz(B, linhasB, colunasB);

    // Verifica se a multiplicação é possível
    C = multiplicarMatrizes(A, linhasA, colunasA, B, linhasB, colunasB);
    if (C == NULL) {
        printf("\nnao e possivel multiplicar as matrizes. dimensoes incompativeis.\n");
    } else {
        printf("\nresultado da multiplicacao (Matriz C):\n");
        imprimirMatriz(C, linhasA, colunasB);
        liberarMatriz(C, linhasA);
    }

    liberarMatriz(A, linhasA);
    liberarMatriz(B, linhasB);

    return 0;
}