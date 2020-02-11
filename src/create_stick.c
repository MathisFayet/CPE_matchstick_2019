/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** create_pip
*/

#include "matchstick.h"

char **create_stick(int first, char **dest)
{
    int x = first;
    int y = 1;
    int stick = 1;
    int tmp = x;
    int tmp2 = stick;

    while (dest[y + 1] != NULL) {
        while (stick > 0) {
            dest[y][x] = '|';
            stick -= 1;
            x -= 1;
        }
        stick = tmp2 + 2;
        tmp2 += 2;
        tmp += 1;
        x = tmp;
        y += 1;
    }
    return (dest);
}