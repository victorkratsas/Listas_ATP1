#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand (time(NULL));
    printf("Numero aleatorio: %d\n", 2 + rand() % 11);
    getchar();
    return 0;
}
