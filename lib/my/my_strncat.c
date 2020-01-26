/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** LIBRAIRIE
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int y = 0;

    while (dest[y] != '\0')
        y = y + 1;

    while (src[i] != '\0' && i < nb) {
        dest[y + i] = src[i];
        i = i + 1;
    }
    dest[y + i] = '\0';
    return (dest);
}
