/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 19:07:42 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/12 19:08:08 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	while (l >= 0)
	{
		if (s[l] == (unsigned char)c)
			return ((char *)&s[l]);
		l--;
	}
	return (NULL);
}
