#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  int i;
  char a;

  i = 0;
  a = (char)c;
  while (s[i])
    {
      if (s[i++] == a)
	return (&s[--i]);
    }
  return (NULL);
}