#include <stdio.h>
#include <ctype.h>

int main() {
  // *:TEMPERATURE CONVERSION PROGRAM

  char unit;
  float temp;

  printf("Is the temperature in (F) or (C)?: ");
  scanf("%c", &unit);

  unit = toupper(unit);

  if (unit == 'C')
  {
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);

    temp = (temp * 9 / 5) + 32;
    printf("The temp in Fahrenheit is: %.1f", temp);
  }
  else if (unit == 'F')
  {
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temp);

    temp = ((temp - 32) * 5) / 9;
    printf("The temp in Celsius is: %.1f", temp);
  }
  else
  {
    printf("%c is not a valid unit of measurement!", unit);
  }


  return 0;
}