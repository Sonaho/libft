/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:06:48 by aalmela-          #+#    #+#             */
/*   Updated: 2022/01/19 15:15:48 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t ft_wordlen(const char *s, char c)
{
	size_t	size;
	size_t	i;

	size = 0;
	i = 0;
	while (s[i] && s[i] != c)
	{
		size ++;
		i ++;
	}
	return (size);
}

static int	ft_countchars(char const *s, char c)
{
	int		i;
	int		r;

	i = 0;
	r = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (i > 0)
				if (s[i - 1] != c)
					r ++;
		}
		i ++;
	}
	if (s[i] == 0 && s[i -1] != c && i > 0)
		r ++;
	return (r);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		y;
	int		cnt;
	char	**split;

	cnt = ft_countchars(s, c);
	printf("\nTamaño countchar %d \n",cnt);
	split = (char **)ft_calloc(cnt + 1, sizeof(char *));
	if (split == NULL)
		return (NULL);
	i = 0;
	j = 0;
	y = 0;
	while (cnt > 0)
	{
		while (s[i] == c)
			i ++;
		if (s[i])
		{
			split[j] = (char *)ft_calloc(ft_wordlen(s + i, c) + 1, sizeof(char));
			if (!split[j])
				return (NULL);
			while (s[i] && s[i] != c)
				split[j][y++] = s[i++];
			j ++;
		}
		cnt --;
	}
	split[j] = 0;
	return (split);
}
