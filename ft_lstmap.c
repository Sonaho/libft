#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_lst;
    int     size;

    if (!lst)
        return ;
    size = ft_lstsize(lst);
    new_lst = (t_list *)malloc(sizeof(t_list) * size);
    while (lst)
    {
        new_lst->content = f(lst->content);
        if (!new_lst)
            ft_lstdelone(*lst, del);
        else
            new_lst ++;
    }
    return (new_lst);
}