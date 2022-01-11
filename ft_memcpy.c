#include "libft.h"

void *ft_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	if (dest == src)
		return (dest);

	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i ++;
	}
	return (dest);
}