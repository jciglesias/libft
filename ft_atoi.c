#include "libft.h"

int ft_atoi(const char *nptr)
{
  int i;
  int a;
  int b;

  i = 0;
  b = 0;
  while (nptr[i] == ' ')
    i++;
  if (nptr[i] == '-')
    {
      a = -1;
      i++;
    }
  else
    a = 1;
  while (nptr[i] >= '0' && nptr[i++] <= '9')
    b = b * 10 + a * (nptr[i] - '0');
  return (b);
}
