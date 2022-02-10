#include <stdio.h>
#include <limits.h>

int
main(void)
{
  printf("%d <= SCHAR <= %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("0 <= UCHAR <= %d\n", UCHAR_MAX);
  printf("%d <= SHRT <= %d\n", SHRT_MIN, SHRT_MAX);
  printf("0 <= USHRT_MAX <= %u\n", USHRT_MAX);
  printf("%d <= INT <= %d\n", INT_MIN, INT_MAX);
  printf("0 <= UINT <= %u\n", UINT_MAX);
  printf("%ld <= LONG <= %ld\n", LONG_MIN, LONG_MAX);
  printf("0 <= ULONG <= %lu\n", ULONG_MAX);
  printf("%lld <= LLONG <= %lld\n", LLONG_MIN, LLONG_MAX);
  printf("0 <= ULLONG <= %llu\n", ULLONG_MAX);

  return 0;
}
