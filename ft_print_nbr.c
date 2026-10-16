/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:43:58 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/29 13:24:35 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	putnbr(long n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count = putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}

int	ft_print_nbr(va_list args)
{
	int		n;
	int		i;
	long	nb;

	n = va_arg(args, int);
	nb = n;
	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		i++;
		nb = -nb;
	}
	return (i + putnbr(nb));
}
