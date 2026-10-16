/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:16:45 by rreziq            #+#    #+#             */
/*   Updated: 2026/10/04 13:28:30 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen_gnl(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static size_t	safe_len(char const *s)
{
	if (!s)
		return (0);
	return (ft_strlen_gnl(s));
}

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	char	*res;
	size_t	i;
	size_t	j;

	len_1 = safe_len(s1);
	len_2 = ft_strlen_gnl(s2);
	res = malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s1 && i < len_1)
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len_2)
	{
		res[j + i] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	unsigned char	i;

	if (!s)
		return (NULL);
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

char	*ft_substr_gnl(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	a_len;
	size_t	i;

	s_len = ft_strlen_gnl(s);
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
