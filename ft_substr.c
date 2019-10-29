/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:50:20 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/29 18:06:17 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned int		i;

	i = 0;
	if (start < 0)
		start = 0;
	str = (char *)ft_calloc(sizeof(char), len + 1);
	if (ft_strlen(s) > start)
	{
		while (s[start] && len-- > 0)
			str[i++] = (char)s[start++];
		str[i] = 0;
	}
	return (str);
}
