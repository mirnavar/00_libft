/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:46:07 by mirnavar          #+#    #+#             */
/*   Updated: 2022/10/06 16:07:40 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s3 = malloc((sizeof(char)) * (ft_strlen(s) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	while (i < ft_strlen(s))
	{
		s3[i] = s[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
/*int	main(void)
{
	char	*s = "hola";
	char	*s2 = "amigo";
	printf("%s", ft_strjoin(s, s2));
	return (0);
}*/
