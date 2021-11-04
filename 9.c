#include <stdio.h>
#include <stdlib.h>
#define n 2

int cambio(){
  int array[n] = {5, 3};
  for (int i = 0; i < n/2; i++) {
    int temp = array[i]; //temp = 5 | temp = 3
    array[i] = array[n-i-1]; // = 3 | = 5
    array[n-i-1] = temp; // = 5 | = 3
  }
  printf("%d\n", array[0]);
  printf("%d\n", array[1]);
}

int main(void) {
  int a[] = {1,2,3,4};
  cambio();
  return 0;
}
