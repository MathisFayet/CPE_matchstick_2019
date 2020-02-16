/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** print_game
*/

#include "matchstick.h"

char **remove_my_match(char **dest, int line, int match, matchstick_t *my_game)
{
    int x = 0;

    while (dest[line][x] != '\0') {
        x += 1;
    }
    while ((dest[line][x] != '|') && (x >= 0))
        x -= 1;
    while (match > 0) {
        dest[line][x] = ' ';
        match -= 1;
        x -= 1;
    }
    my_putstr("Player removed ");
    my_put_nbr(my_game->user_match);
    my_putstr(" match(es) from line ");
    my_put_nbr(my_game->user_line);
    my_putchar('\n');
    return (dest);
}

int print_game(int second, int first, char **dest, matchstick_t *my_game)
{
    if (check_my_line(my_game, dest, first) == 1)
        return (1);
    if (check_my_matches(my_game, dest, second, first) == 1)
        return (1);
    return (0);
}