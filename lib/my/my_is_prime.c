/*
** EPITECH PROJECT, 2019
** my_is_prime
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
