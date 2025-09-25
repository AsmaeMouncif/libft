#include "libft.h"

int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return 1;
	else
		return 0;
}

/*int main(void)
{
	int t = 48;
	int r = ft_isalnum(t);
	printf("%d\n", r);
	printf("%d", isalnum(t));
	return 0;
}*/