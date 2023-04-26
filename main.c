#include <stdio.h>
#include <math.h>

int main() {
  // *:MATH FUNCTIONS

  double A = sqrt(9);
  double B = pow(2, 4);

  int C = round(3.14);
  int D = ceil(3.14);
  int E = floor(3.99);

  double F = fabs(-100);
  double G = log(3);
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("%lf \n", A);
  printf("%lf \n", B);
  printf("%d \n", C);
  printf("%d \n", D);
  printf("%d \n", E);
  printf("%f \n", F);
  printf("%lf \n", G);
  printf("%lf \n", H);
  printf("%lf \n", I);
  printf("%lf \n", J);

  return 0;
}