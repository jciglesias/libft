/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 21:52:49 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/18 18:07:43 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_verif(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i++])
			return (1);
	}
	return (0);
}

int		ft_countrev(char const *s, char const *set)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	str = ft_strdup(s);
	j = ft_strlen(s);
	while (str[i])
		str[i++] = s[j--];
	while (ft_verif(str[j], set))
		j++;
	return (i - j);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		j;
	int		a;
	char	*str;

	i = 0;
	while (ft_verif(s[i], set))
		i++;
	j = ft_countrev(&s[i - 1], set);
	if (!(str = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	a = 0;
	while (a < j)
		str[a++] = s[i++];
	str[a] = 0;
	return (str);
}
