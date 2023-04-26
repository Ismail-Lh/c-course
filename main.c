#include <stdio.h>

int main() {
  // *:CIRCLE CIRCUMFERENCE PROGRAM

  const double PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("Enter the radius of a circle: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("circumference: %lf \n", circumference);
  printf("area: %lf", area);

  return 0;
}