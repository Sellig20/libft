/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:51:08 by jecolmou          #+#    #+#             */
/*   Updated: 2021/11/29 16:09:33 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = b;
	if (!str)
		return (0);
	while (len > 0)
	{
		str[i] = c;
		i++;
		len--;
	}
	return (str);
}
