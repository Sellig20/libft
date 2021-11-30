/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:57:34 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:12:35 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	one;
	int		i;

	one = (const char )c;
	i = 0;
	while (s[i])
	{
		if (s[i] == one)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
