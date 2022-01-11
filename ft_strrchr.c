#include "libft.h"

char *ft_strrchr(char *s, int c)
{
	int i;

	i = ft_strlen((char *)s) + 1;

	while (i > -1)
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}