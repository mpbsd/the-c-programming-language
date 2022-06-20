#include <stdio.h>

/*
 * Experiment to find out what happens when printf's argument string contains
 * \c, where c is some character not listed above.
 */

int
main(void)
{
  printf("\n");

  printf("  ESCAPE SEQUENCE | VALUE \n");
  printf(" -----------------+-------\n");

  printf("%17s | %5d\n",  "\\a",  '\a'); // alert (bell) character
  printf("%17s | %5d\n",  "\\b",  '\b'); // backspace
  printf("%17s | %5d\n",  "\\f",  '\f'); // formfeed
  printf("%17s | %5d\n",  "\\n",  '\n'); // newline
  printf("%17s | %5d\n",  "\\r",  '\r'); // carriage return
  printf("%17s | %5d\n",  "\\t",  '\t'); // horizontal tab
  printf("%17s | %5d\n",  "\\v",  '\v'); // vertical tab
  printf("%17s | %5d\n", "\\\\",  '\\'); // backslash
  printf("%17s | %5d\n", "\\\?",  '\?'); // question mark
  printf("%17s | %5d\n", "\\\'",  '\''); // single quote
  printf("%17s | %5d\n", "\\\"",  '\"'); // double quote

  printf("%17s | %5d\n",  "\\0",  '\0'); // octal number
  printf("%17s | %5d\n",  "\\1",  '\1');
  printf("%17s | %5d\n",  "\\2",  '\2');
  printf("%17s | %5d\n",  "\\3",  '\3');
  printf("%17s | %5d\n",  "\\4",  '\4');
  printf("%17s | %5d\n",  "\\5",  '\5');
  printf("%17s | %5d\n",  "\\6",  '\6');
  printf("%17s | %5d\n",  "\\7",  '\7');

  printf("%17s | %5d\n", "\\x0", '\x0'); // hexadecimal number
  printf("%17s | %5d\n", "\\x1", '\x1');
  printf("%17s | %5d\n", "\\x2", '\x2');
  printf("%17s | %5d\n", "\\x3", '\x3');
  printf("%17s | %5d\n", "\\x4", '\x4');
  printf("%17s | %5d\n", "\\x5", '\x5');
  printf("%17s | %5d\n", "\\x6", '\x6');
  printf("%17s | %5d\n", "\\x7", '\x7');
  printf("%17s | %5d\n", "\\x8", '\x8');
  printf("%17s | %5d\n", "\\x9", '\x9');
  printf("%17s | %5d\n", "\\xa", '\xa');
  printf("%17s | %5d\n", "\\xb", '\xb');
  printf("%17s | %5d\n", "\\xc", '\xc');
  printf("%17s | %5d\n", "\\xd", '\xd');
  printf("%17s | %5d\n", "\\xe", '\xe');
  printf("%17s | %5d\n", "\\xf", '\xf');
  printf("%17s | %5d\n", "\\xA", '\xA');
  printf("%17s | %5d\n", "\\xB", '\xB');
  printf("%17s | %5d\n", "\\xC", '\xC');
  printf("%17s | %5d\n", "\\xD", '\xD');
  printf("%17s | %5d\n", "\\xE", '\xE');
  printf("%17s | %5d\n", "\\xF", '\xF');

  printf("\n");

  return 0;
}
