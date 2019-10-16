#include "libft.h"

char *ft_strdup(const char *s)
{
  int i;
  char *dup;
 
  i = 0;
  while (s[i])
    i++;
  if (!(dup = malloc(sizeof char * i + 1)))
    return (NULL);
  while (i-- > 0)
    dup++ = s++;
  return (dup);
}
