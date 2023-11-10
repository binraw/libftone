#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>


void *ft_bzero(void *s, size_t n);
size_t     ft_strlen(const char *str);
int white_space(char *str);
int ft_atoi(char *str);
void *ft_calloc(size_t num, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *ptr, int ch, size_t count);
int ft_memcmp(const void * pointer1, const void * pointer2, size_t size);
void *ft_memcpy(void *destination, const void *source, size_t size);
void *ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *pointer, int value, size_t count);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putstr_fd(char *s, int fd);
char *ft_strchr(const char *string, int searchedChar);
char *strdup(const char *source);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *s1, const char *s2, size_t n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strnstr(const char *s1, const char *s2, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
void	ft_tolower(int c);
void    ft_toupper(int c);
#endif