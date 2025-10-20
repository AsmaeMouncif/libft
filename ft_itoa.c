/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:54:13 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/18 18:08:24 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		l;
	char	*p;
	int		neg;

	nb = n;
	l = ft_count(n);
	p = malloc(l + 1);
	if (p == 0)
		return (NULL);
	p[l] = '\0';
	l--;
	if (nb == 0)
		p[l] = '0';
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		p[l] = (nb % 10) + '0';
		nb = nb / 10;
		l--;
	}
	if (neg != 0)
		p[0] = '-';
	return (p);
}

int	main(void)
{
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}