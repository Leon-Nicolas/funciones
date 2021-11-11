#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  printf("%d\n", factorial(a));

  return 0;
}
