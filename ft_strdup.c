#include "libft.h"

char *ft_strdup(const char *s)
{
	int i = 0;
	int l = ft_strlen(s);
	char *p = malloc(l + 1);

	if(p == NULL)
	{
		return NULL;
	}

	while(s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return p;
}

/*int main(void)
{
	const char s[] = "my";
	char *y = ft_strdup(s);
	printf("%s\n", y);
	printf("%s", strdup(y));
	return 0;	
}*/