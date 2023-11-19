#include 'libft.h'

void ft_lstclear(t_list **lst, void (*del)(void *)) {
    if (lst == NULL || *lst == NULL || del == NULL)
        return (NULL);

    t_list *current = *lst;

    while (current != NULL)
    {
        next = current->next;

        del(current->content);

        free(current);

        current = next;
    }

    *lst = NULL;
}
