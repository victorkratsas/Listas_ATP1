#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double arredonda(double valor, int casas = 0){
    int fator = 1;
    for(int i = 0; i < casas; i++){
        fator *= 10;
    }
    return((double)(int)(valor * fator + 0.5)/(double) fator); 
}

int main(int argc, char *argv[]){
    printf("%f\n", arredonda(69696.6564f, 3));
    printf("%f\n", arredonda(69696.6564f));
    getchar();
    return 0;
}