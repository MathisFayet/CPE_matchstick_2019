/*
** EPITECH PROJECT, 2019
** CPE_solostumper_3_2019
** File description:
** lol.h
*/

#ifndef MY_FUNCTION_STR_H
#define MY_FUNCTION_STR_H

#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

#include "my.h"

int function_matchstick(char *first, char *second);
void my_print_star(char **dest);
char **create_stick(int first, char **dest);
char *get_next_line(int fd);
void print_game(int second, int first, char **dest);

#endif /* !MY_FUNCTION_STR_H */