/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:12:04 by mirnavar          #+#    #+#             */
/*   Updated: 2022/10/03 16:06:03 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc (ft_strlen(s1) + 1);
	if (!ptr)
		return (0);
	i = 0;
	ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
	return (ptr);
}
