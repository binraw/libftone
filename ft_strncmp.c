/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:59:43 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/08 12:37:43 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
    {
        if (str1[i] > str2[i])
        {
            return (1);
        }
        else if (str1[i] < str2[i])
        {
            return (-1);
        }
        i++;
    }
    return (0);

}
