#include <stdio.h>
#include <stdlib.h>

int potencia(int n){
  int potencia = 1;
  for (int i = 0; i < n; i++) {
    potencia = potencia * 2;
  }
  return potencia;
}

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  printf("%d\n", potencia(x));
  return 0;
}
