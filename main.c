#include <stdio.h>
#include <string.h>

int main() {
  // * CONTINUE -----> skips rest of code & forces the next iteration of the loop
  // * BREAK -----> exits a loop/switch

  // !: don't print number 13 || 14
  // for (int i = 1; i <= 20; i++)
  // {
  //   if (i == 13 || i == 14) {
  //     continue;
  //   }

  //   printf("%d \n", i);
  // }

  // !: if the i = 13 break the code (exist)
  for (int i = 1; i <= 20; i++)
  {
    if (i == 13) {
      break;
    }

    printf("%d \n", i);
  }


  return 0;
}

