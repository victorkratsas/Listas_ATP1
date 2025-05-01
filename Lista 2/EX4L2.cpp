#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade, serviços;
    printf("Coloque a idade: ");
    scanf("%d", &idade);
    printf("Coloque o numero de serviços: ");
    scanf("%d", &serviços);
    if(idade >= 65 || serviços >= 30 || (idade >= 60 && serviços >= 25)){
        printf("Pode se aposentar!");

    } else {
        printf("Nao pode se aposentar!");
    }
    getchar();
    return(0);

}
