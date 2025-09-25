#include "libft.h"

int ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		c = c + 32;
	return c; 
}

/*int main(void)
{
	int t = 65;
	int r = ft_tolower(t);
	printf("%c\n", r);
	printf("%c", tolower(t));
	return 0;
}*/