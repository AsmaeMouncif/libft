/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:25:06 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/18 09:50:11 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i = 0;
    if(s == 0)
        return;
        
    while(s[i] != '\0')
    {
        ft_putchar_fd(s[i],fd);
        i++;
    }
}

// int main()
// {
//     char s[] = "Hello";
//     ft_putstr_fd(s, 1);
//     return 0;
// }
