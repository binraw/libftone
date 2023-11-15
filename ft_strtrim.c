/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:19:34 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/15 12:11:55 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_char_inset(char c, char const *set)
{
    size_t i;

    i = 0;
    while(set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int start;
    int end;
    int i;
    

    start = 0;
    end = ft_strlen(s1);
    i = 0;
    while(s1[start] != '\0' && ft_char_inset(s1[start], set))
        start++;
    while(end  > start && ft_char_inset(s1[end], set) && s1[end])
        end--;
    str = malloc(sizeof(*s1) * (end - start) + 1);
    if (!str)
        return (NULL);
    while (start < end)
    {
        str[i] = s1[start];
        i++;
        start++;
    }
    str[i] = '\0';
   
    return (str);
}