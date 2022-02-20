#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	x;

	x = 'a';
	while (x != '{')
	{
		write (1, &x, 1);
		x++;
	}
}
