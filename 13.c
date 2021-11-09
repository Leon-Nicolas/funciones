#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
  int a = 1;
  for (size_t i = 1; i <= n; i++) {
    a = a * i;
  }
  return a;
}

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  printf("%d\n", factorial(x));
  return 0;
}
