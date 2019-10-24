/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 21:41:00 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/24 16:22:02 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			j;
	int			a;
	char		*str;

	i = 0;
	a = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (!(str = (char *)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	while (i-- > 0)
	{
		str[a] = s1[a];
		a++;
	}
	while (j-- > 0)
		str[a++] = s2[i++];
	return (str);
}
