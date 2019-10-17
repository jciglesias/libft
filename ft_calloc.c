/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 20:46:44 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/17 20:57:48 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *str;

	if (nmemb == 0 || size == 0 || !(str = malloc(size * nmemb)))
		return (NULL);
	while (nmemb-- > 0)
		*(str++) = 0;
	return (str);
}
