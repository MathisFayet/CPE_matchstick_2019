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

int check_win_and_loose(char **dest, matchstick_t *my_game)
{
    int x = 0;
    int y = 0;
    int counter = 0;

    while (dest[y] != NULL) {
        while (dest[y][x] != '\0') {
            if (dest[y][x] == '|')
                counter += 1;
            x += 1;
        }
        x = 0;
        y += 1;
    }
    if (counter == 0)
        return (check_my_win(dest, my_game));
    return (0);
}

int game_loop(char **dest, int first, int second, matchstick_t *my_game)
{
    int check = 0;

    my_print_star(dest);
    my_putstr("\nYour turn:\n");
    my_game->check_turn = 1;
    if (print_game(second, first, dest, my_game) == 1)
        return (-1);
    dest = remove_my_match(dest, my_game->user_line, my_game->user_match,
                            my_game);
    check = check_win_and_loose(dest, my_game);
    if (check != 0)
        return (check);
    my_print_star(dest);
    my_putchar('\n');
    my_game->check_turn = 2;
    ia_turn(dest, my_game, first, second);
    check = check_win_and_loose(dest, my_game);
    if (check != 0)
        return (check);
    return (0);
}

int function_matchstick(char *first, char *second)
{
    int check = 0;
    char **dest = NULL;
    matchstick_t *my_game = fill_my_struct();

    if (first == NULL || second == NULL)
        return (84);
    dest = create_my_board(my_getnbr(first));
    dest = fill_my_board(my_getnbr(first), dest);
    dest = create_stick(my_getnbr(first), dest);
    my_game->first = my_getnbr(first);
    my_game->second = my_getnbr(second);
    while (1) {
        check = game_loop(dest, my_getnbr(first), my_getnbr(second), my_game);
        if (check > 0)
            return (check);
        if (check == -1)
            break;
    }
    return (0);
}