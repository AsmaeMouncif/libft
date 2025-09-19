#include <unistd.h>

char *ft_strchr(char *s, int c)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			return s + i;
		}
		i++;
	}

}
#include <stdio.h>

int main(void)
{
	const char *s = "Bonjour";
	char *y = ft_strchr(s, 'o');
	printf("%s", y);
	return 0;
}