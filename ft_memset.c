#include <unistd.h>

void *ft_memset(void *ptr, int value, size_t num)
{
	size_t i = 0;
	unsigned char *a = ptr;
	while(i < num)
	{
		a[i] = value;
		i++;
	}
	return a;
}

#include <stdio.h>
int main(void)
{
	char str[] = "hy my name is";
	char *y = ft_memset(str, '*', 5);
	printf("%s", y);
	return 0;
}