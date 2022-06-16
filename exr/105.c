#include <stdio.h>

/* Temperature convertion program: print the table in reverse order, that is,
 * from 300 degrees to 0. */

int
main(void)
{
  int min_t = 0, max_t = 300, step_t = 20, celsius, fahrenheit;

  printf("\n");

  printf(" FAHRENHEIT | CELSIUS \n");
  printf("------------+---------\n");

  for (fahrenheit = max_t; fahrenheit >= min_t; fahrenheit -= step_t)
    printf("%11d | %7.2f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32));

  printf("\n");

  printf(" CELSIUS | FAHRENHEIT \n");
  printf("---------+------------\n");

  for (celsius = max_t; celsius >= min_t; celsius -= step_t)
    printf("%8d | %10.2f\n", celsius, 32.0 + (9.0 / 5.0) * celsius);

  printf("\n");

  return 0;
}
