#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
	void *pointer;
    size_t i;

    i = 0;
    
    pointer =  malloc(num* (sizeof(size)));

    if (!pointer)
        return (NULL);

        
    ft_bzero(pointer, num);
   
    return (pointer);

}
