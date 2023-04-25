#include <stdio.h>
#include <stdbool.h>

int main() {
  //*: DATA TYPES

  char a = 'C'; // !: single character %c
  char b[] = "Boo"; // !: array of characters %s

  float c = 3.141592; // !: 4 bytes (32 bites of precision) 6 - 7 digits %f
  double d = 3.141592653589793; // !: 8 bytes (64 bites of precision) 15 - 16 digits %lf

  bool e = true; // !: 1 byte (true or false) %d

  char f = 100; // !: 1 byte (-128 to +127) %d or %c 
  unsigned char g = 255; // !: 1 byte (0 to +255) %d or %c

  short int h = 32767; // !: 2 bytes (-32,768 to +32,767)
  unsigned short int i = 65535; // !: 2 bytes (0 to 65,535)

  int j = 2147483647; // !: 4 bytes (-2,147,483,648 to +2,147,483,647) %d
  unsigned int k = 4294967295; // !: 4 bytes (0 to 4294967295) %u

  long long int l = 9223372036854775807; // !: 8 bytes (−9 223 372 036 854 775 807 to  +9 223 372 036 854 775 807) %lld
  unsigned long long int m = 18446744073709551615U; // !: 8 bytes (0 to 18 446 744 073 709 551 615) %llu

  printf("float: %f \n", c); // ?: float
  printf("double: %0.15lf \n", d); // ?: double
  printf("boolean: %d \n", e); // ?: boolean
  printf("char as numeric value: %d \n", f); // ?: char as numeric value
  printf("char as numeric value: %c \n", f); // ?: char as numeric value
  printf("unsigned char as numeric value: %d \n", g); // ?: unsigned char as numeric value
  printf("short: %d \n", h); // ?: short
  printf("unsigned short: %d \n", i); // ?: unsigned short
  printf("int: %d \n", j); // ?: int
  printf("unsigned short: %u \n", k); // ?: unsigned short
  printf("long long int: %lld \n", l); // ?: long long int
  printf("unsigned long long int: %llu \n", m); // ?: unsigned long long int

  return 0;
}