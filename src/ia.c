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
    while ((dest[line][x] != '|') && (x >= 0))
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

int check_last_line(char **dest, matchstick_t *my_game)
{
    int x = 0;
    int y = 0;
    int counter = 0;

    while (dest[y] != NULL) {
        while (dest[y][x] != '\0') {
            if (dest[y][x] == '|') {
                counter += 1;
                y += 1;
            }
            x += 1;
        }
        y += 1;
        x = 0;
    }
    return (counter);
}

int found_last_line(char **dest, matchstick_t *my_game)
{
    int x = 0;
    int y = 0;

    while (dest[y] != NULL) {
        while (dest[y][x] != '\0') {
            if (dest[y][x] == '|') {
                return (y);
            }
            x += 1;
        }
        y += 1;
        x = 0;
    }
    return (0);
}

int ia_turn2(char **dest, matchstick_t *my_game)
{
    int ia_lines = found_last_line(dest, my_game);
    int ia_matches = 0;

    while (check_my_match3(my_game, dest, ia_matches, ia_lines) != 0) {
        ia_matches = random() % my_game->second;
    }
    remove_my_match_ia(dest, ia_lines, ia_matches, my_game);
    return (0);
}

int ia_turn(char **dest, matchstick_t *my_game, int first, int second)
{
    int ia_lines = 0;
    int ia_matches = 0;

    my_putstr("AI's turn...\n");
    if (check_last_line(dest, my_game) == 1) {
        ia_turn2(dest, my_game);
        return (0);
    }
    while (check_my_match3(my_game, dest, ia_matches, ia_lines) != 0) {
        ia_lines = random() % first;
        ia_matches = random() % second;
    }
    my_game->ia_line = ia_lines;
    my_game->ia_match = ia_matches;
    remove_my_match_ia(dest, ia_lines, ia_matches, my_game);
}
