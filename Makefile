# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mirnavar <mirnavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 10:37:29 by mirnavar          #+#    #+#              #
#    Updated: 2022/10/13 09:58:10 by mirnavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

BONUS = 	.bonus

#sources del programa en orden
SRC = 		ft_bzero.c ft_isalnum.c \
			ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c \
			ft_memset.c ft_strlen.c \
			ft_tolower.c ft_toupper.c \
			ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_strnstr.c \
			ft_atoi.c ft_memcpy.c \
			ft_memmove.c ft_memchr.c \
			ft_memcmp.c ft_calloc.c \
			ft_strdup.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_itoa.c \
			ft_strmapi.c ft_striteri.c

SRC_BONUS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c

OBJ =		$(SRC:%.c=%.o)

OBJ_BONUS =	$(SRC_BONUS:%.c=%.o)

#los flags
CFLAGS =	-Wall -Wextra -Werror

CC =		gcc

#cabecera/headers (para incluir a todas las funciones de .c)
HDR = libft.h

all:
			$(MAKE) $(NAME)

$(NAME): 	$(OBJ) $(HDR)
			ar -rcs  $(NAME) $(OBJ)

bonus:
			$(MAKE) $(BONUS)

$(BONUS):	$(OBJ) $(OBJ_BONUS) $(HDR)
			ar -rcs  $(NAME) $(OBJ) $(OBJ_BONUS)

%.o:		%.c $(HDHR)
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
			rm -f $(OBJ)
			rm -f $(OBJ_BONUS)

fclean:
			$(MAKE) clean
			rm -f $(NAME)

re:
			$(MAKE) fclean
			$(MAKE) all

.PHONY: all clean fclean re bonus
