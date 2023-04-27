#include <stdio.h>
#include <math.h>

int main() {
  // *:IF STATEMENTS

  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("You are now signed up!");
  }
  else if (age <= 0) {
    printf("You enter an invalid age!");
  }
  else {
    printf("You are not allowed!");
  }



  return 0;
}