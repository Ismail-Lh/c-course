#include <stdio.h>
#include <stdlib.h>
#include <time.h>


enum Day { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main() {
  // * NUMBER GUESSING GAME

  const int MIN = 1;
  const int MAX = 100;

  int guess;
  int guesses;
  int answer;

  srand(time(0));

  // ?: generate a random number between MIN & MAX
  answer = (rand() % MAX) + 1;

  do
  {
    printf("Enter a guess: ");
    scanf("%d", &guess);

    if (guess > answer) {
      printf("To high! \n");
    }
    else if (guess < answer) {
      printf("To low! \n");
    }
    else {
      printf("CORRECT!!! \n");
    }
    printf("\n");
    guesses++;
  } while (guess != answer);

  printf("********************** \n");
  printf("Answer: %d \n", answer);
  printf("Guesses: %d \n", guesses);
  printf("**********************");

  return 0;
}

