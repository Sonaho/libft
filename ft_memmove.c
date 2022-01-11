#include "libft.h"

void *ft_memmove(void *dest, void *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i != n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}