/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:06:59 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:14:31 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	one;
	int i;

	one = (const char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == one)
			return ((char *)s);
			i++;
	}
	return (NULL);
}
