/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:24:50 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/19 16:58:35 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_check(unsigned int t , char *c)
{
    if(t % 2 == 0 && *c >= 'a' &&  *c <= 'z')
        *c = *c - 32;
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i = 0;
    while(s[i] != '\0')
    {
        f(i , &s[i]);
        i++;
    }
}


int main()
{
    char s[] = "hello";
    ft_striteri(s, ft_check);
    printf("%s\n" , s);
    return 0;
}
