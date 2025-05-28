#include <stdio.h>
#include <stdlib.h>


int pertence(int x, int T, int *v){
    for(int i = 0; i < T; i++){
        if(v[i] == x)  
            return 1; 
    }
    return 0;  
}

int main(){
    int vet[5] = {1, 2, 3, 4, 5};
    int x;
    
    printf("Digite um elemento para verificar se pertence ao vetor: ");
    scanf("%d", &x);
    
    if (pertence(x, 5, vet))
        printf("O elemento %d esta presente no vetor\n", x);
    else 
        printf("O elemento %d nao esta presente no vetor\n", x);
    
    system("pause");
    return 0;
}