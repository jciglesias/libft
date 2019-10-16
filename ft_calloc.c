#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
  void *str;
  size_t i;

  i = 0;
  if (nmemb == 0 ||size == 0 || !(str = malloc(size * nmemb)))
    return (NULL);
  while (nmemb-- > 0)
    (char *)str++ = 0;
  return (str);
}
