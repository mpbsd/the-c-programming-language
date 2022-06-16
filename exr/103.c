#include <stdio.h>

/* Temperature convertion program: Fahrenheit to Celsius. */

int
main(void)
{

  int min_t = 0, max_t = 300, step_t = 20, fahrenheit;

  printf("\n");

  printf(" FAHRENHEIT | CELSIUS \n");
  printf("------------+---------\n");

  for (fahrenheit = min_t; fahrenheit <= max_t; fahrenheit += step_t)
    printf("%11d | %7.2f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32));

  printf("\n");

  return 0;
}
