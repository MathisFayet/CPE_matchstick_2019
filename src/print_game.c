/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** print_game
*/

#include "matchstick.h"

char **remove_my_match(char **dest, int line, int match)
{
    int x = 0;
    int stock = 0;

    while (dest[line][x] != '\0') {
        x += 1;
    }
    while(dest[line][x] != '|' || dest[line][x] != '*')
        x -= 1;
    while (match > 0) {
        dest[line][x] = ' ';
    }
    return (dest);
}
void print_game(int second, int first, char **dest)
{
    char *stock = NULL;

    my_putstr("Your turn:\n");
    my_putstr("Line: ");
    stock = get_next_line(0);
    my_putstr("Matches: ");
    stock = get_next_line(0);
    my_putstr("Player removed ");
    my_putstr(stock);
    my_putstr(" match(es) from line ");
    my_putstr(stock);
    my_putchar('\n');
}