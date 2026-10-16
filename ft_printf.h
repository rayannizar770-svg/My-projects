/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:42:46 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/28 18:31:37 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_format(va_list args, char c);
int	ft_print_char(va_list args);
int	ft_print_str(va_list args);
int	ft_print_nbr(va_list args);
int	ft_print_unsigned(va_list args);
int	ft_print_hex_lower(va_list args);
int	ft_print_hex_upper(va_list args);
int	ft_print_ptr(va_list args);

#endif
