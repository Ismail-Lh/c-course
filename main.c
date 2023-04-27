#include <stdio.h>

void hello(char name[], int age) {
  printf("Happy birthday dear %s! \n", name);
  printf("Your are %d years old! \n", age);

}

int main() {
  // *:FUNCTIONS

  char name[32] = "Ismail";
  int age = 24;

  hello(name, age);


  return 0;
}