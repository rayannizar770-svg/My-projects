/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 16:02:32 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/24 16:49:58 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	i;

	if (size != 0 && n > (SIZE_MAX / size))
		return (NULL);
	ptr = malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < (n * size))
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
