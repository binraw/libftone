#include "libft.h"

void *ft_memchr(const void *ptr, int ch, size_t count)
{
	int i;
    char *p;

    i = 0;
    p = (char *) ptr;
    while(p[i] != '\0' && i < count)
    {
        if (p[i] == ch)
            {

                return (&p[i]);
            }

            i++;
    }

    return NULL;
}


int main(void)
{
	char lich[] = "une belle corde";
	printf("%s\n", ft_memchr(lich,'c',13));
}
