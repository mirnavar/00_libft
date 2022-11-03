/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:53:39 by mirnavar          #+#    #+#             */
/*   Updated: 2022/10/10 14:25:24 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signo;
	int	result;

	i = 0;
	signo = 1;
	result = 0;
	while (((const char)str[i] >= 9 && (const char)str[i] <= 13)
		|| (const char)str[i] == 32)
		i++;
	if ((const char)str[i] == '-' || (const char)str[i] == '+')
	{
		if (!((const char)str[i + 1] >= '0' && (const char)str[i + 1] <= '9'))
			return (0);
		else
			if ((const char)str[i++] == '-')
				signo = -signo;
	}
	while ((const char)str[i] != '\0' && (const char)str[i] >= '0'
		&& (const char)str[i] <= '9')
		result = (result * 10) + (const char)str[i++] - '0';
	return (signo * result);
}
