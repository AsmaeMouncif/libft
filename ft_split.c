/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:18:09 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/17 19:50:23 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char **ft_split(char const *s, char c)
{
    int i = 0;
    while (s[i] != '\0' && s[i] == c)
    {
        i++;
    }
    int l = ft_strlen(s);
    char **p = malloc(2 * sizeof(char *));
    
    if(p == 0)
        return NULL;

    while(s[i] != '\0' && s[i] != c)
    {
        p[i] = s[i];
        i++;
    }
}

int main()
{
    char s[] = "++Salut--Bonjour+-42";
    char c = '+';
    printf("%s", ft_split(s, c));
    return 0;
}