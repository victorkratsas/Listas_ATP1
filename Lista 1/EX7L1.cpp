#include <stdio.h>
#include <stdlib.h> 

int main(){
    double raio, area;
    const double pi = 3.141592653589793;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    area = pi * (raio * raio);
    printf("A area do circulo e: %lf", area);
    getchar();
    return(0);
}
