#include <stdio.h>
#include <string.h>

int main() {
  // * STRING FUNCTIONS

  char string1[32] = "Ismail";
  char string2[32] = "Lahbiyeb";

  // strlwr(string1); // ?: converts a string to lowercase
  // strupr(string1); // ?: converts a string to uppercase
  // strcat(string1, string2); // ?: appends string2 to the end of string1
  // strncat(string1, string2, 4); // ?: appends n characters from string2 to the end of string1
  // strcpy(string1, string2); // ?: copy string2 to string1
  //strncpy(string1, string2, 4); // ?: copy n characters from string2 to string1

  // strset(string1, '?'); // ?: sets all characters of a string to a given character
  // strnset(string1, '?', 1); // ?: sets first n character of a string to a given character
  // strrev(string1); // ?: reverse a string

  int result = strlen(string1); // ?: return the string length
  // int result = strcmp(string1, string2); // ?: string compare all characters(check if the strings are the same)
  // int result = strncmp(string1, string2, 1); // ?: string compare n characters
  // int result = strcmpi(string1, string2); // ?: string compare all characters (check if the strings are the same) (ignore case sensitive)
  // int result = strnicmp(string1, string2, 1); // ?: string compare n characters (ignore case sensitive)

  printf("%d", result);

  return 0;
}
