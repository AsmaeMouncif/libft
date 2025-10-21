/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 08:55:33 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/21 15:29:40 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elem, size_t elem_size)
{
	size_t	total;
	void	*p;

	if (num_elem != 0 && elem_size > SIZE_MAX / num_elem)
		return (NULL);
	total = num_elem * elem_size;
	p = malloc(total);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, total);
	return (p);
}
