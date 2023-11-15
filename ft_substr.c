/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:55:00 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/14 16:04:18 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	size_t	i;
    // unsigned int i;
    if (start > ft_strlen(s))
		len = 0;
	pointer = malloc((len + 1) * sizeof(char));
	if (!pointer)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		pointer[i] = s[start];
		i++;
		start++;
	}
	pointer[i] = '\0';
	return(pointer);
}
// int main(void)
// {
//     char const s[] = "";
//     printf("%s\n", ft_substr(s,1,1));
// }

