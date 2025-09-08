#include <unistd.h>
#include <ctype.h>

int ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return 1;
	else
		return 0;
}

#include <stdio.h>

int main(void)
{
	int t = 200;
	int r = ft_isascii(t);
	printf("%d", r);
	printf("%d", isascii(t));
	return 0;
}