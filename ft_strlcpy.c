/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:13:08 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/08 11:16:19 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	/*if (ft_strlen(s2) > n)
	{
		return (n);
	}*/
	return (ft_strlen(s2));
}

int main(void)
{
	char un[5] = "trois";
	char deux[6] = "quatre";

	printf("%d\n", ft_strlcpy(un, deux, 6));
	printf("%s\n", un);
	//	printf("%d\n",strlcpy(un,deux,5));
	return (0);
}
