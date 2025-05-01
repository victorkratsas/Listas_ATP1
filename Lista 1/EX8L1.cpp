#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    area = M_PI * pow (raio,2);
    printf("A area do circulo e: %lf", area);
    getchar();
    return(0);
}