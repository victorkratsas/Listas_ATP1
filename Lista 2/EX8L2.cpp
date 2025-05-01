#include <stdio.h>
#include <stdlib.h>

int main(){
    float l1, l2, l3, a, b, c;
    printf("Digite os lados do triangulo: ");
    scanf("%f""%f""%f", &l1, &l2, &l3);
    //Determinar o maior lado para substituir na hipotenusa "c"
    if(l1>l2&&l1>l3){
        c = l1;
        a = l2;
        b = l3;
    }
    else if(l2>l1&&l2>l3){
        c = l2;
        a = l1;
        b = l3;
    }
    else{
        c = l3;
        a = l1;
        b = l2;
    }
    //Verificar se e um triangulo e se o Teorema de Pitagoras e valido 
    if(a+b>c&&c*c==a*a+b*b){
        printf("O triangulo e retangulo");
    }
    else if (a+b>c){
        printf("Nao e um triangulo retangulo");
    }
    else{
        printf("Valores invalidos");
    }
    getchar();
    return(0);
}