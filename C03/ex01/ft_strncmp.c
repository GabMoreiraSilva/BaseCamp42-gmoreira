int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				value;

	value = 0;
	index = 0;
	while ((s1[index] || s2[index]) && index < n)
	{
		if (s1[index] != s2[index])
		{
			value = s1[index] - s2[index];
			break ;
		}
		index++;
	}
	return (value);
}
