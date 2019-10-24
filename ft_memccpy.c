/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:22:28 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/24 18:00:57 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst1;
	unsigned char		*src1;
	int					i;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!n)
		return (dst);
	while (n-- > 0 && src1[i])
	{
		dst1[i] = src1[i];
		if (dst1[i] == (unsigned char)c)
			return ((void *)dst + (i + 1));
		i++;
	}
	return (NULL);
}
