/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:18:09 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/23 15:40:37 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
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

static int	word_length(char const *s, char c)
{
	int	l;

	l = 0;
	while (s[l] != '\0' && s[l] != c)
	{
		l++;
	}
	return (l);
}

static void	fail(char **p, int i)
{
	while (i-- > 0)
		free(p[i]);
	free(p);
}

static char	**extract_words(char **p, const char *s, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		len = word_length(&s[j], c);
		if (len > 0)
		{
			p[i] = ft_substr(&s[j], 0, len);
			if (p[i] == NULL)
				return (fail(p, i), NULL);
			j += len;
			i++;
		}
		else
			j++;
	}
	p[i] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (s == NULL)
		return (NULL);
	p = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (p == 0)
		return (NULL);
	return (extract_words(p, s, c));
}
