#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list t_last;

    if (!lst || !new)
        return;
    if (*lst == NULL)
        return;
    else
    {
        t_last = ft_lstlast(*lst);
        t_last->next = new;
    }
}