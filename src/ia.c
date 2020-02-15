/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** ia
*/

#include "matchstick.h"

char **remove_my_match_ia(char **dest, int line, int match,
                            matchstick_t *my_game)
{
    int x = 0;

    while (dest[line][x] != '\0') {
        x += 1;
    }
    while((dest[line][x] != '|') && (x >= 0))
        x -= 1;
    while (match > 0) {
        dest[line][x] = ' ';
        match -= 1;
        x -= 1;
    }
    my_putstr("AI removed ");
    my_put_nbr(my_game->ia_match);
    my_putstr(" match(es) from line ");
    my_put_nbr(my_game->ia_line);
    my_putchar('\n');
    return (dest);
}

int ia_turn(char **dest, matchstick_t *my_game, int first, int second)
{
    int ia_lines = random() % first;
    int ia_matches = random() % second;

    my_putstr("AI's turn...\n");
    while (check_my_match3(my_game, dest, ia_lines, ia_matches)) {
        ia_lines = random() % first;
        ia_matches = random() % second;
    }
    my_game->ia_line = ia_lines;
    my_game->ia_match = ia_matches;
    remove_my_match_ia(dest, ia_lines, ia_matches, my_game);
}
