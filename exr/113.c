#include <stdio.h>

int
main(void)
{
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      putchar('\n');
    } else {
      if (c == ' ' || c == '\t') {
        putchar('\n');
      } else {
        putchar('*');
      }
    }
  }

  return 0;
}
