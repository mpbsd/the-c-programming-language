#include <stdio.h>

/* WORD: a finite sequence of (non blank) characters surrounded by blanks */

#define IN  0 /* inside  a word */
#define OUT 1 /* outside a word */

int
main(void)
{
  int c;
  int state = OUT;

  while ((c = getchar()) != EOF) {
    if (state == IN && c == ' ') {
      printf("\n");
      state = OUT;
    } else if (state == OUT && c != ' ') {
      state = IN;
    }
    if (state == IN) {
      putchar(c);
    }
  }

  return 0;
}
