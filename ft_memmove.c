/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:34:05 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/07 13:15:10 by rtruvelo         ###   ########.fr       */
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
int main ()
{
  char str[] = "memmove can be very useful......";
  char src[] = "source";
  //ft_memmove (str+20,str+15,11);
 // memmove (str+20,str+15,11);
  //puts (str);
  //printf("%s\n",memmove(str+15,str+15,4));
  printf("%s\n",ft_memmove(str+15,str+15,4));
  return 0;
}
		
