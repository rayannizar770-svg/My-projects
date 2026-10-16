/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 17:23:35 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/12 16:40:00 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	i;

	i = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == i)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)*s == i)
		return ((char *)s);
	return (NULL);
}
