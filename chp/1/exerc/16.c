#include <stdio.h>

#define MAX_WIDTH 80

int
main(void)
{
  char c;
  int i = 0;
  char line[MAX_WIDTH];

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      line[i++] = '\0';
      printf("%d characters long\n%s\n", i, line);
      i = 0;
    } else {
      if (i < MAX_WIDTH - 1) {
        line[i++] = c;
      } else {
        ++i;
      }
    }
  }

  return 0;
}
