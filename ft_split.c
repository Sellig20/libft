/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:32:50 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 17:25:37 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

int	ft_is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	ft_count_word(char *str)
{
	int	is_word;
	int	i;
	int	count;

	is_word = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i]))
			is_word = 0;
		else if (is_word == 0 && !ft_is_sep(str[i]))
		{
			is_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len_word(char *str, int pos)
{
	int	count;

	count = 0;
	while (str[pos])
	{
		if (ft_is_sep(str[pos]))
			return (count);
		count++;
		pos++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(char *) * (ft_count_word(str) + 1));
	if (tab == NULL)
		return (NULL);
	while (str[i])
	{
		if (!ft_is_sep(str[i]))
		{
			if (k == 0)
			{
				tab[j] = malloc(sizeof(char) * (ft_len_word(str, i) + 1));
				if (tab[j] == NULL)
					return (NULL);
			}
			tab[j][k] = str[i];
			tab[j][k + 1] = '\0';
			k++;
			if (ft_is_sep(str[i + 1]))
			{
				k = 0;
				j++;
			}
		}
		i++;
	}
	if (!ft_is_sep(str[i]) && ft_len(str) != 0)
		j++;
	tab[j] = NULL;
	return (tab);
}
