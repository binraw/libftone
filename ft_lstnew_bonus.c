/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:26:53 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/17 14:28:41 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *element;
    
    element = malloc(sizeof(t_list));
    if(!element)
        return (NULL);
    element ->content = content;
    element ->next = NULL;
    return (element);
}