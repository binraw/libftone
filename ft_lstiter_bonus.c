/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:43:12 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/20 09:53:40 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *)) {
    if (lst == NULL || f == NULL)
        return ;

    t_list *current;
    current = lst;

    while (current != NULL) 
    {
        f(current->content);

        current = current->next;
    }
}
