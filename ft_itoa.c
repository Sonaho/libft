/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:23:03 by aalmela-          #+#    #+#             */
/*   Updated: 2022/01/19 16:31:54 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*ret;
	char	*tmp;
	int		mod;
	int		i;

	i = 1;
	mod = 0;
	tmp = (char)malloc(i);
	while (n > 0)
	{
		mod = n % 10;
		n = n / 10;
		tmp[0] = mod + 48;
		break ;
	}
	return (tmp);
}
