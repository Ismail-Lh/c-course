#include <stdio.h>

int main() {
  // * READING FILES

  FILE* pF = fopen("C:\\Users\\HP\\Desktop\\README.md", "r");

  FILE* pHtml = fopen("index.html", "w");

  char buffer[255];

  if (pF == NULL) {
    printf("Unable to find the file! \n");
  }
  else {
    while (fgets(buffer, 255, pF) != NULL)
    {
      fprintf(pHtml, buffer);
    }
  }

  fclose(pHtml);
  fclose(pF);

  return 0;
}

