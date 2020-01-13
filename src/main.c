/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** main.c
*/

int main(int ac, char **av)
{
    int win;

    if (ac == 3) {
        win = function();
    if (win == 1)
        return(1);
     else if (win == 2)
        return (2);
    else
        return (0);
    }
    return(0);
}