#include "libft.h"

int ft_memcmp(void *s1, void *s2, unsigned int n)
{
	int ret;

	ret = ft_strncmp(s1, s2, n);

	if (ret > 0)
		return (1);
	if (ret < 0)
		return (-1);
	return (0);
}