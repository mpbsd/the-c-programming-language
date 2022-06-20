#include <stdio.h>

int
main(void)
{
  int b = 1; /* flag var: 1 if previous char is a blank, 0 otherwise */
  int c;

  while ((c = getchar()) != EOF) {
    if (b == 0 && c == ' ') {
      putchar(c);
      b = 1;
    } else if (b == 0 && c != ' ') {
      putchar(c);
    } else if (b == 1 && c != ' ') {
      putchar(c);
      b = 0;
    }
  }

  return 0;
}
