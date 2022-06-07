#include <stdio.h>


void strcat_ptr(char *s, char *t)
{
  while ((*++s) != '\0')
    ;

  while ((*s++ = *t++) != '\0')
    ;
}