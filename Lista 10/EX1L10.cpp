#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main(){
    printf("%d", count);
    if(count < 10) {
        count++;
        main();
    }
    else getchar();
    return 0;
}