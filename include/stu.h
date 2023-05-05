/*
 * E89 Pedagogical & Technical Lab
 * project:     stu
 * created on:  2023-01-30 - 09:32 +0100
 * 1st author:  dylan.le - dylan.le
 * description: include
 */

#ifndef STU_H_

#define STU_H_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char *split_inplace(char *str, char token);
unsigned int stu_strlen(const char *str);
char *strdupcat(const char *s1, const char *s2);
char *loop_read_until(int fd, char token);
char *stu_strdup (const char *str);
char *stu_strchr(const char *str, char search);

#endif /*STU_H_*/
