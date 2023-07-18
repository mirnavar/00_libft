/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:53:04 by mirnavar          #+#    #+#             */
/*   Updated: 2022/12/06 12:02:56 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_len(unsigned int n, int *len);

int	ft_unsitoa(unsigned int n)
{
	int		len;
	char	*str;

	ft_len(n, &len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (-1);
	str[len] = '\0';
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

static void	ft_len(unsigned int n, int *len)
{
	int	i;

	*len = 0;
	i = 0;
	while (n > 9)
	{
		n = n / 10;
		*len += 1;
	}
	if (n >= 0)
		*len += 1;
}
