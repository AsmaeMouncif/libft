/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:10:14 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/16 13:12:15 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    while(i < len)
    {
        size_t j = 0;
		size_t k = i;
        if(little[0] == '\0')
            return (char *)big;
		while (little[j] != '\0' && k < len && big[k] == little[j])
		{
			k++;
			j++;
		}
		if (little[j] == '\0')
		{
			return (char *)(big + i);
		}
		i++;
    }
    return NULL;
}