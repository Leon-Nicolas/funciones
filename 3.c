#include <stdio.h>
#include <stdlib.h>

int funcion(int x, int y, int z){
  if (x == y && y == z) {
    return 1;
  }else{return 0;}
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  printf("%d\n", funcion(a, b, c));
  return 0;
}
