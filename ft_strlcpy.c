/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:28:53 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:13:25 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize == 0)
	{
					while (src[i])
									i++;
					return (i);
	}
	while (src[i] && (i < (dstsize - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
					dst[i] = '\0';
	while (src[i])
					i++;
	return (i);
}
