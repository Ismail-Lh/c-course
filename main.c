#include <stdio.h>
#include <string.h>

typedef char user[12];

typedef struct
{
  char name[12];
  char password[12];
  int id;
} User;


int main() {
  // * TYPEDEF -----> reserved keyword that gives an existing datatype a "nickname"

  user name = "ISMAIL";

  User user1 = { "Ismail", "password123", 123456789 };

  User user2 = { "Saad", "password123", 987654321 };

  printf("%s", name);
  printf("%d", user1.id);

  return 0;
}

