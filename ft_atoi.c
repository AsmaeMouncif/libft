#include "libft.h"

int ft_atoi(const char *str)
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

/*int main(void)
{
	char str[] = " -23A32";
	int r = ft_atoi(str);
	printf("%d\n", r);
	printf("%d", atoi(str));
	return 0;
}*/