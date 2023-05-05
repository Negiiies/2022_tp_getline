/*
 * E89 Pedagogical & Technical Lab
 * project:     inplace
 * created on:  2023-02-20 - 09:35 +0100
 * 1st author:  dylan.le - dylan.le
 * description: getline
 */
#include <stddef.h>

char *split_inplace(char *str, char token)
{
    int i;

    i = 0;
    if (!str) {
        return NULL;
    }
    while(str[i] != token) {
        i += 1;
    }
    str[i] = '\0';
    return(&(str[i + 1]));
}
