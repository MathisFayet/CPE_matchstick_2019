/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** LIBRAIRIE
*/

void my_putchar(char);

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        if (nb <= -10)
            my_put_nbr((nb/10) * -1);
        my_putchar(((nb % 10) * - 1) + 48);
    } else {
        if (nb >= 10)
            my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
}