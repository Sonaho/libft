void *ft_memset(void *s, int c, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = c;

		i++;
	}
	return (s);
}