/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** LIBRAIRIE
*/

void my_putchar(char);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar ('N');
    else
        my_putchar ('P');
}
