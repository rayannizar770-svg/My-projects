/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 17:11:13 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/22 13:55:58 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	s_len;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	s_len = ft_strlen(s1);
	if (s_len == 0)
		return (ft_substr(s1, 0, 0));
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = s_len - 1;
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	if (end >= start)
		len = end - start + 1;
	else
		len = 0;
	result = ft_substr(s1, start, len);
	return (result);
}
