#include <stdio.h>



void hello(char[32], int); // *: function prototype

int main() {
  // *FUNCTION PROTOTYPE

  // !: Function declaration, w/o a body, befor main(). Ensures that calls to a function are made with the correct arguments

  // !: IMPORTANT NOTES
  // ?: Many C compilers do not check for parameter matching
  // ?: Missing arguments will result in unexpected behavior
  // ?: A function prototype causes the compiler to flag an error if arguments are missing

  char name[32] = "ismail";
  int age = 24;

  hello(name, age);

  return 0;
}

void hello(char name[32], int age) {
  printf("Hello %s. \n", name);
  printf("You are %d years old. \n", age);
}