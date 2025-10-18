/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:34:45 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/16 08:54:17 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int l = ft_strlen(s);
    char *p = malloc(l + 1);
    if(p == NULL)
    {
        return NULL;
    }
    
    int i = 0;
    while(s[i] != '\0')
    {
        p[i] = s[i];
        i++;
    }
    
    p[i] = '\0';
    return p;
}