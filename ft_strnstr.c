#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (!haystack || !needle)
		return (NULL);

	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && i + j < len && haystack[i +j] == needle[j])
			j++;
		if (needle[j] == 0)
			return ((char *)haystack + i);
		i++;
	}

	return (NULL);
}