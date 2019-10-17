/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 21:24:37 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/17 21:25:49 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	if (little == "\0")
		return (big);
	while (len-- > 0)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && big[i + j] && big[i + j] == little[j])
			{
				if (little[j + 1] == 0)
					return (&big[i]);
				j++;
			}
		}
		i++;
	}
}
