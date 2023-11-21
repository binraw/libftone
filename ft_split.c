/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:15:21 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/21 13:24:05 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_malloc(char **str, int index)
{
	while (index >= 0)
	{
		free(str[index]);
		index--;
	}
	free(str);
	return (NULL);
}

static int	ft_count_words(char const *s, int i, int count, char c)
{
	int	y;

	y = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && (s[i] != c))
		{
			i++;
			y++;
		}
		if (y != 0)
			count++;
		while (s[i] != '\0' && (s[i] == c))
			i++;
	}
	return (count);
}

static int	ft_count_letters(unsigned int start, char const *s, char c)
{
	while (s[start] && (s[start] != c))
		start++;
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	int				i;
	int				count;
	unsigned int	start;

	if (s == NULL)
		return (NULL);
	start = 0;
	i = 0;
	count = ft_count_words(s, i, 0, c);
	str = ft_calloc((count + 1), sizeof(char *));
	if (!str)
		return (NULL);
	while (count > i)
	{
		while (s[start] && (s[start] == c))
			start++;
		str[i] = ft_substr(s, start, ((ft_count_letters(start, s, c)) - start));
		if (str[i] == NULL)
			return (ft_free_malloc(str, i - 1));
		start = ft_count_letters(start, s, c);
		i++;
	}
	return (str);
}
// #include "stdio.h"
// int main(void)
// {
//     // const char *bol = NULL;
// 	// char c = ' ';

//     char **str = ft_split("lolol", ' ');
// 	if (!str)
// 		write(1,"ok",2);
//     // ft_split(bol,c);
// }
