/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:10:14 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/23 15:31:35 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (big == NULL || little == NULL)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		k = i;
		while (little[j] != '\0' && k < len && big[k] == little[j])
		{
			k++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}
