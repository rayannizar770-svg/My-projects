/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:34:51 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/12 16:53:44 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
