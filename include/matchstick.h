/*
** EPITECH PROJECT, 2019
** CPE_solostumper_3_2019
** File description:
** lol.h
*/

#ifndef MY_FUNCTION_STR_H
#define MY_FUNCTION_STR_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "my.h"

typedef struct matchstick_s
{
    int user_line;
    int user_match;
    int ia_line;
    int ia_match;
    int check_turn;
    int first;
    int second;
} matchstick_t;

matchstick_t *fill_my_struct(void);
int function_matchstick(char *first, char *second);
void my_print_star(char **dest);
char **create_stick(int first, char **dest);
int print_game(int second, int first, char **dest, matchstick_t *my_game);
int check_my_match2(matchstick_t *my_game, char **dest, int second,
                    int match);
int check_my_matches(matchstick_t *my_game, char **dest, int second,
                    int first);
int check_my_line(matchstick_t *my_game, char **dest, int first);
int check_my_match3(matchstick_t *my_game, char **dest, int match, int line);
int ia_turn(char **dest, matchstick_t *my_game, int first, int second);
int check_my_win(char **dest, matchstick_t *my_game);
char **remove_my_match(char **dest, int line, int match,
                        matchstick_t *my_game);

#endif /* !MY_FUNCTION_STR_H */