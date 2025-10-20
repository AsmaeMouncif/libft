/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:25:07 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/19 16:36:11 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	to_upper(unsigned int t, char c)
{
	(void)t;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	l;
	char	*p;
	int		i;

	l = ft_strlen(s);
	p = malloc(l + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

int	main(void)
{
	char s[] = "hello";
	char *p = ft_strmapi(s, to_upper);
	printf("%s", p);
	free(p);
	return (0);
}