/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** LIBRAIRIE
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > '0' && str[i] < '9') {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
