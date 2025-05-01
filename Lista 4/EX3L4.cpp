#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &a, &b);

    if(a>b){
        printf("%d e maior", a);
    }
    else if(b>a){
        printf("%d e maior", b);
    }
    else if(a==b){
        printf("Esses numeros sao iguais");
    }
    getchar();
    return 0;
}