/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** LIBRAIRIE
*/

#include <stdio.h>
#include <stddef.h>

int lenght2(char const *str, int i)
{
    int k = 0;

    if (str == NULL)
        return (84);
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
        i++;
        k++;
    }
    return (k);
}

int p(int n, int power)
{
    int rest = 1;
    int ref = n;

    while (power > 0) {
        rest = rest * ref;
        power--;
    }
    return (rest);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int size = 0;
    size_t result = 0;

    while (str[i] != '\0' && (str[i] < '0' || str[i] > '9')) {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    size = lenght2(str, i);
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9')) {
        result = result + ((str[i] - '0') * p(10, size - 1));
        size--;
        i++;
    }
    if (result <= 2147483648 || result >= -2147483651)
        return (result * sign);
    return (0);
}
