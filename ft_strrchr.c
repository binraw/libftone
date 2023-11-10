/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:36:15 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/10 12:05:57 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_strlen(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return (i);
// }

char *ft_strrchr(const char *string, int searchedChar)
{
    int i;
    char *p;

    p = (char *)string;
    i = ft_strlen(p);
    while (i >= 0)
    {
        if (p[i] == searchedChar)
        {

            return (&p[i]);
        }

        i--;
    }

    return NULL;
}

