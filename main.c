#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void printAge(int* pAge) {
  printf("You are %d years old.", *pAge);
}

int main() {
  // * POINTERS -----> A pointer is a variable that stores the memory address of another variable as its value.
  // * A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

  int age = 24;
  int* pAge = &age;

  // printf("address of age: %p \n", &age);
  // printf("value of pAge: %p \n", pAge);

  // printf("value of age: %d \n", age);
  // printf("value at stored address: %d", *pAge);

  printAge(pAge);

  return 0;
}

