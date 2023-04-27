#include <stdio.h>
#include <stdbool.h>

int main() {
  // *:LOGICAL OPERATORS -----> && || !

  float temp;
  printf("Enter the temp: ");
  scanf("%f", &temp);

  if (temp <= 0 || temp >= 30) {
    printf("The weather is bad!");
  }
  else {
    printf("The weather is good!");
  }

  return 0;
}