/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:30:49 by mirnavar          #+#    #+#             */
/*   Updated: 2023/05/23 15:12:11 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
	{
		s = (char *)malloc((sizeof(char) * 1));
		s[0] = '\0';
	}
	if (!s || !s2)
		return (NULL);
	s3 = (char *)malloc((ft_strlen(s) + ft_strlen(s2)) + 1);
	if (!s3)
		return (NULL);
	while (s[i] != '\0')
	{
		s3[i] = s[i];
		i++;
	}
	while (s2[j] != '\0')
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	asign;
	size_t	i;

	asign = count * size;
	memory = malloc(asign);
	if (!memory)
		return (NULL);
	i = 0;
	while (i < asign)
		((char *)memory)[i++] = '\0';
	return (memory);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*d_free(char **s1, char **s2)
{
	if (s1 && *s1)
	{
		free(*s1);
		*s1 = NULL;
	}
	if (s2 && *s2)
	{
		free(*s2);
		*s2 = NULL;
	}
	return (NULL);
}
