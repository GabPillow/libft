# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:51:46 by grochefo          #+#    #+#              #
#    Updated: 2019/03/22 18:52:40 by grochefo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFILES_C = 	libft/convtype/ft_atoi.c \
		libft/convtype/ft_itoa.c \
		libft/convtype/ft_bintoa.c \
		libft/convtype/ft_llutoa_base.c \
		libft/convtype/ft_ltoa_base.c \
		libft/convtype/ft_itoabase.c \
		libft/convtype/ft_uitoa_base.c \
		libft/convtype/ft_ftoa.c \
		libft/convtype/ft_lltoa.c \
		libft/convtype/ft_ultoa_base.c \
		libft/convtype/ft_lltoa_base.c \
		libft/convtype/arrondi.c \
		libft/convtype/ft_llutoa.c \
		libft/convtype/ft_uitoa.c \
		libft/convtype/ft_ultoa.c \
		libft/manage_list/ft_lstdel.c \
		libft/manage_list/ft_lstdelone.c \
		libft/manage_list/ft_lstiter.c \
		libft/manage_list/ft_lstmap.c \
		libft/manage_list/ft_lstnew.c \
		libft/manage_list/ft_lstadd.c \
		libft/mem/ft_memcpy.c \
		libft/mem/ft_memcmp.c \
		libft/mem/ft_memccpy.c \
		libft/mem/ft_memchr.c \
		libft/mem/ft_memset.c \
		libft/mem/ft_memdel.c \
		libft/mem/ft_memmove.c \
		libft/mem/ft_memalloc.c \
		libft/manage_str/ft_strrev.c \
		libft/manage_str/ft_strequ.c	\
		libft/manage_str/ft_strncpy.c \
		libft/manage_str/ft_toupper.c \
		libft/manage_str/ft_striteri.c \
		libft/manage_str/ft_strnew.c \
		libft/manage_str/ft_strcat.c \
		libft/manage_str/ft_strjoin.c \
		libft/manage_str/ft_strnstr.c \
		libft/manage_str/ft_strchr.c \
		libft/manage_str/ft_strlcat.c \
		libft/manage_str/ft_strrchr.c \
		libft/manage_str/ft_putchar.c \
		libft/manage_str/ft_strclr.c	\
		libft/manage_str/ft_strlen.c \
		libft/manage_str/ft_strsplit.c \
		libft/manage_str/ft_putendl.c \
		libft/manage_str/ft_strcpy.c \
		libft/manage_str/ft_strmapi.c \
		libft/manage_str/ft_strsub.c \
		libft/manage_str/ft_strcmp.c \
		libft/manage_str/ft_strmap.c \
		libft/manage_str/ft_strstr.c \
		libft/manage_str/ft_getnumw.c \
		libft/manage_str/ft_isalnum.c \
		libft/manage_str/ft_isalpha.c \
		libft/manage_str/ft_isascii.c \
		libft/manage_str/ft_isdigit.c \
		libft/manage_str/ft_strdel.c \
		libft/manage_str/ft_strncat.c \
		libft/manage_str/ft_strtrim.c \
		libft/manage_str/ft_isprint.c \
		libft/manage_str/ft_putnbr.c \
		libft/manage_str/ft_strdup.c \
		libft/manage_str/ft_strncmp.c \
		libft/manage_str/ft_tolower.c \
		libft/manage_str/ft_putstr.c \
		libft/manage_str/ft_striter.c \
		libft/manage_str/ft_strnequ.c \
		libft/manage_str/ft_strjoinplus.c \
		libft/manage_str/ft_strndup.c \
		libft/manage_str/ft_strjoinnplus.c\
		libft/manage_str/ft_strlenn.c \
		libft/manage_str/ft_strncut.c \
		libft/manage_fd/ft_putchar_fd.c \
		libft/manage_fd/ft_putnbr_fd.c \
		libft/manage_fd/ft_putstr_fd.c \
		libft/manage_fd/ft_putendl_fd.c \
		libft/ft_bzero.c \
		libft/get_next_line.c \
		libft/ft_exit.c

PRINTFILES_C = ft_printf.c find_format.c error.c create_seg.c ft_print_d.c \
ft_print_base.c ft_manageflag.c ft_print_csp.c

LIBINC = libft/get_next_line.h libft/libft.h
PRINTINC = ft_printf.h
OBJ = $(patsubst %.c,%.o,$(LIBFILES_C) $(PRINTFILES_C))

.PHONY : clean fclean re all
.SILENT : clean fclean re all $(NAME)
all: $(NAME)

$(NAME) : $(FILES_C) $(INC) $(OBJ)
	echo "\033[1;33mLIBFTPRINTF compiling...\033[0m"
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	echo "\033[32mLIBFTPRINTF compilation over.\033[0m"

%.o : %.c
	@gcc -I. -I./libft -o $@ -c $<

clean :
	echo "\033[1;33mCleaning LIBFTPRINTF...\033[0m"
	rm -f $(OBJ)
	echo "\033[0;35m.o removed.\033[0m"

fclean: clean
	    rm -f $(NAME)
		echo "\033[0;35m$(NAME) removed.\033[0m"
re: fclean all
