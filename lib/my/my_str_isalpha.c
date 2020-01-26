/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** LIBRAIRIE
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z')
            || (str[i] >= 'A' && str[i] <= 'Z'))
            i = i + 1;
        else
            return (0);
    }
    return (1);
}
