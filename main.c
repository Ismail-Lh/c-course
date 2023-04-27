#include <stdio.h>
#include <math.h>

int main() {
  // *:SWITCH STATEMENTS -----> A more efficient alternative to using many "else if" statements allows a value to be tested for equality against many cases

  char grade;

  printf("Enter your grade: ");
  scanf("%c", &grade);

  // if (grade == 'A') {
  //   printf("Perfect!");
  // }
  // else if (grade == 'B') {
  //   printf("You did good!");
  // }
  // else if (grade == 'C') {
  //   printf("You did okay!");
  // }
  // else if (grade == 'D') {
  //   printf("At least it's not an F!");
  // }
  // else if (grade == 'F') {
  //   printf("YOU FAILED!");
  // }
  // else {
  //   printf("That's not a valid grade!!!");
  // }

  switch (grade)
  {
    case 'A':
      printf("Perfect!");
      break;
    case 'B':
      printf("You did good!");
      break;
    case 'C':
      printf("You did okay!");
      break;
    case 'D':
      printf("At least it's not an F!");
      break;
    case 'F':
      printf("YOU FAILED!");
      break;

    default:
      printf("That's not a valid grade!!!");
      break;
  }

  return 0;
}