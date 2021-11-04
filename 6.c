#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stdlibEsCaca(int a, int b){
  srand(time(NULL));
  int ran = rand() % (b - a + 1) + a;
  printf("%d\n", ran);
}

int main(int argc, char *argv[]) {
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    stdlibEsCaca(x, y);
  return 0;
}
