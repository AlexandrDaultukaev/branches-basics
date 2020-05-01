#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  char string[20];
  printf("What is the commit now?\n");
  scanf("%s", string);
  if (strcmp(string, "2") == 0) {
  	strcpy(string, "second");
  }
  string[0] = toupper(string[0]);
  printf("%s commit\n", string);
  return 0;
}
