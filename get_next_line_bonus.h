/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:16:35 by mirnavar          #+#    #+#             */
/*   Updated: 2023/05/24 12:32:04 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

// Library for READ
# include <unistd.h>

//Library for MALLOC
# include <stdlib.h>

//Library for OPEN_MAX
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 500
# endif

char	*get_next_line(int fd);
char	*ft_read_str(int fd, char *str);
char	*ft_free_join(char *str, char *buff);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s, char *s2);
size_t	ft_strlen(const char *str);
char	*ft_get_line(char *str);
char	*ft_new_str(char *str);
char	*d_free(char **s1, char **s2);
void	*ft_calloc(size_t count, size_t size);

#endif
