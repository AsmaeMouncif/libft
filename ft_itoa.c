/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:54:13 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/21 16:58:29 by asmounci         ###   ########.fr       */
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

void	fill_digits(char *p, long nb, int l, int neg)
{
	if (nb == 0)
		p[l] = '0';
	while (nb > 0)
	{
		p[l] = (nb % 10) + '0';
		nb = nb / 10;
		l--;
	}
	if (neg != 0)
		p[0] = '-';
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
	if (p == NULL)
		return (NULL);
	p[l] = '\0';
	l--;
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	fill_digits(p, nb, l, neg);
	return (p);
}
