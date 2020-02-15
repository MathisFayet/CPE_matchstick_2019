/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** check_ia
*/

#include "matchstick.h"

int check_my_win(char **dest, matchstick_t *my_game)
{
    if (my_game->check_turn == 1) {
        my_print_star(dest);
        my_putstr("You lost, too bad...\n");
        return (2);
    }
    if (my_game->check_turn == 2) {
        my_print_star(dest);
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    return (0);
}