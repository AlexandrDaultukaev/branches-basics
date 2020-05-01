#include <stdio.h>
#include <ctype.h>

int main() {
  char string[20];
  printf("What is the commit now?\n");
  scanf("%s", string);
  string[0] = toupper(string[0]);
  printf("%s commit\n", string);
  return 0;
}
