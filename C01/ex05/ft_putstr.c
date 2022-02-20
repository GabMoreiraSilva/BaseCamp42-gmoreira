#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		write (1, &c, 1);
		str++;
	}	
}
