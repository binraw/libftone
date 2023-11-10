/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:53:37 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/10 11:06:11 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
	void *pointer;
    // size_t i;

    // i = 0;
    
    pointer =  malloc(num* (sizeof(size)));

    if (!pointer)
        return (NULL);

        
    ft_bzero(pointer, num);
   
    return (pointer);

}
