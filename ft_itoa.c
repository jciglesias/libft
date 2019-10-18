/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 22:22:20 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/18 17:55:00 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev(char *str)
{
	int		i;
	int		j;
	char	*dup;

	dup = str;
	i = 0;
	j = 0;
	while (str[j + 1])
		j++;
	while (str[i])
		str[i++] = dup[j--];
}

char	*ft_alloc(int n)
{
	int		i;
	char	*str;

	if (n >= 0)
		i = 1;
	else
		i = 2;
	while (n /= 10)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	str = ft_alloc(n);
	while (n / 10 != 0 || n % 10 != 0)
	{
		str[i++] = n % 10 + '0';
		if (n / 10 == 0 && n < 0)
			str[i] = '-';
		n /= 10;
	}
	ft_rev(str);
	return (str);
}
