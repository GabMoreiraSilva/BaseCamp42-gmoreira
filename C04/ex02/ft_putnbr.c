#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		signal;
	int		index;
	char	print[11];

	index = 0;
	signal = 1;
	if (nb < 0)
		signal = -1;
	if (nb == 0)
	{
		write (1, &"0", 1);
		return ;
	}
	while (nb != 0)
	{
		print[index] = (((nb % 10) * signal) + 48);
		nb = nb / 10;
		index++;
	}
	if (signal < 0)
		write (1, &"-", 1);
	while (--index >= 0)
	{
		write (1, &print[index], 1);
	}
}
