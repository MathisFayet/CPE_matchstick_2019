/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** Epitech Project
*/

#include "my.h"
#include "matchstick.h"

int main (int argc, char **argv)
{
    if (argc != 3)
        return (84);
    if (my_getnbr(argv[1]) <= 0 || my_getnbr(argv[1]) >= 100)
        return (84);
    else {
        if (function_matchstick(argv[1], argv[2]) == 84)
            return (84);
    }
    return (0);
}