/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:26:50 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/15 15:36:49 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    const unsigned char *str1 = s1;
    const unsigned char *str2 = s2;
    while(i < n)
    {
        if(str1[i] != str2[i])
            return(str1[i] - str2[i]);
        i++;        
    }
    return 0;
}