/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:26:28 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:08:46 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	one;
	char	*it;
	int		i;

	one = (const char)c;
	it = (char *)s;
	i = 0;
	while (n > 0)
	{
		if (it[i] == one)
			return (&it[i]);
		i++;
		n--;
	}
	return (NULL);
}
