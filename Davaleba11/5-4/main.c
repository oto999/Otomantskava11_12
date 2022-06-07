#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main(void)
{
  char *s = "This si a simple string";
  char *t1 = "string";
  char *t2 = "random string";

  if (strend(s, t1))
    puts("The string t1 orrurs at the end of the string s.");
  else
    puts("The string t1 doesn't orrur at the end of the string s.");

  if (strend(s, t2))
    puts("The string t2 orrurs at the end of the string s.");
  else
    puts("The string t2 doesn't orrur at the end of the string s.");

  return 0;
}