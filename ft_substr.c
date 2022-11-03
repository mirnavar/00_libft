/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:47:10 by mirnavar          #+#    #+#             */
/*   Updated: 2022/10/06 18:18:14 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;

	s2 = NULL;
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) >= start + len)
		s2 = malloc(sizeof(char) * (len + 1));
	else if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
		s2 = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	}
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
// el if(!s2) return(null) se pone para proteger malloc, asegurarse
// que se ha guardado la memoria
