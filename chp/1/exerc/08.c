#include <stdio.h>

int
main(void)
{
  double nb = 0;
  double nt = 0;
  double nl = 0;
  double c;

  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nl;

  printf("nb = %.0f, nt = %.0f, nl = %.0f\n", nb, nt, nl);

  return 0;
}
