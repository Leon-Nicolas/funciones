#include <stdio.h>
#include <stdlib.h>

int funcion(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("%d %d\n", a, b);
}

int main(int argc, char const *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  funcion(x, y);
  return 0;
}
