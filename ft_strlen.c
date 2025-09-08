#include <unistd.h>
#include <string.h> 
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(void)
{
	char str[] = "Hello";
	int r = ft_strlen(str);
	int r2 = strlen(str);
	printf("%d", r);
	printf("%d", r2);
	return 0;
}