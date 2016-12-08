NAME = libft.a

FILENAMES = ft_strlen.c ft_atoi.c ft_putchar.c ft_putstr.c ft_strcpy.c ft_strnew.c ft_strncpy.c ft_strcat.c
FILENAMES += ft_putnbr.c ft_putendl.c ft_strncat.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_tolower.c
FILENAMES += ft_toupper.c ft_isprint.c ft_isascii.c ft_itoa.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strstr.c
FILENAMES += ft_strcmp.c ft_strncmp.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strlcat.c
FILENAMES += ft_strchr.c ft_strrchr.c ft_strnstr.c ft_digits.c ft_memalloc.c ft_memdel.c ft_strdel.c ft_strclr.c
FILENAMES += ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strjoin.c ft_strsub.c
FILENAMES += ft_strtrim.c ft_strsplit.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c
FILENAMES += ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_strrev.c ft_isprime.c ft_putstrarr.c

SRCS = $(FILENAMES)
OBJS = $(FILENAMES:.c=.o)

CC = gcc
CFLAGS = -Wextra -Wall -Werror
CFLAGS += -I libft.h

all: $(NAME)

$(NAME): $(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS)
		ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean