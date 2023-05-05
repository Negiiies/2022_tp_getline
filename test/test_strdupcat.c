#include "stu.h"
#include <criterion/criterion.h>
Test(strdupcat, normal) {
    char *str = strdupcat("hello", " world");
    cr_assert_str_eq(str, "hello world");
    free(str);
}
Test(strdupcat, empty) {
    char *str = strdupcat("", "world");
    cr_assert_str_eq(str, "world");
    free(str);
}
