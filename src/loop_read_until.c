/*
 * E89 Pedagogical & Technical Lab
 * project:     loop_read
 * created on:  2023-02-21 - 10:44 +0100
 * 1st author:  dylan.le - dylan.le
 * description: getline
 */

#include "stu.h"

char *loop_read_until(int fd, char token)
{
    char *str;
    char *buffer;
    char *tmp;
    int size_read;

    buffer = malloc(sizeof(char) * 17);
    size_read = read(fd, buffer, 16);
    buffer[size_read] = '\0';
    str = stu_strdup(buffer);
    while (size_read > 0) {
        size_read = read(fd, buffer, 16);
        buffer[size_read] = '\0';
        tmp = str;
        str = strdupcat(str, buffer);
        free(tmp);
        free (buffer);
        if (stu_strchr(str, token) != NULL) {
            return str;
        }
    }
    free(buffer);
    return str;
}
