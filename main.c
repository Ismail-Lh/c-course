#include <stdio.h>
#include <stdlib.h>
#include <time.h>


enum Day { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main() {
  // * PSEUDO RANDOM NUMBER -----> a set of values or elements that are statistically random (Don't use these for any sort of cryptographic security)

  srand(time(0));

  int number1 = (rand() % 6) + 1;
  int number2 = (rand() % 6) + 1;
  int number3 = (rand() % 6) + 1;

  printf("%d \t", number1);
  printf("%d \t", number2);
  printf("%d", number3);

  return 0;
}

