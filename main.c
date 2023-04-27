#include <stdio.h>

double square(double x) {

  return x * x;

}

int main() {
  // *:FUNCTIONS

  double x = square(3);

  printf("Result: %lf!", x);

  return 0;
}