#include <stdio.h>



int main() {
  // *:TERNARY OPERATOR -----> shortcut to if/else when assigning/returning a value (condition) ? value if true : value if false

  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  age >= 18 ? printf("Ok!") : printf("Not Ok!");

  return 0;
}