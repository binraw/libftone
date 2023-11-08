/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:01:04 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/07 12:37:48 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char *dest;
	const unsigned char *src;
	size_t i;

	dest = destination;
	src = source;
	i = 0;
	while(i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
/*
struct {
  char name[40];
  int age;
} person, person_copy;*/

int main ()
{
  char myname[] = "Pierre ta mere";
	char name[30];
	printf("%s\n",ft_memcpy(name,myname,sizeof(myname)));
 

  return 0;
}
