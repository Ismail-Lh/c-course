#include <stdio.h>

int main() {
  // *:FORMAT SPECIFIER -----> defined and formats a type of data to be displayed

  // ?: %c = character
  // ?: %s = string (array of character)
  // ?: %f = float
  // ?: %lf = double
  // ?: %d = integer

  // ?: %.1 = decimal precision
  // ?: %1 = minimum field width
  // ?: %- = left align

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("Item 1: $%f \n", item1); // !: float format specifier
  printf("Item 1: $%.2f \n", item1); // !: float format specifier with 2 decimal precision

  return 0;
}