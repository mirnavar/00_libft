/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:59:57 by mirnavar          #+#    #+#             */
/*   Updated: 2023/07/18 14:41:17 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_len(int n, int *len);

int	ft_itoap(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	ft_len(n, &len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (-1);
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
	len = ft_putstr(str);
	free(str);
	return (len);
}
//len = ft_putstr(str) : porque si solo hago ft_putstr y el return es len, 
//len = 1 (ver len--) y tengo que devolver el número de carácteres printeados

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
