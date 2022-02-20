char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				index_len;
	unsigned int	index;

	index_len = 0;
	index = 0;
	while (dest[index_len] != '\0')
	{
		index_len++;
	}
	while (index < nb && src[index] != '\0')
	{
		dest[index_len] = src[index];
		index_len++;
		index++;
	}
	dest[index_len] = '\0';
	return (dest);
}
