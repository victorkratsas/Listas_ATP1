#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    float nota_exercicios;
    float prova1;
    float prova2;
} Aluno;

float calcular_media_final(Aluno a) {
    float media_provas = (a.prova1 * 4 + a.prova2 * 6) / 10.0;
    float media_final = (0.20 * a.nota_exercicios) + (0.80 * media_provas);
    return media_final;
}

typedef struct no_aluno {
    Aluno dados_aluno;
    struct no_aluno *proximo;
} NoAluno;

NoAluno* iniciar_lista_alunos() {
    NoAluno *lista = (NoAluno*)malloc(sizeof(NoAluno));
    if (lista == NULL) {
        printf("Erro de alocacao de memoria para a lista!\n");
        return NULL;
    }
    lista->proximo = NULL;
    return lista;
}

void adicionar_aluno(NoAluno *lista, Aluno novo_aluno) {
    NoAluno *novo_no = (NoAluno*)malloc(sizeof(NoAluno));
    if (novo_no == NULL) {
        printf("Erro de alocacao de memoria para o aluno!\n");
        return;
    }
    novo_no->dados_aluno = novo_aluno;
    novo_no->proximo = NULL;

    NoAluno *atual = lista;
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }
    atual->proximo = novo_no;
}

void calcular_e_imprimir_medias(NoAluno *lista) {
    if (lista->proximo == NULL) {
        printf("Lista de alunos vazia.\n");
        return;
    }
    NoAluno *atual = lista->proximo;
    printf("Medias Finais dos Alunos: \n");
    while (atual != NULL) {
        float media = calcular_media_final(atual->dados_aluno);
        printf("Aluno: %s - Media: %.2f\n", atual->dados_aluno.nome, media);
        atual = atual->proximo;
    }
}

void liberar_lista_alunos(NoAluno *lista) {
    NoAluno *atual = lista;
    while (atual != NULL) {
        NoAluno *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    printf("Lista de alunos liberada.\n");
}

int main() {
    NoAluno *listaDeAlunos = iniciar_lista_alunos();
    if (listaDeAlunos == NULL) {
        return 1;
    }

    Aluno a1 = {"Ana", 7.0, 8.0, 8.5};
    adicionar_aluno(listaDeAlunos, a1);

    Aluno a2 = {"Carlos", 5.0, 6.0, 6.5};
    adicionar_aluno(listaDeAlunos, a2);

    Aluno a3 = {"Victor", 9.0, 7.0, 9.5};
    adicionar_aluno(listaDeAlunos, a3);

    calcular_e_imprimir_medias(listaDeAlunos);

    liberar_lista_alunos(listaDeAlunos);

    getchar();
    return 0;
}