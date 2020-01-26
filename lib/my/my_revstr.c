/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** LIBRAIRIE
*/

#include <stdlib.h>

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int i = 0;
    int y = 0;
    int div = my_strlen(str);
    char swap;

    while (str[i] != '\0') {
        i++;
    }
    while (y < (div / 2)) {
        swap = str[y];
        str[y] = str[i - 1];
        str[i - 1] = swap;
        i--;
        y++;
    }
    return (str);
}
