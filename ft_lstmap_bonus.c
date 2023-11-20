/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:05:55 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/20 10:55:04 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *current;
	t_list *newcontent;
	t_list *newlst;
	
	current = lst;
	if (lst == NULL || f == NULL)
        return (NULL);

	newlst = NULL;
    while (current != NULL) 
    {
       newcontent = ft_lstnew(f(current->content));
	   
        if (!newcontent)
		{
			ft_lstclear(&newcontent, del);
		}
		ft_lstadd_back(&newlst,newcontent);
		current = current->next;
    }
	return (newlst);
}