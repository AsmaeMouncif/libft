int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		c = c - 32;
	return c;
}

#include <stdio.h>

int main(void)
{
	char t = 'c';
	char r = ft_toupper(t);
	printf("%c",  r);
	return 0;
}