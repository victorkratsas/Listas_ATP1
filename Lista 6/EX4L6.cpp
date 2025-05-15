#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente) {
  if (expoente == 0) {
    return(1);
  }
  return(base * potencia(base, expoente - 1));
}

int main() {
  int base, expoente;
  
  printf("Base: ");
  scanf("%d", &base);

  printf("Expoente: ");
  scanf("%d", &expoente);

  printf("\n%d", potencia(base, expoente));

  getchar();
  return(0);
}