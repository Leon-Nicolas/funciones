#include <stdio.h>
#include <stdlib.h>

int contar(char *palabra){
  int largo = 0;
  for (int i = 0; palabra[i] != 0; i++) {
    largo = i + 1;
  }
  return largo;
}

int main(int argc, char *argv[]) {
  char* a = argv[1];
  printf("%d\n", contar(a));

  return 0;
}
