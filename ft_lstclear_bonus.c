/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:43:07 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/20 09:54:23 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)) {
    if (lst == NULL || *lst == NULL || del == NULL)
        return;

    t_list *current = *lst;
    t_list *next;

    while (current != NULL)
    {
        next = current->next;

        del(current->content);

        free(current);

        current = next;
    }

    *lst = NULL;
}
