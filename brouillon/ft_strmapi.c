#include <libc.h>

int ft_strlen(char *str)
{
				int i;

				i = 0;
				while (str[i])
								i++;
				return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
				unsigned int len;
				unsigned int i;
				char *final;

				len = ft_strlen(s);
				i = 0;
				if (!s && !f)
								return (NULL);
				final = malloc(sizeof(char) * (len + 1));
				if (final == NULL)
								return (NULL);
				while (s[i])
				{
								final[i] = f(i, s[i]);
								i++;
				}
				final = '\0';
				return (final);
}
								
