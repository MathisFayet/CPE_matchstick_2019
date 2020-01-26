/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** LIBRAIRIE
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            i = i + 1;
        } else {
            str[i] = str[i];
            i = i + 1;
        }
    }
    return (str);
}
