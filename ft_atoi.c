/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:19:54 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/14 14:46:33 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	white_space(const char *str)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
		count++;
	}
	return (count);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0 + white_space(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		result = ((result * 10) + (str[i] - 48));
		i++;
	}
	return (result * sign);
}

// int main(void)
// {
//     char nu[] = "  -4323232";
//     printf("%d\n", ft_atoi(nu));
// }
