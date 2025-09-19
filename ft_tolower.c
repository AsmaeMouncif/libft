int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		c = c + 32;
	return c; 
}

#include <stdio.h>

int main(void)
{
	char t = '2';
	int r = ft_tolower(t);
	printf("%c", r);
	return 0;
}