/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:55:05 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/09 13:09:25 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
       int i;

    i = 0;
    while (s[i] != '\0')
    {
        write(fd,&s[i],1);
        i++;
    }
    write(fd,"\n",1);
}
int main(void)
{
    char lo[] = "le chien";
    ft_putendl_fd(lo, 1);
}
