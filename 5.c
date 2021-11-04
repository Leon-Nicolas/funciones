#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void raices(double a, double b, double c){
  double raiz1  = (-b + sqrt(b*b -4*a*c))/2*a;
  double raiz2  = (-b - sqrt(b*b -4*a*c))/2*a;
  if (b*b -4*a*c >= 0 || 2*a != 0) {
    printf("%.2f %.2f\n", raiz1, raiz2);
  }else{printf("NAN\n");}
}

int main(int argc, char const *argv[]) {
  double x = atof(argv[1]);
  double y = atof(argv[2]);
  double z = atof(argv[3]);
  raices(x, y, z);

  return 0;
}
