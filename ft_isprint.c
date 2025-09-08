#include <unistd.h>
#include <ctype.h>

int ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return 1;
	else
		return 0;
}

#include <stdio.h>
int main(void)
{
	char t = 31;
	int r = ft_isprint(t);
	printf("%d", r);
	printf("%d", isprint(t));
	return 0;
}