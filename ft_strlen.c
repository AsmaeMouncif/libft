#include "libft.h"

int ft_strlen(const char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

/*int main(void)
{
	char str[] = "";
	int r = ft_strlen(str);
	int r2 = strlen(str);
	printf("%d\n", r);
	printf("%d", r2);
	return 0;
}*/