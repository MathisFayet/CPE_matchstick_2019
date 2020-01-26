/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** LIBRAIRIE
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
            i = i + 1;
        } else {
            str[i] = str[i];
            i = i + 1;
        }
    }
    return (str);
}
