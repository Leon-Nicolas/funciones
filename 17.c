#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int producto(int n){
  srand(time(NULL));
  int a[n];
  int b[n];
  int suma;
  int res;
  for (size_t i = 0; i < n; i++) {
    int ran = rand() % 10 + 1;
    a[i] = ran;
  }
  for (size_t i = 0; i < n; i++) {
    int ran = rand() % 10 + 1;
    b[i] = ran;
  }
  for (int i = 0; i < n; i++) {
    suma = a[i] * b[i];
    res = res + suma;
    printf("%d * %d ", a[i], b[i]);
  }
  printf("\n");
  return res;
}


int main(int argc, char const *argv[]) {
  int x = atoi(argv[1]);
  printf("%d\n", producto(x));
  return 0;
}
