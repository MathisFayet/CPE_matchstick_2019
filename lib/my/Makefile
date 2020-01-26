##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## LIBRAIRIE
##

SRC	=		my_isneg.c					\
			my_putstr.c					\
			my_put_nbr.c				\
			my_swap.c					\
			my_strlen.c					\
			my_getnbr.c					\
			my_sort_int_array.c 		\
			my_compute_square_root.c 	\
			my_compute_power_rec.c		\
			my_is_prime.c				\
			my_find_prime_sup.c			\
			my_strcpy.c					\
			my_strncpy.c				\
			my_revstr.c					\
			my_strstr.c					\
			my_strcmp.c					\
			my_strncmp.c				\
			my_strupcase.c				\
			my_strlowcase.c				\
			my_str_isalpha.c			\
			my_str_isnum.c				\
			my_str_islower.c			\
			my_str_isupper.c			\
			my_str_isprintable.c		\
			my_strcapitalize.c			\
			my_showstr.c				\
			my_showmen.c				\
			my_putchar.c				\
			my_strcat.c					\
			my_strncat.c				\
			my_strdup.c 				\
			my_show_word_array.c		\
			my_str_to_word_array.c

OBJ	=				$(SRC:.c=.o)

NAME	=			libmy.a

NAME_MY_H	=		my.h

NAME_INCLUDE	=	include

all:				$(NAME)

$(NAME):	$(OBJ)
			@ar rc $(NAME) $(OBJ)
			@cp -p $(NAME) ../
			@rm -f $(OBJ)

clean:
			@rm -f $(OBJ)
			@rm -f ../libmy.a

fclean: 	clean
			@rm -f $(NAME)

re:			fclean all

%.o:		%.c
			@echo -n "Compiling: $<"	
			@$(CC) $(CFLAGS) -c $< -o $@ && echo -e " [\033[32mOK\033[0m]" || echo -e " [\033[31mKO\033[0m]"

.PHONY:		all clean fclean re $(NAME)