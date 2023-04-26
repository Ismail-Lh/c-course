#include <stdio.h>
#include <string.h>

int main() {
  // *:USER INPUT

  char name[25];
  int age;

  printf("What's your name? \n");
  // scanf("%s", &name); // !: input = ismail lahbiyeb ----> output = ismail (get ride of the white space)
  fgets(name, 25, stdin); // !: input = ismail lahbiyeb---- > output = ismail lahbiyeb
  name[strlen(name) - 1] = '\0'; // !: remove the new line return

  printf("How old are you? \n");
  scanf("%d", &age);

  printf("Your name is %s and you have %d years old", name, age);

  return 0;
}