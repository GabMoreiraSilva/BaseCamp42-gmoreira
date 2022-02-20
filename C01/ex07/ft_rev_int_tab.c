void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 1;
	while (i < size)
	{
		temp = tab[size - i];
		tab[size - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
