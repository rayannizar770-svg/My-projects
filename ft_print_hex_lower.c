/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:50:28 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/28 18:12:19 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	put_hex(unsigned int n)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count = put_hex(n / 16);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	ft_print_hex_lower(va_list args)
{
	unsigned int	c;

	c = va_arg(args, unsigned int);
	return (put_hex(c));
}
