#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c;
    printf("Digite os lados do triangulo: ");
    scanf("%f""%f""%f", &a, &b, &c);
    //Verificar se e um triangulo valido
    if(a+b>c&&a+c>b&&b+c>a){
        //Verificar o tipo de triangulo
        if(a==b&&b==c){
            printf("Triangulo equilatero");
        }
        else if (a==b||a==c||b==c){
            printf("Triangulo isosceles");
        }
        else{
            printf("Triangulo escaleno");
        }
    }
    else{
        printf("Invalido");
    }
    getchar();
    return(0);
}