/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** LIBRAIRIE
*/

#include <unistd.h>

char *my_strncpy(char *dest, char const *str, int n)
{
    int i = 0;

    while (i < n && str[i] != '\0') {
        dest[i] = str[i];
        i = i + 1;
    }
    while (i < n) {
        dest[i] = '\0';
        i = i + 1;
    }
    return (dest);
}
