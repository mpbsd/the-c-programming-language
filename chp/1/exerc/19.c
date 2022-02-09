#include <stdio.h>

#define MAX_WIDTH 120

void reverse(char l[], int m);

int
main(void)
{
  char c;
  char l[MAX_WIDTH];
  int i = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      l[i] = '\0';
      reverse(l, i);
      i = 0;
    } else {
      if (i < MAX_WIDTH - 1) {
        l[i++] = c;
      }
    }
  }

  return 0;
}

void
reverse(char l[], int m)
{
  int i;

  for (i = m - 1; i >= 0; --i)
    printf("%c", l[i]);

  printf("\n");
}
