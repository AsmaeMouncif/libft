/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:05:47 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/17 18:14:41 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if(s1 == 0 || s2 == 0)
        return NULL;
        
    int total = ft_strlen(s1) + ft_strlen(s2);
    char *p = malloc(total + 1);
    if(p == 0)
        return NULL;
        
    int i = 0;
    while(s1[i] != '\0')
    {
        p[i] = s1[i];
        i++;
    }

    int j = 0;
    while(s2[j] != '\0')
    {
        p[i + j] = s2[j];
        j++;
    }
    p[i + j] = '\0';
    return p;
}