/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** LIBRAIRIE
*/

#include <stddef.h>

void my_putchar(char);

void my_putstr(char *);

int my_show_word_array(char *const *tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
