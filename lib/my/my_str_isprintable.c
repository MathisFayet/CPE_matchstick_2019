/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** LIBRAIRIE
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <= 126)
        {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
