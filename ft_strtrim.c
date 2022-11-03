/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:12:38 by mirnavar          #+#    #+#             */
/*   Updated: 2022/10/07 15:16:06 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calc_ind2(char const *s1, char const *set)
{
	size_t	ind2;
	size_t	ind_st;

	ind2 = 0;
	ind_st = 0;
	while (ind_st < ft_strlen(set))
	{
		if (s1[ind2] == set[ind_st])
		{
			ind2++;
			ind_st = -1;
		}
		ind_st++;
	}
	return (ind2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ind;
	size_t	ind_st;
	size_t	ind2;
	char	*s3;

	ind = ft_strlen(s1) - 1;
	ind_st = 0;
	if (!*s1)
		return (ft_strdup(""));
	while (ind_st < ft_strlen(set))
	{
		if (s1[ind] == set[ind_st])
		{
			ind--;
			ind_st = -1;
		}
		ind_st++;
	}
	ind2 = calc_ind2(s1, set);
	s3 = ft_substr(s1, ind2, ind - ind2 + 1);
	return (s3);
}
/*int	main(void)
{
	char	*s1 = "\n Trim me !\n   \n \n \t\t\n  ";
	char	*set = " \n\t";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}*/
