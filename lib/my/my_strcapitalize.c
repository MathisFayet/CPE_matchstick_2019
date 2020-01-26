/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** LIBRAIRIE
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] < 'Z')
            str[i] = str[i] + 32;
        if ((str[i - 1] == ' ' || str[i - 1] == '+'
            || str[i - 1] == '-' || i == 0) && str[i] >= 'a' && str[i] < 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}
