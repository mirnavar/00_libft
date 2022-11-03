/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:23:43 by mirnavar          #+#    #+#             */
/*   Updated: 2022/10/11 17:59:32 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static int	ft_wordlen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_mallocerror(char **array, int i)
{
	while (i >= 0)
	{
		free(array[i]);
		--i;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	array = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_countwords(s, c))
	{
		k = 0;
		while (s[j] == c)
			j++;
		array[i] = ft_substr(s, j, ft_wordlen(&s[j], c));
		if (!array[i])
			return (ft_mallocerror(array, i));
		j += ft_wordlen(&s[j], c);
		++i;
	}
	array[i] = 0;
	return (array);
}
/*
int	main(void)
{
	char	s[20] = "\0aa\0bbb";
	char	**new;
	printf("%d\n", ft_countwords(s, '\0'));
	new = ft_split(s, '\0');
	printf("%s\n%s\n%s\n%s\n", new[0], new [1], new[2], new[3]);
	return (0);
}*/
