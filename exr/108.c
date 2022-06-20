#include <stdio.h>

int
main(void)
{
  int nb = 0; /* number of blank spaces */
  int nn = 0; /* number of newline characters */
  int nt = 0; /* number of tabs */
  int c;

  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++nb;
    else if (c == '\n')
      ++nn;
    else if (c == '\t')
      ++nt;

  printf("The user typed:\n");
  printf("\t%d blank spaces\n", nb);
  printf("\t%d newline characters\n", nn);
  printf("\t%d tab characters\n", nt);
  printf("\n");

  return 0;
}
