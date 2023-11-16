/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:15:21 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/16 16:48:38 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_malloc(char **str, int index)
{
	while (index >= 0)
	{
		free(str[index]);
		index--;
	}
	free(str);
}

int	ft_search(const char *s, char c, int start)
{
	int	i;

	i = start;
	if (s[i] == c)
	{
		return (1);
	}
	return (0);
}

int	ft_count_words(char const *s, int i, int count, char c)
{
	int	y;

	y = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && (ft_search(s, c, i) != 1))
		{
			i++;
			y++;
		}
		if (y != 0)
			count++;
		while (s[i] != '\0' && (ft_search(s, c, i) == 1))
			i++;
	}
	return (count);
}

int	ft_count_letters(unsigned int start, char const *s, char c)
{
	while (s[start] && (ft_search(s, c, start) != 1))
		start++;
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	int				i;
	int				count;
	unsigned int	start;

	start = 0;
	i = 0;
	count = ft_count_words(s, i, 0, c);
	str = ft_calloc((count + 1), sizeof(char *));
	if (!str)
		return (NULL);
	while (count > i)
	{
		while (s[start] && (ft_search(s, c, start) == 1))
			start++;
		str[i] = ft_substr(s, start, ((ft_count_letters(start, s, c)) - start));
		if (str[i] == NULL)
		{
			ft_free_malloc(str, i - 1);
			return (NULL);
		}
		start = ft_count_letters(start, s, c);
		i++;
	}
	return (str);
}
//remplace *s par start
// int main(void)
// {
//     const char bol[] = " split this for   me  !       ";
//     char c = ' ';
//     // printf("%s\n", ft_split(bol,c));
//     ft_split(bol,c);
// }