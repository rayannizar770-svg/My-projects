/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreziq <rreziq@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 14:59:10 by rreziq            #+#    #+#             */
/*   Updated: 2026/10/05 16:02:30 by rreziq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static char	*read_to_buffer(int fd, char *saved)
{
	int		i;
	char	*buf;
	char	*temp;
	size_t	size;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	i = 1;
	size = BUFFER_SIZE;
	buf = malloc(sizeof(char) * (size + 1));
	if (!buf)
		return (NULL);
	while ((!saved || !ft_strchr_gnl(saved, '\n')) && i > 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i < 0)
			return (free(buf), free(saved), NULL);
		if (i > 0)
		{
			buf[i] = '\0';
			temp = ft_strjoin_gnl(saved, buf);
			saved = (free(saved), temp);
		}
	}
	return (free(buf), saved);
}

static char	*extract_line(char *saved)
{
	char	*res;
	char	*n1;
	size_t	len;

	n1 = ft_strchr_gnl(saved, '\n');
	if (n1 != NULL)
	{
		len = (n1 - saved) + 1;
		res = ft_substr_gnl(saved, 0, len);
	}
	else
		res = ft_substr_gnl(saved, 0, ft_strlen_gnl(saved));
	return (res);
}

static char	*update_saved(char *saved)
{
	char	*n1;
	char	*s2;
	size_t	len;

	n1 = ft_strchr_gnl(saved, '\n');
	if (n1 == NULL)
		return (free(saved), NULL);
	len = ft_strlen_gnl(saved) - ((n1 - saved) + 1);
	s2 = ft_substr_gnl(saved, (n1 - saved) + 1, len);
	free(saved);
	return (s2);
}

char	*get_next_line(int fd)
{
	static char	*saved;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	saved = read_to_buffer(fd, saved);
	if (!saved || *saved == '\0')
		return (free(saved), saved = NULL, NULL);
	line = extract_line(saved);
	saved = update_saved(saved);
	return (line);
}
