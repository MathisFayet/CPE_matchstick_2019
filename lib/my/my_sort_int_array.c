/*
** EPITECH PROJECT, 2019
** my_sort_in_array
** File description:
** LIBRAIRIE
*/

#include <stdlib.h>

#include <stdio.h>

void *my_sort_int_array(int *array, int size)
{
    int i = 0;
    int stock = 0;

    while (i < size - 1) {
        if (array[i] > array[i + 1]) {
            stock = array[i];
            array[i] = array[i + 1];
            array[i + 1] = stock;
            i = 0;
        } else {
            i++;
        }
    }
}
