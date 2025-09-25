#include "libft.h"

int ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		c = c - 32;
	return c;
}

/*int main(void)
{
	int t = 97;
	char r = ft_toupper(t);
	printf("%c\n", r);
	printf("%c", toupper(t));
	return 0;
}*/