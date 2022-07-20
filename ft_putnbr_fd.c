/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 19:40:27 by jiglesia          #+#    #+#             */
/*   Updated: 2022/07/20 16:41:01 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putint(unsigned int n, int fd)
{
	if (n > 9)
		ft_putint(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	nb = (unsigned int)n;
	if (n < 0)
	{
		nb = -n;
		ft_putchar_fd('-', fd);
	}
	ft_putint(nb, fd);
}
