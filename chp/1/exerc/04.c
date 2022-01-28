#include <stdio.h>

int
main(void)
{
  float celsius, fahr;
  int lower, upper, step;

  lower = 0.0;
  upper = 300.0;
  step = 20.0;

  celsius = lower;

  printf(" celsius |   fahr \n");
  printf("---------+--------\n");

  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%8.0f | %6.2f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}
