#include 'libft.h'

void ft_lstiter(t_list *lst, void (*f)(void *)) {
    if (lst == NULL || f == NULL)
        return (NULL);

    t_list *current;
    current = lst;

    while (current != NULL) 
    {
        f(current->content);

        current = current->next;
    }
}
