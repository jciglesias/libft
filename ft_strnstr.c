/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 21:24:37 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/29 16:09:45 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && len-- > 0)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && big[i + j] && big[i + j] == little[j] &&
				(len - j) > 0)
			{
				if (little[j + 1] == 0)
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
