#include <libc.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
				unsigned int i;

				if (!s && !f)
								return (NULL);
				while (s[i])
				{
								(*f)(i, &s[i]);
								i++;
				}
}

