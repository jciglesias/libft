/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 22:22:20 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/30 19:34:48 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_rev(char *str)
{
	int		i;
	int		j;
	char	*dup;

	dup = ft_strdup(str);
	i = 0;
	j = ft_strlen(dup) - 1;
	while (str[i])
	{
		if ((dup[j] >= '0' && dup[j] <= '9') || dup[j] == '-')
			str[i++] = dup[j--];
		else
			j--;
	}
}

static char		*ft_alloc(int n)
{
	int		i;
	char	*str;

	i = 2;
	while (n /= 10)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * ++i)))
		return (NULL);
	ft_memset(str, 0, i);
	return (str);
}

char			*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = ft_alloc(n)))
		return (NULL);
	if (n == 0)
		return ("0");
	while (n / 10 != 0 || n % 10 != 0)
	{
		if (n < 0)
			str[i++] = (n % 10) * -1 + '0';
		else
			str[i++] = n % 10 + '0';
		if (n / 10 == 0 && n < 0)
			str[i] = '-';
		n /= 10;
	}
	str[++i] = 0;
	ft_rev(str);
	return (str);
}
