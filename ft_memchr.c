#include "libft.h"

void *ft_memchr(void *s, int c, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}