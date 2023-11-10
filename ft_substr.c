/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:55:00 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/10 10:40:12 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *pointer;
    unsigned int i;
    
    pointer = malloc(len * sizeof(char));
    if(!pointer)
    {
        return (NULL);
    }
    i = 0;
    while (s[start] != '\0' && i < len)
	{
		pointer[i] = s[start];
		i++;
        start++;
	}
	pointer[i] = '\0';
    return(pointer);
    
}

