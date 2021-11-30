#include <libc.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	one;
	int		len;

	one = (const char)c;
	len = 0;
	while (s[len])
		len++;
	while (s[len] - 1)
	{
		if (s[len] == one)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
