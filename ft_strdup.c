/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:42:18 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 17:26:20 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

int	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s;

	s = malloc(sizeof(char) * ft_len(s1) + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = (char)s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
