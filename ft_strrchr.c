/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:36:15 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/16 14:11:50 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int		i;
	char	*p;
	char	search;

	p = (char *)string;
	search = (char) searchedChar;
	i = ft_strlen(p);
	while (i >= 0)
	{
		if (p[i] == search)
		{
			return (&p[i]);
		}
		i--;
	}
	return (NULL);
}
