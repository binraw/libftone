#include 'libft.h'
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *element;
	t_list *last;

    element = ft_lstnew(new);
    if(!element)
		return (NULL);
	if (*lst == NULL)
		*lst = element;
	else
		{
			last = ft_lstlast(*lst);
			last->next = element;
		}
}
