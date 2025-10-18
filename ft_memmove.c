/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:27:31 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/14 14:10:29 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    const unsigned char *s = src;
    unsigned char *d = dest;
    if(s < d)
    {
        while(n > i)
        {
            d[i] = s[i];
            n--;
        }        
    }
    
    else{
        while(n > i)
        {
            d[i] = s[i];
            i++;
        }
    }
    return dest; 
}