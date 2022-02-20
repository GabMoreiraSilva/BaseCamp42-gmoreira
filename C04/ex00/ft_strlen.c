int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		index++;
		str++;
	}
	return (index);
}
