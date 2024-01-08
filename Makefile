# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scardell <scardell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 13:29:31 by scardell          #+#    #+#              #
#    Updated: 2024/01/08 14:01:09 by scardell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	   ft_strncmp.c	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	   ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c #ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	   #ft_putchar_fd.c ft_purstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)

#BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
#			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
#			ft_lstmap.c
BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc
RM = @rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
			@ar rcs $(NAME) $(OBJS)

$(OBJS) $(BONUS_OBJS): %.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean $(NAME)

#bonus:		$(OBJS) $(BONUS OBJS)
#			@ar rcs $(NAME) $(OBJS) $(BONUS OBJS)

.PHONY:	all bonus clean re
