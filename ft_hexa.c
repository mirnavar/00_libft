/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:33:19 by mirnavar          #+#    #+#             */
/*   Updated: 2022/12/13 19:51:40 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int n);

int	ft_hexa(unsigned int n, int form)
{
	char	*str;
	char	*base;
	int		len;

	if (form == 1)
		base = "0123456789abcdef";
	if (form == 2)
		base = "0123456789ABCDEF";
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
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
	free(str);
	return (len);
}

static int	ft_len(unsigned int n)
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

/*{
	char	*base;
	int		rslt;

	rslt = 0;
	if (form == 1)
		base = "0123456789abcdef";
	if (form == 2)
		base = "0123456789ABCDEF";
	if (n < 16)
		rslt += write(1, &base[n], 1);
	else
	{
		ft_putnbr(n / 16, form);
		ft_putnbr(n % 16, form);
	}
	return (rslt);
}*/

/*int	ft_hexa(unsigned int n, int form)
{
	char	*base;
	int		rslt;
	int		mod;

	rslt = 0;
	if (form == 1)
		base = "0123456789abcdef";
	if (form == 2)
		base = "0123456789ABCDEF";
	while (n > 0)
	{
	//	if (n < 16)
	//	rslt += write(1, &base[n], 1);
		//else
		{
			mod = n % 16;
			rslt += write(1, &base[mod], 1);
			n = n / 16;
	//		printf("%d\n", n);
		}
	}
	return (rslt);
}*/

/*int	ft_hexa(unsigned int n, int form)
{
	char	*base;
	int		rslt;

	//rslt = 0;
	if (form == 1)
		base = "0123456789abcdef";
	if (form == 2)
		base = "0123456789ABCDEF";
	if (n < 16)
		rslt += write(1, &base[n], 1);
	else
	{
		ft_hexa(n / 16, form);
		ft_hexa(n % 16, form);
	}
	return (rslt);
}*/
