/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:34:36 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/09 16:43:48 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    char *str;
    size_t i;

    str = s;
    i = 0;
    while(str[i])
    {
        str[i] = (*f)(i ,str);
        i++;
    }
}