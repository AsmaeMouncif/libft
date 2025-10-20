/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 08:55:33 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/16 16:29:33 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t total = num_elements * element_size;
	void *p = malloc(total);
	// if (count != 0 && size > SIZE_MAX / count)
	// 	return (NULL);
	if (p == 0)
		return (NULL);

	ft_memset(p, 0, total);
	return (p);
}