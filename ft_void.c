/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:16:32 by mirnavar          #+#    #+#             */
/*   Updated: 2022/12/14 10:15:07 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned long long int n);

int	ft_void(unsigned long long int n)
{
	char	*str;
	char	*base;
	int		len;

	base = "0123456789abcdef";
	if (write(1, "0x", 2) == -1)
		return (-1);
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (-1);
	str[len] = '\0';
	while (n >= 16)
	{
		str[len - 1] = base[n % 16];
		n = n / 16;
		len--;
	}
	str[len - 1] = base[n % 16];
	len = ft_putstr(str);
	if (len == -1)
		return (-1);
	free(str);
	return (len + 2);
}

static int	ft_len(unsigned long long int n)
{
	int	len;

	len = 0;
	while (n >= 16)
	{
		len++;
		n = n / 16;
	}
	len++;
	return (len);
}
