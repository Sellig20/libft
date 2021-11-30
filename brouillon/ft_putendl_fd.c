#include <libc.h>

void	ft_putendl_fd(char *s, int fd)
{
				ft_putstr_fd(s, fd);
				ft_putchar_fd('\n', fd);
}

{
				int i;

				i = 0;
				while (s[i])
				{
								write(fd, &s[i], 1);
								i++;
				}
				write(fd, "\n", 1);
}
