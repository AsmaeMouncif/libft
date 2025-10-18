/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:10:33 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/15 11:05:27 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int ch)
{
	int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == ch)
        {
            return ((char * ) s + i);
        }
    i++;
    }
    if(ch == '\0')
        return ((char * ) s + i);
    return NULL;
}