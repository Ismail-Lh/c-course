#include <stdio.h>
#include <string.h>

int main() {
  // * SWAP VALUE OF TWO VARIABLES

  // char x = 'X';
  // char y = 'Y';
  // char temp;

  // temp = x;
  // x = y;
  // y = temp;

  // printf("x = %c \n", x);
  // printf("y = %c \n", y);

  char x[15] = "water";
  char y[15] = "Lemonade";
  char temp[15];

  strcpy(temp, x);
  strcpy(x, y);
  strcpy(y, temp);

  printf("x = %s \n", x);
  printf("y = %s \n", y);


  return 0;
}

