#include <stdio.h>
#include <string.h>


int strend(char *s, char *t)
{
  size_t s_length = strlen(s);
  size_t t_length = strlen(t);

  s += s_length;
  t += t_length;

  while (t_length && (*s-- == *t--))
    --t_length;

  if (t_length)
    return 0;

  return 1;
}