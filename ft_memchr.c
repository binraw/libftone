/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:53:29 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/15 21:21:06 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)ptr;
	while (i < count)
	{
		if (p[i] == (char)ch)
		{
			return (&p[i]);
		}
		i++;
	}
	return (NULL);
}
// int main(void)
// {
//     const void *s; 
// printf("%d\n",ft_memchr(s, 2 + 256, 3) == s + 2); 
// }
