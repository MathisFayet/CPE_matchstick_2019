/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** print_matchstick
*/

#include "matchstick.h"

void dump(char **tab)
{
    int y = 0;

    while (tab[y]) {
        my_putstr(tab[y]);
        y++;
        my_putchar('\n');
    }
}

void fill_star(char *dest)
{
    int x = 0;

    while (dest[x] != '\0') {
        dest[x] = '*';
        x++;
    }
}

void my_print_star(char **dest)
{
    int x = 0;
    int y = 1;
    int size = my_strlen(dest[0]);

    fill_star(dest[0]);
    while (dest[y + 1] != NULL) {
        dest[y][0] = '*'; 
        dest[y][size - 1] = '*'; 
        y += 1;
    }
    fill_star(dest[y]);
    dump(dest);
}