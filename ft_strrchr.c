/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:27:21 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/15 11:04:33 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	while (i != 0)
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}

	if (s[0] == ch)
		return ((char *)s);
	return (NULL);
}