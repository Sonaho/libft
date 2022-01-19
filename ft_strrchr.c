/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:13:14 by aalmela-          #+#    #+#             */
/*   Updated: 2022/01/14 14:35:43 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!ft_isascii(c))
		return ((char *)s);
	i = ft_strlen((char *)s) + 1;
	while (i > -1)
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
