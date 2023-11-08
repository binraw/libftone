/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:54:34 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/07 15:54:37 by rtruvelo         ###   ########.fr       */
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
int main() {
    
 printf("%s\n", ft_strchr("hello",101));
    return 0;
}