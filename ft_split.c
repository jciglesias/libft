/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 22:15:41 by jiglesia          #+#    #+#             */
/*   Updated: 2019/10/17 22:18:23 by jiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		every_char(char *str, int pos, char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		if (str[pos] == c[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_letters(char *str, int letrs, char *c)
{
	while (str[letrs] && !every_char(str, letrs, c))
		letrs++;
	return (letrs);
}

int		ft_count_words(char *str, int spos, int cont, char *c)
{
	while (str[spos] && every_char(str, spos, c))
		spos++;
	if (!str[spos])
		return (cont);
	while (str[spos] && !every_char(str, spos, c))
		spos++;
	return (ft_count_words(str, spos, cont + 1, c));
}

char	**ft_decompose(char **tab, char *str, int spos, char *c)
{
	int letrs;
	int i;
	int tpos;

	tpos = 0;
	while (str[spos])
	{
		while (str[spos] && every_char(str, spos, c))
			spos++;
		if (!str[spos])
			break ;
		letrs = ft_count_letters(str, spos, c);
		if (!(tab[tpos] = (char*)malloc(sizeof(char) * (letrs + 1 - spos))))
			return (0);
		i = 0;
		while (str[spos] && !every_char(str, spos, c))
		{
			tab[tpos][i] = str[spos];
			spos++;
			i++;
		}
		tab[tpos++][i] = '\0';
	}
	tab[tpos] = 0;
	return (tab);
}

char	**ft_split(char const *str, char *charset)
{
	char**tab;

	if (str)
	{
		if (!(tab = (char**)malloc(sizeof(char*) *
								(ft_count_words(str, 0, 0, charset) + 1))))
			return (NULL);
		return (ft_decompose(tab, str, 0, charset));
	}
	return (NULL);
}
