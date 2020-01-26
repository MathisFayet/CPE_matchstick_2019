/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** LIBRAIRIE
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = 0;
    char *lenth;

    while (src[i] != '\0') {
        i = i + 1;
    }
    src = malloc(sizeof(char) * (i + 1));
    i = 0;
    while (src[i] != '\0') {
        lenth[i] = src[i];
        i = i + 1;
    }
    return (lenth);
}
