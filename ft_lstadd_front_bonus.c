/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:52:14 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/17 15:08:07 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list  *element;
    
    element = ft_lstnew(new);
    element->content = element;
    //rajouter la fonction de calcul de taille pour savoir si return null ou pas
    element->next = *lst;
    // return (element);
}