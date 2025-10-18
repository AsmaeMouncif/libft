/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:45:50 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/16 10:17:00 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dl = ft_strlen(dst);
    size_t sl = ft_strlen(src);
	size_t i = dl;
	size_t j = 0;
	if(size <= dl)
		return (size + sl);
	while(src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}

	dst[i] = '\0';
	return (dl + sl);
}