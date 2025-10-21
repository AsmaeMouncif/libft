/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:40:38 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/21 13:51:45 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	size_t	j;
	char	*p;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	p = malloc((len + 1));
	if (p == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		p[j] = s[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
