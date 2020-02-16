/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** error
*/

#include "matchstick.h"

int check_my_line(matchstick_t *my_game, char **dest, int first)
{
    char *stock = NULL;
    size_t size = 0;
    int line = 0;

    while (1) {
        my_putstr("Line: ");
        if (getline(&stock, &size, stdin) < 0)
            return (1);
        line = my_getnbr(stock);
        if (line == 0 || line > first) {
            my_putstr("Error: this line is out of range\n");
        } else if (line < 0){
            my_putstr("Error: invalid input (positive number expected)\n");
        } else {
            break;
        }
    }
    my_game->user_line = my_getnbr(stock);
    return (0);
}

int check_my_match3(matchstick_t *my_game, char **dest, int match, int line)
{
    int x = 0;
    int y = line;
    int stock = 0;

    if ((line <= 0 || line > my_game->first) ||
        (match <= 0 || match > my_game->second))
        return (2);
    while (dest[y][x] != '\0') {
        if (dest[y][x] == '|')
            stock += 1;
        x += 1;
    }
    if (match > stock) {
        if (my_game->check_turn == 1)
            my_putstr("Error: not enough matches on this line\n");
        return (1);
    }
    return (0);
}

int check_my_match2(matchstick_t *my_game, char **dest, int second, int match)
{
    if (match > second) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(second);
        my_putstr(" matches per turn\n");
        return (1);
    }
    if (check_my_match3(my_game, dest, match, my_game->user_line) == 1)
        return (1);
    return (0);
}

int check_my_matches1(char **dest, int second, int match,
                        matchstick_t *my_game)
{
    int status = 0;

    if (match == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        status = 1;
    } else if (match < 0){
        my_putstr("Error: invalid input (positive number expected)\n");
        status = 1;
    } else {
        status = check_my_match2(my_game, dest, second, match);
    }
    return (status);
}

int check_my_matches(matchstick_t *my_game, char **dest, int second,
                        int first)
{
    char *stock = NULL;
    size_t size = 0;
    int match = 0;
    int status = 0;

    my_putstr("Matches: ");
    if (getline(&stock, &size, stdin) < 1)
        return (1);
    match = my_getnbr(stock);
    status = check_my_matches1(dest, second, match, my_game);
    if (status == 1)
        print_game(second, first, dest, my_game);
    else
        my_game->user_match = my_getnbr(stock);
    return (0);
}
