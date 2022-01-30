#include <stdio.h>

#define IN  1
#define OUT 0

int
main(void)
{
  double c, wl;
  short i, state;

  wl = 0;
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN) {
        state = OUT;
        if (wl > 0) {
          for (i = 0; i <= wl - 1; i++) {
            if (i == 0) {
              printf("\n*");
            } else if (i < wl - 1) {
              printf("*");
            } else {
              printf("*\n");
            }
          }
        }
        wl = 0;
      }
    } else {
      if (state == OUT) {
        state = IN;
      }
      putchar(c);
      ++wl;
    }
  }

  return 0;
}
