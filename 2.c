#include <stdio.h>
#include <stdlib.h>

void saludar(char *saludo){
  printf("Hola, %s\n", saludo);
}

int main(int argc, char *argv[]) {
  saludar(argv[1]);
return 0;
}
