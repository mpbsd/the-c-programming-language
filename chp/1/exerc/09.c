#include <stdio.h>

int
main(void)
{
  short previous_char_was_a_blank = 0;
  double c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (previous_char_was_a_blank == 0) {
        putchar(c);
        previous_char_was_a_blank = 1;
      }
    } else {
      putchar(c);
      previous_char_was_a_blank = 0;
    }
  }

  return 0;
}
