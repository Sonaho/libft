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

typedef struct s_split
{
	int		pos;
	int		wc;
}	t_split;

static void	ft_wc(char const *s, char c, t_split *sp)
{
	int	i;
	int	cnt;
	int	wc;

	i = 0;
	cnt = 0;
	wc = 0;
	while (s[i])
	{
		if (s[i] == c && i > 0 && s[i - 1] != c)
		{
			sp[cnt].pos = i - wc;
			sp[cnt].wc = wc;
			wc = 0;
			cnt ++;
		}
		else
			wc ++;
		if ((s[i -1] == c && s[i] == c) || (i == 0 && s[i] == c))
			wc --;
		i ++;
	}
	sp[cnt].pos = i - wc;
	sp[cnt].wc = wc;
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
	int		cnt;
	char	**split;
	t_split	*sp;

	cnt = ft_countchars(s, c);
	sp = malloc(sizeof(t_split) * cnt);
	if (sp == NULL)
		return (NULL);
	ft_wc(s, c, sp);
	split = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	split[cnt] = 0;
	while (cnt > 0)
	{
		split[i] = ft_substr(s, sp[i].pos, sp[i].wc);
		i ++;
		cnt --;
	}
	free(sp);
	return (split);
}
