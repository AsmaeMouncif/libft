/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:05:47 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/20 17:35:18 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	int total;
	total = ft_strlen(s1) + ft_strlen(s2);
	char *p;
	p = malloc(total + 1);
	if (p == 0)
		return (NULL);

	int i;
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	int j;
	j = 0;
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

int main()
{
	char s1[] = "Hello";
	char s2[] = " Asmae";
	char *t = ft_strjoin(s1, s2);
	printf("%s", t);
	free(t);
	return 0;
}