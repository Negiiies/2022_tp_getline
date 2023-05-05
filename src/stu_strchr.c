/*
 * E89 Pedagogical & Technical Lab
 * project:     strchr
 * created on:  2023-01-30 - 10:44 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 201
 */

#include <stddef.h>
#include "stu.h"

char *stu_strchr(const char *str, char search)
{
    int i;
    char *r;

    i = 0;
    if (!str) {
        return NULL;
    }
    while(str[i] != '\0') {
        if (search == str[i]) {
            r = (char*)str;
            return (&r[i]);
        }
        i += 1;
    }

    return 0;
}


