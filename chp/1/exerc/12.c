#include <stdio.h>

#define IN  1
#define OUT 0

int
main(void)
{
  double c;
  short state;

  state = OUT;

  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN) {
        state = OUT;
        printf("\n");
      }
    } else {
      if (state == OUT) {
        state = IN;
      }
      putchar(c);
    }

  return 0;
}
