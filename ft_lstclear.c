#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    size_t  size;
    t_list  *last;

    if (!lst)
        return ;
    last = ft_lstlast(*lst);
    while (last)
    {
       ft_lstdelone(last, del);
        last = ft_lstlast(*lst);
    }
}
