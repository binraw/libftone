/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:34:05 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/10 10:39:28 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *destination;
	const unsigned char *source;
	const unsigned char *temp;
	size_t i;
	size_t y;
	
	destination = dest;
	temp = src;
	source = src;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	y = 0;
	while (y < n)
	{
		destination[i] = temp[y];
		y++;
		i++;
	}
//	destination[i] = temp[y];
	
	
	return (dest);
}

		
