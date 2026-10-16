/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:36:57 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/28 18:11:33 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	put_u(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count = put_u(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}

int	ft_print_unsigned(va_list args)
{
	unsigned int	c;

	c = va_arg(args, unsigned int);
	return (put_u(c));
}
