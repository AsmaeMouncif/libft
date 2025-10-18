/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:34:15 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/15 14:18:26 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    const unsigned char *s1 = s;
    while(i < n)
    {
        if(s1[i] == (unsigned char)c)
            return (void *)(s1 + i);
    i++;
    }
    return NULL;
}