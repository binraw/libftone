/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:15:21 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/15 20:58:08 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_free_malloc(char **str, int index)
{
    while(index >= 0)
    {
      free(str[index]);
      index--;
    }
    free(str);
}

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
    int y;
    unsigned int start;
    
    start = 0;
    y = 0;
    i = 0;
    count = 0;
   
    while(s[i] != '\0')
    {
    while(s[i] != '\0' &&  (ft_search(s,c,i) != 1))
      {
        i++;
      }
      // if(s[i - 1] != (ft_search(s,c,i) != 0))
      //  { 
      //   count--;
      //  }
    while( s[i] != '\0' && (ft_search(s, c, i) == 1))
     {   
        i++;
     }
     count++; 
    }
    if(count == 0)
    {
      return (NULL);
    }
      i = 0;
    str = ft_calloc((count + 1) , sizeof(char *));
  
    if (!str)
        return (NULL);
    
    while(count > i)
    {
    while( s[start] && ft_search(s,c,y) != 0)
       {
         start++;
       }
     while(s[y] && ft_search(s,c,y) != 1)
     {
      y++;
     }
     str[i] = ft_substr(s, start, (y - start));
     if(str[i] == NULL)
     {
        ft_free_malloc(str,i - 1);
        return (NULL);
     }
     start = y;
     i++;
    }    
    return (str);   
}

int main(void)
{
    const char bol[] = "Legrosbol";
    char c = 'g';
    // printf("%s\n", ft_split(bol,c));
    ft_split(bol,c);
}