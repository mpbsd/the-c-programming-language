#include <stdio.h>

/*
 * This exercise asks us to write a C program that prints a histogram of
 * different characters in its input.
 *
 * We've implemented counts for this type of input: alphabet, digit and space
 * (blank, tab and newline)
 */

#define N_ALPHA 26
#define N_DIGIT 10
#define N_SPACE 3

#define IN  1
#define OUT 0

int
main(void)
{
  long c;
  long alpha[N_ALPHA];
  long digit[N_DIGIT];
  long space[N_SPACE];
  short i;
  short j;

  for (i = 0; i <= N_ALPHA - 1; i++)
    alpha[i] = 0;

  for (i = 0; i <= N_DIGIT - 1; i++)
    digit[i] = 0;

  for (i = 0; i <= N_SPACE - 1; i++)
    space[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      ++alpha[c-'a'];
    } else if (c >= '0' && c <= '9') {
      ++digit[c-'0'];
    } else if (c == ' ') {
      ++space[0];
    } else if (c == '\t') {
      ++space[1];
    } else if (c == '\n') {
      ++space[2];
    }
  }

  for (i = 0; i <= N_ALPHA - 1; i++) {
    if (alpha[i] > 0) {
      printf("%2c: ", 'a' + i);
      for (j = 0; j <= alpha[i] - 1; j++) {
        printf("*");
      }
      printf("\n");
    }
  }

  for (i = 0; i <= N_DIGIT - 1; i++) {
    if (digit[i] > 0) {
      printf("%2c: ", '0' + i);
      for (j = 0; j <= digit[i] - 1; j++) {
        printf("*");
      }
      printf("\n");
    }
  }

  if (space[0] > 0) {
    printf("\\s: ");
    for (j = 0; j <= space[0] - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  if (space[1] > 0) {
    printf("\\t: ");
    for (j = 0; j <= space[1] - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  if (space[2] > 0) {
    printf("\\n: ");
    for (j = 0; j <= space[2] - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
