# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhoulman <lhoulman@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 20:10:20 by lhoulman          #+#    #+#              #
#    Updated: 2022/02/05 14:45:01 by lhoulman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c ft_calloc.c ft_strlcpy.c ft_strlcat.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_striteri.c

OBJS	=	${SRCS:.c=.o}

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS	=	${BONUS:.c=.o}

ifdef WITH_BONUS
OBJS += $(BONUS_OBJS)
endif

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: ${NAME}

${NAME}: ${OBJS}
		ar crs ${NAME} ${OBJS}
# Rule to remove all the object files and directory.
clean:
		${RM} ${OBJS} ${BONUS_OBJS}
# Rule to remove everything that has been created by the makefile.
fclean: clean
		${RM} ${NAME}
# Rule to re-make everything.
re: fclean all

bonus: 
	@make $(NAME) WITH_BONUS=1

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all, clean, fclean, re