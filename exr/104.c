#include <stdio.h>

/* Temperature convertion program: Celsius to Fahrenheit. */

int
main(void)
{

  int min_t = 0, max_t = 300, step_t = 20, celsius;

  printf("\n");

  printf(" CELSIUS | FAHRENHEIT \n");
  printf("---------+------------\n");

  for (celsius = min_t; celsius <= max_t; celsius += step_t)
    printf("%8d | %10.2f\n", celsius, 32.0 + (9.0 / 5.0) * celsius);

  printf("\n");

  return 0;
}
