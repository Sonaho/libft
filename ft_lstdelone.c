#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return ;
    del((void *)lst->content)
    free (lst);
}
