#include <stdio.h>

#define MIN_LINE_WIDTH 80
#define MAX_LINE_WIDTH 128

int
main(void)
{
  char c;
  int i = 0;
  char line[MAX_LINE_WIDTH];

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      line[i] = '\0';
      if (i >= MIN_LINE_WIDTH) {
        printf("%s\n", line);
      }
      i = 0;
    } else {
      /* truncates line at MAX_LINE_WIDTH */
      if (i < MAX_LINE_WIDTH - 1) {
        line[i++] = c;
      }
    }
  }

	return 0;
}
