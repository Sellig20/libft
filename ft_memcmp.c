/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:54:13 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:09:00 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	char			*str_s1;
	char			*str_s2;

	i = 0;
	str_s1 = (char *)s1;
	str_s2 = (char *)s2;
	while (str_s1[i] && str_s2[i] && str_s1[i] == str_s2[i] && i < n - 1)
		i++;
	return (str_s1[i] - str_s2[i]);
}
