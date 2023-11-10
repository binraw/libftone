/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:43:33 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/10 12:38:03 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t i;
    
    i = 0;
    str = (char) ft_strdup(s);
    if (!str)
        return (NULL);
    while (str[i])
    {
        str[i] = (*f)(i , str[i]);
        i++;
    }
    return (str); 
}