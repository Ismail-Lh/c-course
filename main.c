#include <stdio.h>
#include <string.h>

int main() {
  // * 2D ARRAY -----> an array, where each element is an entire array
  // * useful if you need a matrix, grid, or table of date 

  int numbers[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

  size_t rowsLen = sizeof(numbers) / sizeof(numbers[0]);

  size_t columnsLen = sizeof(numbers[0]) / sizeof(numbers[0][0]);


  // for (int i = 0; i < rowsLen; i++)
  // {
  //   for (int j = 0; j < columnsLen; j++)
  //   {
  //     printf("%d ", numbers[i][j]);
  //   }

  //   printf("\n");

  // }

 // * ARRAY OF STRINGS

  char cars[][10] = { "Tesla", "Ferrari", "BMW" };

  // !: how to reassign a string value inside an array
  strcpy(cars[0], "Mustang");

  size_t arrayLen = sizeof(cars) / sizeof(cars[0]);

  for (int i = 0; i < arrayLen; i++)
  {
    printf("%s \n", cars[i]);
  }


  return 0;
}

