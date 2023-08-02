/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:13:20 by mirnavar          #+#    #+#             */
/*   Updated: 2023/08/02 10:24:43 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = s;
	while (i < n)
		d[i++] = 0;
}

/*int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
  	ft_bzero(&str[13], 0*sizeof(char));
    printf("After ft_bzero():  %s\n", str);

	bzero(&str[13], 0*sizeof(char));
    printf("After bzero():  %s\n", str);
    return 0;
}*/
