# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:51:46 by grochefo          #+#    #+#              #
#    Updated: 2019/01/28 16:49:51 by grochefo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES_C = 	convtype/ft_atoi.c \
		convtype/ft_itoa.c \
		convtype/ft_llutoa_base.c \
		convtype/ft_ltoa_base.c \
		convtype/ft_itoabase.c \
		manage_list/ft_lstdel.c \
		manage_list/ft_lstdelone.c \
		manage_list/ft_lstiter.c \
		manage_list/ft_lstmap.c \
		manage_list/ft_lstnew.c \
		manage_list/ft_lstadd.c \
		mem/ft_memcpy.c \
		mem/ft_memcmp.c \
		mem/ft_memccpy.c \
		mem/ft_memchr.c \
		mem/ft_memset.c \
		mem/ft_memdel.c \
		mem/ft_memmove.c \
		mem/ft_memalloc.c \
		manage_str/ft_strrev.c \
		manage_str/ft_strequ.c	\
		manage_str/ft_strncpy.c \
		manage_str/ft_toupper.c \
		manage_str/ft_striteri.c \
		manage_str/ft_strnew.c \
		manage_str/ft_strcat.c \
		manage_str/ft_strjoin.c \
		manage_str/ft_strnstr.c \
		manage_str/ft_strchr.c \
		manage_str/ft_strlcat.c \
		manage_str/ft_strrchr.c \
		manage_str/ft_putchar.c \
		manage_str/ft_strclr.c	\
		manage_str/ft_strlen.c \
		manage_str/ft_strsplit.c \
		manage_str/ft_putendl.c \
		manage_str/ft_strcpy.c \
		manage_str/ft_strmapi.c \
		manage_str/ft_strsub.c \
		manage_str/ft_strcmp.c \
		manage_str/ft_strmap.c \
		manage_str/ft_strstr.c \
		manage_str/ft_getnumw.c \
		manage_str/ft_isalnum.c \
		manage_str/ft_isalpha.c \
		manage_str/ft_isascii.c \
		manage_str/ft_isdigit.c \
		manage_str/ft_strdel.c \
		manage_str/ft_strncat.c \
		manage_str/ft_strtrim.c \
		manage_str/ft_isprint.c \
		manage_str/ft_putnbr.c \
		manage_str/ft_strdup.c \
		manage_str/ft_strncmp.c \
		manage_str/ft_tolower.c \
		manage_str/ft_putstr.c \
		manage_str/ft_striter.c \
		manage_str/ft_strnequ.c \
		manage_str/ft_strjoinplus.c \
		manage_str/ft_strndup.c \
		manage_fd/ft_putchar_fd.c \
		manage_fd/ft_putnbr_fd.c \
		manage_fd/ft_putstr_fd.c \
		manage_fd/ft_putendl_fd.c \
		ft_bzero.c \
		get_next_line.c

INC = get_next_line.h libft.h
OBJ = $(patsubst %.c,%.o,$(FILES_C))
FLAGS = -Wall -Werror -Wextra

.PHONY : clean fclean re all
.SILENT : clean fclean re all $(NAME)
all: $(NAME)
	
$(NAME) : $(FILES_C) $(INC) $(OBJ)
	echo "LIBFT compiling..."
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	echo "LIBFT compilation over."

%.o : %.c
	@gcc -I. -o $@ -c $<

clean :
	echo "Cleaning LIBFT..."
	rm -f $(OBJ)
	echo ".o removed."

fclean: clean
	    rm -f $(NAME)
		echo "$(NAME) removed."
re: fclean all
