char	*ft_strcat(char *dest, char *src)
{
	int	index_len;
	int	index;

	index_len = 0;
	index = 0;
	while (dest[index_len] != '\0')
	{
		index_len++;
	}
	while (src[index] != '\0')
	{
		dest[index_len + index] = src[index];
		index++;
	}
	dest [index_len + index] = '\0';
	return (dest);
}
