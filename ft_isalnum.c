#include <unistd.h>
#include <ctype.h>

int ft_isalnum(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
		return 1;
	else
		return 0;
}

#include <stdio.h>

int main(void)
{
	char t = ' ';
	int r = ft_isalnum(t);
	printf("%d", r);
	printf("%d", isalnum(t));
	return 0;
}