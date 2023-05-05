/*
 * E89 Pedagogical & Technical Lab
 * project:     dupcat
 * created on:  2023-02-20 - 16:49 +0100
 * 1st author:  dylan.le - dylan.le
 * description: getline
 */
#include "stu.h"


char *strdupcat(const char *s1, const char *s2)
{
    char *stock;
    int i;
    int j;

    j = 0;
    i = 0;
    stock = malloc (sizeof(char) * (stu_strlen(s1) + stu_strlen(s2) + 1));
    while (s1[i] != '\0') {
        stock[i]= s1[i];
        i += 1;
    }
    while (s2[j] != '\0') {
        stock[i] = s2[j];
        i += 1;
        j += 1;
    }
    //    stock[i]= '\0';
    return (stock);
}
