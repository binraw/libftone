#include "libft.h"

int ft_memcmp(const void * pointer1, const void * pointer2, size_t size)
{
    size_t i;
	char *str1;
	char *str2;

    i = 0;
	str1 = (char *) pointer1;
	str2 = (char *) pointer2;
    while ((str1[i] != '\0' || str2[i] != '\0') && i < size)
    {
        if (str1[i] > str2[i])
        {
            return (1);
        }
        else if (str1[i] < str2[i])
        {
            return (-1);
        }
        i++;
    }
    return (0);

}
