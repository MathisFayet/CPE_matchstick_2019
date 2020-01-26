/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** LIBRAIRIE
*/

#include <stddef.h>
#include <string.h>
#include <stdio.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int y = 0;

    while (str[i] != to_find[y]) {
        i = i + 1;
    }
    while (to_find[y] != '\0' && to_find[y] == str[i]) {
        y = y + 1;
    }
    if (str[i] == '\0') {
        return (NULL);
    }
    else {
        return (&str[i]);
    }
}
