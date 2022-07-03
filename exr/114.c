#include <stdio.h>

/*
 * Write a program to print a histogram of the frequencies of different
 * characters in its input
 */

int
main(void)
{
  int alpha[26];
  int num[10];
  int c, i, j;

  for (i = 0; i < 26; ++i)
    alpha[i] = 0;

  for (i = 0; i < 10; ++i)
    num[i] = 0;

  while ((c = getchar()) != EOF) {
    if ('a' <= c && c <= 'z') {
      alpha[c-'a']++;
    } else if ('0' <= c && c <= '9') {
      num[c-'0']++;
    }
  }

  for (i = 0; i < 26; ++i)
    if (alpha[i] > 0) {
      printf("%c: ", 'a'+i);
      for (j = 0; j < alpha[i]; ++j)
        printf("*");
      printf("\n");
    }

  for (i = 0; i < 10; ++i)
    if (num[i] > 0) {
      printf("%d: ", i);
      for (j = 0; j < num[i]; ++j)
        printf("*");
      printf("\n");
    }

  return 0;
}
