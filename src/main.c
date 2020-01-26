/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** Epitech Project
*/

#include "my.h"

int main (int argc, char **argv)
{
    if (argc > 3 || argc <= 2) {
        my_putstr("Please check the argurment please...\n");
        return (84);
    }
    if (my_getnbr(argv[2]) <= 0) {
        my_putstr("Please give a number for the second argument...");
        return (84);
    }
    if (my_getnbr(argv[1]) > 100 || my_getnbr(argv[1]) < 1) {
        my_putstr("Numbers of sticks invalid !\n");
        return (84);
    }
}