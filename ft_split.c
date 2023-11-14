/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:15:21 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/14 15:25:36 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_search(const char *s, char c, int start)
{
    int i;

    i = start;
    while(s[i] != '\0')
    {
        if (s[i] == c)
            {
                return (1);
            }
            i++;
    }
    return (0);
}

char **ft_split(char const *s, char c)
{
    char **str;
    int i;
    int count;
    

    i = 0;
    count = 0;
    // printf("%d\n", i);
    while(s[i] != '\0')
    {
    while(s[i] != '\0' &&  (ft_search(s,c,i) != 0))
      {
        //  printf("%d\n", i);
        i++;
      }
    while( s[i] != '\0' && (ft_search(s, c, i) == 0))
     {   
        i++;
     }
     count++;
    }
    str = malloc((count + 1) * sizeof(char *));
    if (!str)
        return (NULL);
    i = 0;
    count = 0;
    while(s[i])
    {
    while((ft_search(s, c, i) != 1))
      {
        str[count][i] = s[i];
        i++;
      }
    if(ft_search(s, c, i) == 0)
     {   i++;
        str[count][i] = '\0';
        count++;
     }
     
    }
    return (str);   
}

// int main(void)
// {
//     const char bol[] = "Le grosbol";
//     char c = 'o';
//     ft_split(bol,c);
// }