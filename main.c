#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[12];
  int score;
  int id;
} Player;


int main() {
  // * ARRAY OF STRUCT

  Player player1 = { "Ismail", 12, 147855 };
  Player player2 = { "Saad", 17, 147856 };
  Player player3 = { "Mohamed", 14, 147857 };
  Player player4 = { "Adam", 20, 147858 };

  Player players[] = { player1, player2, player3, player4 };

  for (int i = 0; i < sizeof(players) / sizeof(players[0]); i++)
  {
    printf("Your name is %s, and your score is %d! \n", players[i].name, players[i].score);
  }


  return 0;
}

