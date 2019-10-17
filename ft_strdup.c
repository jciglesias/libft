/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 21:09:56 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/17 21:12:02 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int			i;
	char		*dup;

	i = 0;
	while (s[i])
		i++;
	if (!(dup = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (i-- > 0)
		*(dup++) = *(s++);
	return (dup);
}
