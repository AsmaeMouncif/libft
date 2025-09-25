#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_strlen(const char *str);
void *ft_memset(void *ptr, int c, size_t len);
char *strdup(const char *s);
int ft_atoi(const char *str);

#endif