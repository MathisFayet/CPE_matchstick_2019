/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** LIBRAIRIE
*/

int my_is_prime(int nb)
{
    int a = 2;

    while (nb <= 1) {
        return (0);
    }
    while (nb > a) {
        if (nb % a == 0) {
            return (0);
        } else {
            a++;
        }
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) == 0)
        nb++;
    return (nb);
}
