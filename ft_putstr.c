/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:15:36 by mirnavar          #+#    #+#             */
/*   Updated: 2022/12/14 10:47:19 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	wlength;

	if (!str)
		str = "(null)";
	i = 0;
	wlength = 0;
	while (str[i])
	{
		if (write(1, &str[i], 1) == -1)
			return (-1);
		wlength++;
		i++;
	}
	return (wlength);
}
//printf("valor devuelto por ft_putsrt %d\n", wlength);
//testeo para saber el valor devuelto. Va antes del return.
