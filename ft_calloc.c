/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:56:18 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:22:53 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	while (n > 0)
	{
		str[i] = 0;
		i++;
		n--;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	char	*s;

	i = 0;
	s = malloc(sizeof(char) * (count * size));
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		ft_bzero(s, size);
		i++;
	}
	return (s);
}
