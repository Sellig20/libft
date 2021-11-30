/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:53:54 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 17:23:32 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char	*str_src;
	char	*str_dst;

	i = 0;
	str_src = (char *)src;
	str_dst = (char *)dst;
	if (!str_src && !str_dst)
		return (0);
	while (n > 0)
	{
		str_dst[i] = str_src[i];
		i++;
		n--;
	}
	str_dst[i] = '\0';
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	const unsigned char *source;

	tmp = dst;
	source = src;
	if (tmp < source)
		return (ft_memcpy(tmp, source, len));
	if (tmp == source || !len)
		return (tmp);
	return (ft_memcpy(tmp, source, len));
}
