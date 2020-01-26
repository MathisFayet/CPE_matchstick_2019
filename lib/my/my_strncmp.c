/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** LIBRAIRIE
*/

#include <stdio.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int result = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
        i++;
    if (s1[i] > s2[i]) {
        result = s1[i] - s2[i];
        return (result);
    } else if (s2[i] > s1[i]) {
        result = s1[i] > s2[i];
        return (result);
    }
    return (0);
}
