#include <stdio.h>

int
main(void)
{
  float fahr;

  printf(" fahr | celsius \n");
  printf("------+---------\n");

  for (fahr = 300.0; fahr >= 0.0; fahr -= 20)
    printf("%5.0f | %7.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));

  return 0;
}
