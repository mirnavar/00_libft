/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:33:54 by mirnavar          #+#    #+#             */
/*   Updated: 2022/10/11 13:13:49 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_len(int n, int *len)
{
	int	i;

	*len = 0;
	i = 0;
	if (n < 0)
	{
		i++;
		*len += 1;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		*len += 1;
	}
	if (n >= 0)
		*len += 1;
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_len(n, &len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 9)
	{
		str[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	str[len - 1] = (n % 10) + 48;
	return (str);
}
/*int	main(void)
{
	int	n;

	n = -95;
	//ft_itoa(n);
	printf("%s", ft_itoa(-217483648));
	return (0);
}*/
