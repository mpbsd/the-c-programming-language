#include <stdio.h>
#include <limits.h>

int
main(void)
{
  printf("          |  type |        minimum value |        maximum value \n");
  printf("----------+-------+----------------------+----------------------\n");
  printf("   signed |  char | %20d | %20d\n", CHAR_MIN, CHAR_MAX);
  printf(" unsigned |  char | %20d | %20d\n", 0, UCHAR_MAX);
  printf("   signed | short | %20d | %20d\n", SHRT_MIN, SHRT_MAX);
  printf(" unsigned | short | %20d | %20u\n", 0, USHRT_MAX);
  printf("   signed |   int | %20d | %20d\n", INT_MIN, INT_MAX);
  printf(" unsigned |   int | %20d | %20u\n", 0, UINT_MAX);
  printf("   signed |  long | %20ld | %20ld\n", LONG_MIN, LONG_MAX);
  printf(" unsigned |  long | %20d | %20lu\n", 0, ULONG_MAX);

  return 0;
}
