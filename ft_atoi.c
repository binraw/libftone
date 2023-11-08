/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:19:54 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/06 15:19:57 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int white_space(char *str)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (str[i] != '\0' && str[i] == ' ') 
    {
        i++;
        count++;
    }
    return (count);
}
int ft_atoi(char *str)
{
    int result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0 + white_space(str);
    if (str[i] == '-')
    {
        sign = -1;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
    {
        result = ((result * 10) + (str[i] - 48)) * sign;
    }
    return (result);   
}
