#include <stdio.h>

int main() {
  // *:VARIABLES -----> Variable is basically nothing but the name of a memory location that we use for storing data. We can change the value of a variable in C or any other language, and we can also reuse it multiple times. We use symbols in variables for representing the memory location- so that it becomes easily identifiable by any user.

  int x; // !: declaration
  x = 1; // !: initialization
  int y = 2; // !: declaration & initialization

  int age = 21; // !: integer
  float gpa = 2.1; // !: float number
  char grade = 'C'; // !: single character
  char name[] = "ism"; // !: array of characters (string)

  printf("Hello %s.\n", name);
  printf("You are %d years old.\n", age);
  printf("Your average grade is %c.\n", grade);
  printf("Your gpa is %f.\n", gpa);

  return 0;
}