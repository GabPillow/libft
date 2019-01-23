# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:51:46 by grochefo          #+#    #+#              #
#    Updated: 2019/01/23 17:46:00 by grochefo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES_C = 	ft_atoi.c \
		ft_lstdel.c \
		ft_memdel.c \
		ft_putstr_fd.c \
		ft_striteri.c \
		ft_strnew.c \
		ft_bzero.c \
		ft_lstdelone.c \
		ft_memmove.c \
		ft_strcat.c \
		ft_strjoin.c \
		ft_strnstr.c \
		ft_getnumw.c \
		ft_lstiter.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_isalnum.c \
		ft_lstmap.c \
		ft_putchar.c \
		ft_strclr.c	\
		ft_strlen.c \
		ft_strsplit.c \
		ft_isalpha.c \
		ft_lstnew.c \
		ft_putchar_fd.c \
		ft_strcmp.c \
		ft_strmap.c \
		ft_strstr.c \
		ft_isascii.c \
		ft_memalloc.c \
		ft_putendl.c \
		ft_strcpy.c \
		ft_strmapi.c \
		ft_strsub.c \
		ft_isdigit.c \
		ft_memccpy.c \
		ft_putendl_fd.c \
		ft_strdel.c \
		ft_strncat.c \
		ft_strtrim.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_putnbr.c \
		ft_strdup.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_itoa.c \
		ft_memcmp.c \
		ft_putnbr_fd.c \
		ft_strequ.c	ft_strncpy.c \
		ft_toupper.c \
		ft_lstadd.c \
		ft_memcpy.c \
		ft_putstr.c \
		ft_striter.c \
		ft_strnequ.c \
		ft_strjoinplus.c \
		ft_strndup.c \
		get_next_line.c \
		ft_itoabase.c \
		ft_strrev.c

INC = get_next_line.h libft.h
OBJ = $(patsubst %.c,%.o,$(FILES_C))
FLAGS = -Wall -Werror -Wextra

.PHONY : clean fclean re all
.SILENT : clean fclean re all $(NAME)

all: $(NAME)

$(NAME) : $(FILES_C) $(INC)
	echo "LIBFT compiling..."
	gcc -I.	$(FLAGS) -c $(FILES_C)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	echo "LIBFT compilation over."

clean :
	echo "Cleaning LIBFT..."
	rm -f $(OBJ)
	echo ".o removed."

fclean: clean
	    rm -f $(NAME)
		echo "$(NAME) removed."
re: fclean all
