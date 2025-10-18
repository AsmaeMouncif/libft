/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:01:07 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/14 10:11:35 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    const unsigned char *s = src;
    unsigned char *d = dest;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest; 
}