/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:50:48 by mirnavar          #+#    #+#             */
/*   Updated: 2023/08/02 10:32:47 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h> // Library for PRINTF (Main)
#include <fcntl.h> // Library for OPEN (Main)

char	*ft_read_str(int fd, char *str);
char	*ft_free_join(char *str, char *buff);
char	*ft_get_line(char *buff);
char	*ft_new_str(char *buff);

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!str)
		str = ft_calloc(1, 1);
	if (!str)
		return (d_free(&str, NULL));
	str = ft_read_str(fd, str);
	if (!str)
		return (NULL);
	line = ft_get_line(str);
	if (!line || *line == '\0')
		return (d_free(&str, &line));
	str = ft_new_str(str);
	return (line);
}

char	*ft_read_str(int fd, char *str)
{
	char	*buff;
	int		bytes;

	bytes = 1;
	buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buff)
		return (d_free(&str, &buff));
	while (bytes > 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes < 0)
			return (d_free(&str, &buff));
		buff[bytes] = '\0';
		str = ft_free_join(str, buff);
		if (!str)
			return (NULL);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	d_free(&buff, NULL);
	return (str);
}

char	*ft_free_join(char *str, char *buff)
{
	char	*s;

	s = ft_strjoin(str, buff);
	if (!s)
		return (d_free(&str, &buff));
	d_free(&str, 0);
	return (s);
}

char	*ft_get_line(char *buff)
{
	int		len;
	char	*line;

	len = 0;
	line = NULL;
	if (!buff)
		return (NULL);
	while (buff[len] && buff[len] != '\n')
		len++;
	if (buff[len] == '\n')
		len++;
	line = ft_calloc(len + 1, sizeof(char));
	if (!line)
		return (NULL);
	len = 0;
	while (buff[len] && buff[len] != '\n')
	{
		line[len] = buff[len];
		len++;
	}
	if (buff[len] == '\n')
		line[len] = '\n';
	return (line);
}

char	*ft_new_str(char *buff)
{
	int		len;
	int		i;
	char	*new;

	len = 0;
	while (buff[len] && buff[len] != '\n')
		len++;
	if (!buff[len])
		return (d_free(&buff, NULL));
	new = malloc(ft_strlen(buff) - len + 1 * sizeof(char));
	if (!new)
		return (d_free(&buff, NULL));
	len++;
	i = 0;
	while (buff[len])
		new[i++] = buff[len++];
	new[i] = '\0';
	d_free(&buff, NULL);
	return (new);
}

//int	main(int argc, char **argv)
//{
//	int	fd;
//	fd = 0;
//	if (argc > 1)
//	{
//		fd = open(argv[1], O_RDONLY);
//		if (fd < 0)
//		{	printf("Error fd: %s", argv[1]);
//			exit(1);
//		}
//	//	get_next_line(fd);
//	//	get_next_line(fd);
//		printf("%s", get_next_line(fd));
////		printf("%s", get_next_line(fd));
////		char *buff = ft_read_str(fd, buff);
////		printf("%s\n", buff);
//	}
//	close(fd);
//	return (0);
//}
