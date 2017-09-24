# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnelson <dnelson@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/02 15:23:48 by dnelson           #+#    #+#              #
#    Updated: 2017/09/23 17:20:26 by dnelson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILENAMES = ft_strlen.c \
			ft_atoi.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_strcpy.c \
			ft_strnew.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_putnbr.c \
			ft_putendl.c \
			ft_strncat.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_isprint.c \
			ft_isascii.c \
			ft_itoa.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_strstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_digits.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strjoin.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_strrev.c \
			ft_isprime.c \
			ft_putstrarr.c \
			ft_swap.c \
			ft_strlenc.c \
			ft_itoa_base.c

SRCS = $(FILENAMES)
OBJS = $(FILENAMES:.c=.o)

CFLAGS = -Wextra -Wall -Werror
CFLAGS += -I ./includes

all: $(NAME)

$(NAME): $(OBJS)
		@ar rc $(NAME) $(OBJS)
		@echo "Libft Compilation Complete"

objs/%.o: srcs/%.c | objs
		@gcc $(CFLAGS) -c $^ -o $@

objs:
		@mkdir objs

clean:
		@rm -rf objs
		@echo "Libft Objects Files Removed"

fclean: clean
		@/bin/rm -f $(NAME)
		@echo "Libft Library File Removed"

re: fclean all

.PHONY: re clean fclean
