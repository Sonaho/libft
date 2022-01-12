#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>



int	ft_isalpha (int c);
int	ft_isdigit (int c);
int ft_isalnum (int c);
int ft_isascii (int c);
int ft_isprint(int c);
int ft_strlen(char *s);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isupper(int c);
int ft_islower(int c);
int ft_isupper(int c);

char *ft_strchr(char *s, int c);
char *ft_strrchr(char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_strncmp(char *s1, char *s2, unsigned int n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);


void *ft_memset(void *s, int c, size_t n);
void *ft_memchr(void *s, int c, unsigned int n);
void *ft_memcpy(void *dest, void *src, unsigned int n);
void *ft_memmove(void *dest, void *src, unsigned int n);
int ft_memcmp(void *s1, void *s2, unsigned int n);
void ft_bzero(void *s, unsigned int n);



#endif