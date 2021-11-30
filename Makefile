# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 15:45:50 by jecolmou          #+#    #+#              #
#    Updated: 2021/11/29 16:34:41 by jecolmou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
SRCS    = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJS    = ${SRCS:.c=.o}
HEADER  = includes
FOLDER     = srcs

CC        = gcc
CFLAGS  = -Wall -Wextra -Werror
RM        = rm -f

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

%.o: %.c
	${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}

all:        ${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} libft.a

re:            fclean all
