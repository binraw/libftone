/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:54:34 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/10 10:39:44 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *string, int searchedChar)
{
    int i;
    char *p;

    i = 0;
    p = (char *) string;
    while(p[i] != '\0')
    {
        if (p[i] == searchedChar)
            {
               
                return (&p[i]);
            }

            i++;
    }

    return NULL;
}