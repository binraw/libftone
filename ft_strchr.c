/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:54:34 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/10 13:56:16 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *string, int searchedChar)
{
    size_t i;
    char *p;

    i = 0;
    if (!string)
        return(NULL);
    p = (char *) string;
    while(p[i] != '\0')
    {
        if (p[i] == searchedChar)
            {
                return (&p[i]);
            }

            i++;
    }
     if (p[i] == searchedChar)
            {
                return (&p[i]);
            }

    return NULL;
}

// int main(void)
// {
//     const char ba[] = "weshcommentca";

//     printf("%s\n", ft_strchr(ba, 'e'));
// }