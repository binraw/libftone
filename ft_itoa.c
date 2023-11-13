/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:30:31 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/13 13:28:43 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// premiere fonction qui va compter la len
// deux fonctions qui recup les nombre de chaque index (pos)(neg)
int ft_int_len(int number)
{
    int i;
    int y;

    i = 1;
    y = 1;
    if (number >= 10)
    {
        while(i < number)
        {
          i = i *10;
          y++;  
        }
        if ((i / number) > 1)
            y--;
            
    }
    return (y);
}
int ft_change_sign(int number)
{
         number *= -1;
        
    
    return (number);
}
char *ft_itoa(int n)
{
    char *str;
    int  len;
    int sign;

    sign = 0;
    if (n < 0)
    {
        if (n ==  -2147483648)
            return ("-2147483648")
     sign = 1;   
   
    n *= -1;
    }
    len = ft_int_len(n);
    str = malloc((len + 1 + sign) * sizeof(char));

    str[len] = '\0';
   
   if (sign == 1)
   {
      
        while(len)
        {
            str[len] = (n % 10) + '0';
             printf("%c\n", str[len]);
            n = n / 10;
            len--;
        } 
        str[0] = '-';
   } 
   else 
   {
        while(len)
        {
            str[len - 1] = (n % 10) + '0';
            printf("%c\n", str[len]);
            n = n / 10;
            len--;
        }   
   }

        return (str);
}
int main(void)
{
    // printf("%d\n", ft_int_len(11111));
    printf("%s\n", ft_itoa(-11111));
     printf("%d\n", ft_strlen(ft_itoa((-11111))));
    printf("\n");
}