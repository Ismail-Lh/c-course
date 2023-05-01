#include <stdio.h>
#include <string.h>

int main() {
  // * ARRAY -----> a data structure that can store many values of the same data type


  double prices[] = { 5.0, 4.0, 10.0, 15.0 , 25.0, 20.0 };

  // !: GET THE LENGTH OF THE PRICES ARRAY
  size_t pricesLen = sizeof(prices) / sizeof(prices[0]);

  for (int i = 0; i < pricesLen; i++)
  {
    printf("$%.2lf \n", prices[i]);
  }

  return 0;
}

