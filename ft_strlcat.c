/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:37:04 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/14 14:24:58 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #include "libft.h"
// size_t ft_strlen(char *str,  size_t size)
//  {
//  	size_t i;

//  	i = 0;
// 	while (str[i] != '\0' && i < size)
// 	{	
// 		 i++;
// 	}
//  	return (i);
//  }
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t y;

    i = 0;
	i = ft_strlen(dest);
    y = 0;
	while(src[y] != '\0' && y < size)
	{
		dest[i] = src[y];
		i++;
        y++;   
	}
	dest[i] = '\0';
	return (i);
}

