#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


enum Day { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main() {
  // * MEMORY ----> an array of bytes within RAM (street)
  // * MEMORY BLOCK -----> a single unit (byte) within a memory, used to hold some value (person)
  // * MEMORY ADDRESS -----> the address of where a memory block is located (house address)

  char a;
  char b[1];

  printf("%d bytes\n", sizeof(a));
  printf("%d bytes\n", sizeof(b));

  printf("%p\n", &a);
  printf("%p\n", &b);

  return 0;
}

