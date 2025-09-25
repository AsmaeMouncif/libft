#include "libft.h"

int ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return 1;
	else
		return 0;
}

/*int main(void)
{
	int t = 32;
	int r = ft_isprint(t);
	printf("%d\n", r);
	printf("%d", isprint(t));
	return 0;
}*/