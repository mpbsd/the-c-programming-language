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
      if (i > 1) {
        while (line[i] == ' ' || line[i] == '\t') {
          if (line[i] == ' ') {
            line[i--] = 'A';
          } else {
            line[i--] = 'B';
          }
        }
        line[++i] = '\0';
        if (i > 0) {
          printf("%d:\t%s\n", i, line);
        }
      }
      i = 0;
    } else {
      if (i < MAX_WIDTH - 1) {
        line[i++] = c;
      }
    }
  }
  
  return 0;
}
