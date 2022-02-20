#include <unistd.h>

void	ft_putchar(char n);

void	print_col(char a, char b, int x);

void	print_row(char l, int x, int y);

void	ft_putchar(char n)
{
	write (1, &n, 1);
}

void	print_col(char a, char b, int x)
{
	int		counter;

	counter = 0;
	ft_putchar(a);
	while (counter < x -2)
	{
		ft_putchar(b);
		counter++;
	}
	if (x > 1)
	{
		ft_putchar(a);
	}
	write (1, "\n", 1);
}

void	print_row(char l, int x, int y)
{
	int		counter_y;
	int		counter_x;

	counter_y = 0;
	counter_x = 0;
	while (counter_y < y -2)
	{
		ft_putchar(l);
		while (counter_x < x -2)
		{
			write (1, " ", 1);
			counter_x++;
		}
		if (x > 1)
		{
			ft_putchar(l);
		}
		write (1, "\n", 1);
		counter_y++;
		counter_x = 0;
	}
}
