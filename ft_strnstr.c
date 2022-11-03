/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:57:28 by mirnavar          #+#    #+#             */
/*   Updated: 2022/09/23 16:10:08 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[j] != '\0')
	{
		i = 0;
		while (haystack[j + i] == needle[0 + i] && i + j < len)
		{
			if (needle[0 + i + 1] == '\0')
				return ((char *)&haystack[j]);
			i++;
		}
		j++;
	}
	return (NULL);
}
