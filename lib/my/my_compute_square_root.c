/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** LIBRAIRIE
*/

#include <stdio.h>

int my_compute_square_root(int nb)
{
    int i = 1;
    if (nb <= 0)
        return (0);
    while (i * i != nb) {
        i++;
    }
    return (nb);
}