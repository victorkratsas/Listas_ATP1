#include <stdio.h>
#include <stdlib.h>

int main() {
    int* v = NULL;
    int x = 0, tam = 0;

    v = (int*) malloc(1 * sizeof(int));

    if(v == NULL) return 1;

    while(x != -1){
        printf("Digite o valor %d do vetor (-1 para parar):\n", tam + 1);
        scanf("%d", &x);
        getchar();
        if(x != -1){
            tam++;
            realloc(v, tam * sizeof(int));
            v[tam - 1] = x;
        }
    }
    printf("Valores do vetor: ");
    for(int i = 0; i < tam; i++) printf("%d ", v[i]);
    printf("\n");

    free(v);
    
    system("pause");
    return 0;
}