#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int funcion(int n){
  srand(time(NULL));
  int array[n];
  for (int i = 0; i < n; i++) {
    int ran = rand() % 101;
    array[i] = ran;
    printf("%d\n", array[i]);
  }
  printf("\n");
  int min = 99999999;
  for (int i = 0; i < n; i++) {
    if (min > array[i]) {
      min = array[i];
    }
  }
  printf("El minimo es: %d\n", min);
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  funcion(a);
  return 0;
}
