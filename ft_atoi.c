int ft_atoi(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
	{
		i++;
	}
	
	int s;
	s = 1;
	if(str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if(str[i] == '-')
		{
			s = s * - 1;
		}
	i++;
	}

	int r;
	r = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}

	return r * s;
	
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char str[] = " -23A32";
	int r = ft_atoi(str);
	printf("%d", r);
	printf("%d", atoi(str));
	return 0;
}