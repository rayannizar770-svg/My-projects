/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:57:46 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/12 16:45:42 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			k;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (i >= size)
		return (size + j);
	k = 0;
	while (src[k] != '\0' && (i + k + 1) < size)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (j + i);
}
