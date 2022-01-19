/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:04 by aalmela-          #+#    #+#             */
/*   Updated: 2022/01/18 13:57:15 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(s) < (int)len)
		ret = (char *)malloc(ft_strlen(s) + 1);
	else if (ft_strlen(s) < (int)start)
		ret = (char *)malloc(1);
	else
		ret = (char *)malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ret[j] = s[i];
			j ++;
		}
		i ++;
	}
	ret[j] = '\0';
	return (ret);
}
