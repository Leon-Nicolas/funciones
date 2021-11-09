#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char *palindromo(char *palabra){
  bool EsPalindromo=true;
  int largo;

  for (int i = 0; palabra[i] != 0; i++) {
    largo = i+1;
  }

  for (int i = 0; i < largo/2 ; i++) {
    if (!(palabra[i] == palabra[largo-i-1])) {
      EsPalindromo=false;
    }
  }

  if (EsPalindromo) {
    printf("Es palindromo\n");
  }
}


int main(int argc, char *argv[]) {
  palindromo(argv[1]);
  return 0;
}
