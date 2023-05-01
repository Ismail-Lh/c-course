#include <stdio.h>
#include <string.h>

void sort(int array[], int size) {

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }

  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }

}

int main() {
  // * SORT AN ARRAY

  int array[] = { 9, 77, 1, 0 , 5, 2, 99, 3, 25, 8, 6, 4 };
  int size = sizeof(array) / sizeof(array[0]);

  sort(array, size);
  printArray(array, size);

  return 0;
}

