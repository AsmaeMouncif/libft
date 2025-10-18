/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:43:08 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/14 11:15:48 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *p = ptr;
    size_t i = 0;
    while(i < num)
    {
        p[i] = value;
        i++;
    }
    return ptr;
}