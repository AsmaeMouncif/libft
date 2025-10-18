/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:40:38 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/17 14:01:21 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{    
    if(s == 0)
        return (NULL);

    size_t len_s = ft_strlen(s);
    if(start >= len_s)
        return (ft_strdup(""));
    
    if(len > len_s - start)
		len = len_s - start;

    char *p = malloc((len + 1) * sizeof(char));
    if(p == 0)
        return NULL;
    size_t i = start;
    size_t j = 0;
    while(s[i] != '\0' && j < len)
    {
        p[j] = s[i];
        j++;
        i++;
    }
    p[j] = '\0';
    return p;
}