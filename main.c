#include <stdio.h>
#include <string.h>

int main() {
  // * NESTED LOOPS -----> a loop inside of another loop

  int rows;
  int columns;
  char symbol;

  printf("Enter # of rows: ");
  scanf("%d", &rows);

  printf("Enter # of columns: ");
  scanf("%d", &columns);

  scanf("%c");

  printf("Enter a symbol to use: ");
  scanf("%c", &symbol);

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= columns; j++)
    {
      printf("%c", symbol);
    }
    printf("\n");
  }


  return 0;
}

