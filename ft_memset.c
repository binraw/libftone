/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:23:11 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/08 11:10:53 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t i;
	unsigned char *p;

	i = 0;
	p = pointer;
	while (i < count)
	{
		p[i] = (unsigned char)value;
	       i++;
	}
	return (pointer);
}

int main(void)
{
	char str[] = "almost every programmer should know memset!";


    ft_memset(str,'-',6);
   // memset(str,'-',6);
   printf("%s\n", str );
}
