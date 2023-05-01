#include <stdio.h>
#include <string.h>

struct Player
{
  char name[12];
  int score;
};


int main() {
  // * STRUCT -----> collection of related members("VARIABLES"), they can be of different data types listed under one name in a block of memory
  // ! VERY SIMILAR to classes in other languages (bu no methods)

  struct Player player1;
  struct Player player2;

  strcpy(player1.name, "Ismail");
  player1.score = 10;

  strcpy(player2.name, "Saad");
  player2.score = 8;

  printf("your name is %s and your score is %d. \n", player1.name, player1.score);

  printf("your name is %s and your score is %d. \n", player2.name, player2.score);

  return 0;
}

