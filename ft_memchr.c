/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:53:29 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/09 16:53:30 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *ptr, int ch, size_t count)
{
	int i;
    char *p;

    i = 0;
    p = (char *) ptr;
    while(p[i] != '\0' && i < count)
    {
        if (p[i] == ch)
            {

                return (&p[i]);
            }

            i++;
    }

    return NULL;
}


int main(void)
{
	char lich[] = "une belle corde";
	printf("%s\n", ft_memchr(lich,'c',13));
}
