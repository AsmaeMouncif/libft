/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:18:09 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/19 14:51:25 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int	word_length(char const *s, char c)
{
	int	l;

	l = 0;
	while (s[l] != '\0' && s[l] != c)
	{
		l++;
	}
	return (l);
}

char	*copy_word(char const *s, int len)
{
	char	*p;
	int		i;

	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

void	fail(char **p, int i)
{
	i--;
	while (i >= 0)
	{
		free(p[i]);
		i--;
	}
	free(p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**p;
	int		len;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	p = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (p == 0)
		return (NULL);
	while (s[j] != '\0')
	{
		len = word_length(&s[j], c);
		if (len > 0)
		{
			p[i] = copy_word(&s[j], len);
			if (p[i] = NULL)
			{
				fail(p, i);
				return (NULL);
			}
			j = j + len;
			i++;
		}
		else
			j++;
	}
	p[i] = NULL;
	return (p);
}

int	main(void)
{
	char s[] = "   zxcv      ar     t      t     b";
	char c = ' ';

	char **t = ft_split(s, c);
	int i = 0;
	while (t[i])
	{
		printf("%s\n", t[i]);
		i++;
	}
}