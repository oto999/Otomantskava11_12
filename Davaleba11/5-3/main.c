#include <stdio.h>

void strcat_ptr(char *s, char *t);

int main(void)
{
  char s[100] = "first string";
  char t[] = ", second string";

  strcat_ptr(s, t);

  puts(s);

  return 0;
}