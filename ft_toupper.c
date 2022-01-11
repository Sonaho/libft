#include "libft.h"

int ft_isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

int ft_islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

int ft_toupper(int c)
{
	if (ft_isalpha(c))
	{	
		if (ft_islower(c))
			return (c - 32);
		return (c);
	}
	else
		return (-1);
}

