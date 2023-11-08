#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char *str1;
	char *str2;

	size_t i;
	size_t y;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	y = 0;
	if (s2[i] == '\0')
		return (str1);

	while (str1[i] != '\0' && i < n )
	{
		while ((str1[i + y] == str2[y]) &&  str1[i + y] != '\0')
		y++;
		if (str2[y] == '\0')
		{
			return (str1 + i);
		}
		i++;
		y = 0;
	}
	return (NULL);
}

int main(void)
{
	const char police[] = "papier du vehicule";
	const char pelo[] = "y";
	printf("%s\n",ft_strnstr(police,pelo,1));
}
