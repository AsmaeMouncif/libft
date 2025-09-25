#include "libft.h"

int ft_isdigit(int c)
{
   if (c >= 48 && c <= 57)
        return 1;
    else
        return 0;
}

/*int main(void)
{
    int t = 32;
	int r = ft_isdigit(t);
	printf("%d\n", r);
	printf("%d" , isdigit(t));
	return 0;
}*/