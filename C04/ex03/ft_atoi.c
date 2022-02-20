int	ft_atoi(char *str)
{
	int	index;
	int	print;
	int	signal;

	index = 0;
	print = 0;
	signal = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			signal *= -1;
		if (str[index] == '+')
			signal *= 1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		print = print * 10 + str[index] - '0';
		index++;
	}
	return (signal * print);
}
