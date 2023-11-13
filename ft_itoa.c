/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:30:31 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/13 15:36:38 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// premiere fonction qui va compter la len
// deux fonctions qui recup les nombre de chaque index (pos)(neg)
// int ft_int_len(int number)
// {
//     int i;
//     int y;

//     i = 1;
//     y = 1;
//     if (number >= 10)
//     {
//         while(i < number)
//         {
//           i = i *10;
//           y++;  
//         }
//         if ((i / number) > 1)
//             y--;
            
//     }
//     return (y);
// }
int ft_int_len(int number)
{
    int y;
    
    y = 0;
    if (number != 0)
    {
        while(number > 0)
        {
         number = number / 10;
          y++;  
        }     
    }
    else if (number == 0)
        y++;
    return (y);
}

int ft_change_sign(int number)
{
         number *= -1; 
    return (number);
}

char ft_add_pos_number(int len, int n, char str)
{
    
}
char *ft_itoa(int n)
{
    char *str;
    int  len;
    int sign;
    int i;

    i = 0;
    sign = 0;
    if (n < 0)
    {
        if (n == -2147483648)
            return (ft_strdup("-2147483648"));
        sign = 1;   
        n *= -1;
    }
    len = ft_int_len(n);
    str = malloc((len + 1 + sign) * sizeof(char));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (sign == 1)
    {
        while(len)
        {
            str[len--] = (n % 10) + '0';
            n = n / 10;
            i++;
        } 
        str[0] = '-';
        str[len + i + 1] = '\0';
   } 
   else 
   {
        while(len)
        {
            str[len - 1] = (n % 10) + '0';
            n = n / 10;
            len--;
        }     
   } 
        return (str);
}
// int main(void)
// {
//     // printf("%d\n", ft_int_len(11111));
//     printf("%s\n", ft_itoa(-13411));
//     //  printf("%d\n", ft_strlen(ft_itoa((-13411))));
//     printf("\n");
// }