/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:44:04 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:14:47 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

int	ft_is_charset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		len;
	char	*final;

	i = 0;
	final = malloc(sizeof(char *) * ft_strlen(s1) + 1);
	if (final == NULL)
		return (NULL);
	while (ft_is_charset(s1[i], (char *)set))
		s1++;
	len = ft_strlen(s1) - 1;
	while (len >= 0 && ft_is_charset(s1[len], (char *)set))
		len--;
	while (s1[i] && i <= len)
	{
		final[i] = s1[i];
		i++;
	}
	return (final);
}
