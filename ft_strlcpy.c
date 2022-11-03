/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:09:18 by mirnavar          #+#    #+#             */
/*   Updated: 2022/10/11 17:14:06 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (i < n - 1 && src[i] != '\0')
		{	
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
