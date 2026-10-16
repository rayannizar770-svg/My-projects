/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:05:23 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/29 13:37:23 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	put_hex(unsigned int n)
{
	int		count;
	char	*base;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count = put_hex(n / 16);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	ft_print_hex_upper(va_list args)
{
	unsigned int	c;

	c = va_arg(args, unsigned int);
	return (put_hex(c));
}
