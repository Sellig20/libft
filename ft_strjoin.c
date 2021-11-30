/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:14:20 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:13:04 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_len_pre_su(char *pre, char *su)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	total_len = ((total_len + ft_strlen(su)) + (total_len + ft_strlen(pre)));
	return (total_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*str1;
	char	*str2;
	char	*final;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	len = ft_len_pre_su(str1, str2);
	final = malloc(sizeof(char) * len + 1);
	if (final == NULL)
		return (NULL);
	final = ft_strcat(str1, str2);
	return (final);
}
