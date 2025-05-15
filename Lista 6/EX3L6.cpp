#include <stdio.h>
#include <stdlib.h>


int contador(int n) {
  if (n < 10) {
    return(1);
  }
  return(1 + contador(n / 10));
}


int main() {
  int n;
  printf("N: ");
  scanf("%d", &n);

  printf("%d\n", contador(n));

  getchar();
  return(0);
}