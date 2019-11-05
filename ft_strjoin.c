/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 21:41:00 by jiglesia          #+#    #+#             */
/*   Updated: 2019/11/04 15:07:38 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			a;
	char		*str;

	i = 0;
	a = 0;
	if ((!s1 && !s2) || !(str = (char *)malloc(sizeof(char) *
							(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	if (!s1 || !s2)
		return ((!s1)? ft_strdup(s2) : ft_strdup(s1));
	while (s1[a])
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[i])
		str[a++] = s2[i++];
	str[a] = 0;
	return (str);
}
