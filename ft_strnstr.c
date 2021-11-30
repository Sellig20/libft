/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:21:09 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:14:18 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char	*result;

	result = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && len > 0)
	{
		if (haystack[i] == needle[0])
		{
			result = (char *)haystack + i;
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return (&((char*)haystack)[i]);
				j++;
			}
			result = 0;
		}
		i++;
		len--;
	}
	return (result);
}
