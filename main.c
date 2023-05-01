#include <stdio.h>
#include <string.h>


enum Day { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main() {
  // * ENUMS ----> a user defined type of named integer identifiers helps to make a program more readable 

  enum Day today = Mon;

  // !: enums are NOT STRINGS, but they can be treated as int
  printf("%d", today);

  return 0;
}

