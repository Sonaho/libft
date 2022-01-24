/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:31:17 by aalmela-          #+#    #+#             */
/*   Updated: 2022/01/24 14:16:48 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*pos;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	pos = lst;
	while (pos)
	{
		if (!new_lst)
			new_lst = ft_lstnew((*f)(pos->content));
		else
			ft_lstadd_back(&new_lst, ft_lstnew((*f)(pos->content)));
		if (!new_lst->content)
			(*del)(new_lst->content);
		pos = pos->next;
	}
	return (new_lst);
}
