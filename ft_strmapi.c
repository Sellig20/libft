/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:57:14 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:13:51 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*final;

	len = ft_strlen(s);
	i = 0;
	if (!s && !f)
		return (NULL);
	final = malloc(sizeof(char) * (len + 1));
	if (final == NULL)
		return (NULL);
	while (s[i])
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
