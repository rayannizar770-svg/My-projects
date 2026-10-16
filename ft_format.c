/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:17:14 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/29 16:03:13 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format(va_list args, char c)
{
	if (c == 'c')
		return (ft_print_char(args));
	else if (c == 's')
		return (ft_print_str(args));
	else if (c == 'd' || c == 'i')
		return (ft_print_nbr(args));
	else if (c == 'u')
		return (ft_print_unsigned(args));
	else if (c == 'x')
		return (ft_print_hex_lower(args));
	else if (c == 'X')
		return (ft_print_hex_upper(args));
	else if (c == 'p')
		return (ft_print_ptr(args));
	else if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else
		return (0);
}
