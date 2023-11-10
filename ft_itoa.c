/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:30:31 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/10 16:47:14 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_number(int n)
{
    int number;
    size_t i;

    i = 0;
    
    if (n >= 10)
    {
        ft_number(n / 10);
        ft_number(n % 10);   
    }
    else{
        
        number = '0' + n;
       
    
    }
    
    // return (number);
}

// char *ft_itoa(int n)
// {
//     char *str;


// str = ft_calloc(11,sizeof(int));
// if (!str)
//     return (NULL);

    
// }
int main(void)
{
    printf("%s\n", ft_number(20));
}