#include <stdio.h>
#include <string.h>

int main() {
  // * WHILE LOOP -----> repeats a section of code possibly unlimited amount of times WHILE some condition remains true, a while loop might not execute at all

  char name[25];

  printf("What's your name?: ");
  fgets(name, 25, stdin);
  name[strlen(name) - 1] = '\0';


  while (strlen(name) == 0)
  {
    printf("\nYou did not enter your name\n");

    printf("What's your name?: ");
    fgets(name, 5, stdin);
    name[strlen(name) - 1] = '\0';
  }

  printf("Thank you %s", name);

  return 0;
}

