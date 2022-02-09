#include <stdio.h>

#define MAX_WIDTH 12

int
main(void)
{
  char c;
  char l[MAX_WIDTH];
  int i = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      for (--i; l[i] == ' ' || l[i] == '\t'; --i) {
        ;
      }
      l[++i] = '\0';
      printf("%d:\t%s\n", i, l);
      i = 0;
    } else {
      if (i < MAX_WIDTH - 1) {
        l[i++] = c;
      }
    }
  }
  
  return 0;
}
