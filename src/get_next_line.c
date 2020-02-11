/*
** EPITECH PROJECT, 2019
** CPE_getnextline_2019
** File description:
** get_next_line.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define READ_SIZE (1)

static int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
}

char *my_strcat(char *tmp, char *buffer)
{
    char *str = malloc(sizeof(char) * (my_strlen(tmp) + my_strlen(buffer) + 1));
    int first = 0;
    int second = 0;

    while (tmp[first] != '\0') {
        str[first] = tmp[first];
        first += 1;
    }
    while (buffer[second] != '\0') {
        str[first] = buffer[second];
        second += 1;
        first += 1;
    }
    str[first] = '\0';
    return (str);
}

char *function_disp(char **buffer, char *tmp)
{
    int first = 0;
    int second = 0;

    while (tmp[first] != '\n')
        ++first;
    (*buffer) = malloc(sizeof(char) * (first + 1));
    first = 0;
    while (tmp[first] != '\n' && tmp[first] != '\0') {
        (*buffer)[second] = tmp[first];
        second += 1;
        first += 1;
    }
    (*buffer)[second] = '\0';
    return (&tmp[first + 1]);
}

static int check_function(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            return (1);
        i += 1;
    }
    return (0);
}

char *get_next_line(int fd)
{
    static char *tmp = NULL;
    char *buffer = malloc(sizeof(char) * (READ_SIZE + 1));
    static int read_characters = 1;

    if (tmp == NULL)
        tmp = malloc(sizeof(char) * (READ_SIZE + 1));
    if (tmp[0] != '\0') {
        tmp = function_disp(&buffer, tmp);
        return (buffer);
    }
    while (read_characters > 0 && check_function(buffer) == 0) {
        read_characters = read(fd, buffer, READ_SIZE);
        buffer[read_characters] = '\0';
        tmp = my_strcat(tmp, buffer);
    }
    if (tmp[0] == '\0')
        return NULL;
    tmp = function_disp(&buffer, tmp);
    return (buffer);
}