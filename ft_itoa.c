/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:23:03 by aalmela-          #+#    #+#             */
/*   Updated: 2022/01/19 17:10:43 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_countnum(int num)
{
	int	i;

	i = 0;
	if (num < 0);
		num = num * -1;
	printf("ft_countnum %d \n", i);
	while (num > 0)
	{
		num /= 10;
		i++;
		printf("ft_countnum %d \n", i);
	}
	return (i);
}

static void	*ft_casezero(void)
{
	char	*ret;

	ret = (char *)malloc(2);
	ret[0] = 48;
	ret[1] = 0;
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*ret;
	char	*tmp;
	int		cnt;
	int		i;

	i = 0;
	if (n == 0)
		ret = ft_casezero();
	else
	{
		cnt = ft_countnum(n);
		ret = (char *)malloc(cnt);
		ret[0] = 0;
		while (n > 0)
		{
			ret[(cnt - 1) - i] = (n % 10) + 48;
			n /= 10;
			i ++;
		}
		ret[i] = 0;
	}
	return (ret);
}
