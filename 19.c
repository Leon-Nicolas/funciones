#include <stdio.h>
#include <stdlib.h>

int funcion(int n){
  if (n == 0) {
    return 0;
  }

  if (n == 0 || n == 1) {
    return 1;
  }else return (funcion(n-1) + funcion(n-2));

}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  printf("%d\n", funcion(a));
  return 0;
}
