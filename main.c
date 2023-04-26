#include <stdio.h>

int main() {
  // *:AUGMENTED ASSIGNMENT OPERATORS -----> used to replace a statement where an operator takes a variable as one of its arguments and then assigns the result back to the same variable EX: x = x + 1 ----> x += 1 

  int x = 5;

  x = x + 2;
  x += 2;

  x = x - 2;
  x -= 2;

  printf("%d", x);

  return 0;
}