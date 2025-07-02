#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct {
    char nome[100];
    float nota_exercicios;
    float prova1;
    float prova2;
} Aluno;

float media_final(Aluno a) {
    float m_provas = (a.prova1 * 4 + a.prova2 * 6) / 10.0;
    float media_final = (0.20 * a.nota_exercicios) + (0.80 * m_provas);
    return media_final;
}

int main() {
    Aluno aluno1 = {"Victpr", 8.0, 7.5, 9.0}; 
    float media = media_final(aluno1);
    printf("Aluno: %s\n", aluno1.nome); 
    printf("Media Final: %.2f\n", media); 
    getchar(); 
    return 0;
}