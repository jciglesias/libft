/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 21:41:00 by jiglesia          #+#    #+#             */
/*   Updated: 2019/11/07 23:56:26 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		total_lens;
	int		i;
	int		j;
	char	*str;

	i = -1;
	j = -1;
	if (!s1 && !s2)
		return (NULL);
	if (!s1 || !s2)
		return ((!s1) ? ft_strdup(s2) : ft_strdup(s1));
	total_lens = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc((total_lens + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[total_lens] = '\0';
	while ((char)s1[++i])
		str[i] = (char)s1[i];
	while ((char)s2[++j])
		str[i++] = (char)s2[j];
	return (str);
}
