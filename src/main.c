/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** Epitech Project
*/

#include "my.h"
#include "matchstick.h"

matchstick_t *fill_my_struct(void)
{
    matchstick_t *my_game = malloc(sizeof(matchstick_t));

    my_game->check_turn = 0;
    my_game->first = 0;
    my_game->ia_line = 0;
    my_game->ia_match = 0;
    my_game->second = 0;
    my_game->user_line = 0;
    my_game->user_match = 0;
    return (my_game);
}

int main(int argc, char **argv)
{
    int status = 0;

    if (argc != 3)
        return (84);
    if (my_getnbr(argv[1]) <= 0 || my_getnbr(argv[1]) >= 100)
        return (84);
    else {
        if ((status = function_matchstick(argv[1], argv[2])) != 0)
            return (status);
    }
    return (0);
}