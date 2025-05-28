#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100];
    printf("Digite uma palavra: ");
    scanf("%s", nome);
    printf("%s comeca com '%c'\n", nome, nome[0]);
    getchar();
    return 0;
}
