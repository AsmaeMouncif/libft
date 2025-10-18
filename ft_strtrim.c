/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:33:54 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/17 18:14:33 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    const char *st = s1;
    int i = 0;
    while (st[i] != '\0' && ft_strchr(set, st[i]) != NULL)
    {
        i++;
    }

    int j = ft_strlen(s1);
    while(ft_strchr(set, st[j - 1]) != NULL && j > i)
    {
        j--;   
    } 
    char *p = malloc(j - i + 1);
    if(p == 0)
        return NULL;
    int k = 0;
    
    while(i < j)
    {
        p[k] = s1[i];
        k++;
        i++;
    }
    p[k] = '\0';
    return p;
}