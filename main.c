#include <stdio.h>
#include <stdbool.h>

int main() {
  // *:LOGICAL OPERATORS -----> && || !

  bool sunny = false;

  if (!sunny) {
    printf("It's cloudy outside!");
  }
  else {
    printf("It's sunny outside!");
  }

  return 0;
}