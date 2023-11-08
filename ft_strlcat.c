/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:37:04 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/07 13:37:08 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
size_t ft_strlen(char *str,  size_t size)
{
	size_t i;

	i = 0;
	while (str[i] != '\0' && i < size)
	{	
		i++;
	}
	return (i);
}
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t y;

    i = 0;

	i = ft_strlen(dest, size);
    y = 0;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
        y++;
        
	}
	dest[i] = '\0';
	return (i);
}

int main(void)
{
	char un[] = "trois";
	char deux[] = "quatre";

	printf("%d\n",ft_strlcat(un,deux,7));
	return (0);
}