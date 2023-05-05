#include <criterion/criterion.h>
#include "stu.h"
#include <string.h>
Test(split, normal) {
    char token;
    char liste[5] = {'b', 'o', 'u', 'e','\0'};
    token = 'o';
    cr_assert_eq(&split_inplace(liste, token)[0], &liste[2]);
}
Test(split, check) {
    char *str;

    str = strdup("Dylan is Gay");
    cr_assert_str_eq(split_inplace(str, ' '), "is Gay");
    cr_assert_str_eq(str, "Dylan");
    free(str);
}

