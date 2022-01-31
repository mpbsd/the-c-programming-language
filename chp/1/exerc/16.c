#include <stdio.h>

#define MAXIMUM_WIDTH 1000

int get_line(char line[], int line_width);
void copy(char to[], char from[]);

int
main(void)
{
  int line_width;
  int maximum_width;
  char line[MAXIMUM_WIDTH];
  char longest_line[MAXIMUM_WIDTH];

  maximum_width = 0;

  while ((line_width = get_line(line, MAXIMUM_WIDTH)) > 0)
    if (line_width > maximum_width) {
      maximum_width = line_width;
      copy(longest_line, line);
    }

  if (maximum_width > 0) {
    printf("longest line:\n\t%s", longest_line);
    printf("line width:\n\t%d\n", maximum_width);
  }

  return 0;
}

int
get_line(char line[], int line_width)
{
  char c;
  int i;

  for (i = 0; i < line_width - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n')
    line[i++] = c;

  line[i] = '\0';

  return i;
}

void
copy(char to[], char from[])
{
  int i;

  for (i = 0; (to[i] = from[i]) != '\0'; ++i)
    ;

  to[i] = '\0';
}
