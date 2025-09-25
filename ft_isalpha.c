#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return 1;
	else
	    return 0;
}

/*int main(void)
{
    int t = 48;
	int r = ft_isalpha(t);
	printf("%d\n", r);
	printf("%d", isalpha(t));
	return (0);
}*/