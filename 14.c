#include <stdio.h>
#include <stdlib.h>

int euclides(int a, int b) {
    int temporal;
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int main(int argc, char  *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  printf("El MCD entre %d y %d es: %d\n", x, y, euclides(x, y));
  return 0;
}
