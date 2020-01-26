/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** LIBRAIRIE
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int result = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }
    if (s1[i] > s2[i]) {
        result = s1[i] - s2[i];
        return (result);
    } else if (s2[i] > s1[i]) {
        result = s1[i] - s2[i];
        return (result);
    }
    return (0);
}
