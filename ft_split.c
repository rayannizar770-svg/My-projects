/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:51:54 by rreziq            #+#    #+#             */
/*   Updated: 2026/09/15 18:53:31 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in;

	count = 0;
	in = 0;
	while (*s != '\0')
	{
		if (*s != c && in == 0)
		{
			in = 1;
			count++;
		}
		else if (*s == c)
			in = 0;
		s++;
	}
	return (count);
}

static char	**free_all(char **words, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(words[i++]);
	free(words);
	return (NULL);
}

static char	**fill_words(char const *s, char c, char **words)
{
	size_t	i;
	size_t	start;
	size_t	w_i;

	i = 0;
	w_i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] != c && s[i])
			i++;
		words[w_i] = ft_substr(s, start, i - start);
		if (!words[w_i])
			return (free_all(words, w_i));
		w_i++;
	}
	words[w_i] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words)
		return (NULL);
	return (fill_words(s, c, words));
}
