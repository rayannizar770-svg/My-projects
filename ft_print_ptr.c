/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:18:26 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/28 18:32:09 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	put_ptr(unsigned long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count = put_ptr(n / 16);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	ft_print_ptr(va_list args)
{
	unsigned long	ptr;

	ptr = (unsigned long)va_arg(args, void *);
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (2 + put_ptr(ptr));
}
