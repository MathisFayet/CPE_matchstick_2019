/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** matchstick
*/

#include "matchstick.h"

char **fill_my_board(int first, char **dest)
{
    int x = 0;
    int y = 0;

    while (dest[y] != NULL) {
        while (x < ((first * 2) + 1)) {
            dest[y][x] = ' ';
            x += 1;
        }
        dest[y][x] = '\0';
        y += 1;
        x = 0;
    }
    return (dest);
}

char **create_my_board(int first)
{
    int x = 0;
    int y = 0;
    int size = first + 2;
    char **dest = malloc(sizeof(char *) * (first + 3));

    if (dest == NULL)
        return (NULL);
    while (y < size) {
        dest[y] = malloc(sizeof(char) * ((first * 2) + 2));
        y += 1;
    }
    dest[y] = NULL;
    return (dest);
}

int function_matchstick(char *first, char *second)
{
    char **dest = NULL;

    if (first == NULL || second == NULL)
        return (84);
    dest = create_my_board(my_getnbr(first));
    dest = fill_my_board(my_getnbr(first), dest);
    dest = create_stick(my_getnbr(first), dest);
    my_print_star(dest);
    my_putchar('\n');
    print_game(my_getnbr(second), my_getnbr(first), dest);
    dest = remove_my_match(dest, first, second);
    return (0);
}