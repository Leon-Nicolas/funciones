#include <stdio.h>
#include <stdlib.h>

int funcion(int n){
  int array[n];
  for (int i = 0; i < n; i++) {
    array[i] = i+1;
    printf("%d\n", array[i]);
  }
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  funcion(a);
  return 0;
}
