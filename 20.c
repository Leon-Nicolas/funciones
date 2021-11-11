#include <stdio.h>
#include <stdlib.h>


int funcion(int n){
  int array[5] = {0,1,2,3,4};
  for (int i = 0; i < 5; i++) {
    if (n == array[i]) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");

}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  funcion(a);
  return 0;
}
