#include <stdio.h>

int main() {
  // * WRITING FILES

  // FILE* pf = fopen("text.txt", "w");

  // fprintf(pf, "Hello World");

  // fclose(pf);

  if (remove("text.txt") == 0) {
    printf("DELETED SUCCESSFULLY!!!");
  }
  else {
    printf("DELETE ERROR!!!");
  }

  return 0;
}

