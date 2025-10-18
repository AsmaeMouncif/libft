/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:15:03 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/18 11:21:45 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == 0)
    {
        ft_putchar_fd('0', fd);
        return;
    }
      
    if(n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    
    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    
    char str[12];
    int i = 0;
    while(n > 0)
    {
        str[i] = (n % 10) + '0';
        n = n /10;
        i++;
    }

    while(i > 0)
    {
        i--;
        ft_putchar_fd(str[i], fd);
    }
}

int main()
{
    ft_putnbr_fd(0, 1);
    return 0;
}