/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:32:51 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/09 16:30:28 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *source)
{
    size_t i;
    size_t y;
    char *pointer;

    
    y = 0;
    i = ft_strlen(source) + 1;
    pointer = malloc(i * sizeof(char));
    while (y < i)
    {
        pointer[y] = source[y];
        y++;
    }    
    pointer[y] = '\0';
    return (pointer);
}