/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:49:09 by mirnavar          #+#    #+#             */
/*   Updated: 2022/09/16 17:34:40 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
		s[i++] = (unsigned char)c;
	return (b);
}

// lo mismo seria escribir s[i] = c;   i++;
/*int	main(void)
{
 	char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(&str[13], '-', 8*sizeof(char));
	printf("After ft_memset():  %s\n", str);
	memset(&str[13], '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}*/
