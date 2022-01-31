#include <stdio.h>

#define LOWER 0.0
#define UPPER 300.0
#define STEP  20.0

double celsius(double fahr);
double fahr(double celsius);

int
main(void)
{
  double temp;

  printf(" fahr | celsius \n");
  printf("------+---------\n");

  /* from fahr to celsius */
  for (temp = LOWER; temp <= UPPER; temp += STEP)
    printf("%5.0f | %7.1f\n", temp, celsius(temp));

  printf("\n");

  printf(" celsius |  fahr \n");
  printf("---------+-------\n");

  /* from celsius to fahr */
  for (temp = LOWER; temp <= UPPER; temp += STEP)
    printf("%8.0f | %5.1f\n", temp, fahr(temp));

  return 0;
}

double
celsius(double fahr)
{
  return (5.0 / 9.0) * (fahr - 32.0);
}

double fahr(double celsius)
{
  return (9.0 / 5.0) * celsius + 32.0;
}
