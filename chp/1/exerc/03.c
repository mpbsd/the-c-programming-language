#include <stdio.h>

int
main(void)
{
  float celsius, fahr;
  float lower, upper, step;

  lower = 0.0;
  upper = 300.0;

  fahr = lower;

  step = 20.0;

  printf(" fahr | celsius \n");
  printf("------+---------\n");

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%5.0f | %6.2f\n", fahr, celsius);
    fahr += step;
  }

  return 0;
}
