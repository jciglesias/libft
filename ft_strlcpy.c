#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
  size_t i;

  i = 0;
  while (src[i] && size-- > 0)
    dst[i] = src[i++];
  dst[i] = \0;
  while (src[i])
    i++;
  return (i);
}
