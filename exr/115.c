#include <stdio.h>


#define LOWER_LIMIT   0
#define UPPER_LIMIT 300
#define STEP         20


float fahr2celsius(int);


int
main(void)
{
  int i;

  printf("\n");

  printf(" FAHRENHEIT | CELSIUS \n");
  printf("------------+---------\n");

  for (i = LOWER_LIMIT; i <= UPPER_LIMIT; i += STEP)
    printf("%11d | %7.1f\n", i, fahr2celsius(i));

  printf("\n");

  return 0;
}


float
fahr2celsius(int f)
{
  return (5.0 / 9.0) * (float)(f - 32);
}
