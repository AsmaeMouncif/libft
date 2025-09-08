#include <unistd.h>

int ft_isdigit(int c)
{
   if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char t = '2';
	int r = ft_isdigit(t);
	printf("%d\n", r);
	printf("%d" , isdigit(t));
	return 0;
}