##
## EPITECH PROJECT, 2019
## CPE_solostumper_3_2019
## File description:
## Makefile
##

CC			= 	gcc

SRC			=	src/main.c				\
				src/matchstick.c		\
				src/print_matchstick.c	\
				src/create_stick.c		\
				src/print_game.c		\
				src/error.c				\
				src/ia.c				\
				src/check_ia.c

OBJ			=	$(SRC:.c=.o)

OBJ_TESTS	=	$(SRC_TEST:.c=.o)

NAME		=	matchstick

TEST_NAME	= 	unit_test

CFLAGS		= 	-I./include -g

LDFLAGS		= 	-L./lib/my -lmy

all:			$(NAME)

$(NAME):		$(OBJ)
			@make -C lib/my
			@$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run:	$(OBJ_TESTS)
			$(CC) -o $(TEST_NAME) $(OBJ_TESTS) -lcriterion $(LDFLAGS) --coverage
			./$(TEST_NAME)

gcovr_html:
			gcovr --exclude $(TEST_FILES) --html --html-details -o coverage.html
			google-chrome coverage.html

clean:
			@rm -f $(OBJ)
			@rm -f *.gc*
			@rm -f coverage.*
			@rm -f $(TEST_NAME)

fclean: 		clean
			@rm -f $(NAME)

re:			fclean all

%.o:			%.c
			@echo -n "Compiling main scripts: $<"
			@$(CC) $(CFLAGS) -c $< -o $@ && echo -e " [\033[32mOK\033[0m]" || echo -e " [\033[31mKO\033[0m]"

.PHONY:		all unit_test clean fclean re