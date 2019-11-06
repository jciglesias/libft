/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:50:20 by jiglesia          #+#    #+#             */
/*   Updated: 2019/11/06 01:08:22 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*empty_string(void)
{
	char	*p;

	p = (char *)malloc(sizeof(char));
	if (!p)
		return (NULL);
	p[0] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned int		i;

	i = 0;
	if (start >= ft_strlen(s))
		return (empty_string());
	if (!s || !(str = (char *)ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	if (s[i] && ft_strlen(s) > start)
	{
		while (s[start] && len-- > 0)
			str[i++] = (char)s[start++];
		str[i] = 0;
	}
	return (str);
}
