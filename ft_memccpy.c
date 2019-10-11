/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:22:28 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/08 12:17:36 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char*dst1;
	unsigned char*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!n || dst == src)
		return (dst);
	while (n-- > 0)
	{
		*dst1++ = *src1++;
		if (*dst1 == (unsigned char)c)
			return ((void *)dst);
	}
	return (NULL);
}
