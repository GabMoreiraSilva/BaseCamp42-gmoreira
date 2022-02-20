void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	len;

	count = -1;
	len = -1;
	while (len++ <= size)
	{	
		while (count++ <= size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				temp = tab[count + 1];
				tab[count + 1] = tab[count];
				tab[count] = temp;
			}
		}
		count = -1;
	}	
}
