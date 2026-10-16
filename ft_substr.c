/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:34:00 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/13 15:43:32 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	a_len;
	size_t	i;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (start >= s_len)
		a_len = 0;
	else if (len < (s_len - start))
		a_len = len;
	else
		a_len = s_len - start;
	sub = malloc(sizeof(char) * (a_len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < a_len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return ((char *)sub);
}
