/*
 * E89 Pedagogical & Technical Lab
 * project:     loop
 * created on:  2023-05-02 - 14:28 +0200
 * 1st author:  dylan.le - dylan.le
 * description: unitl
 */

#include <criterion/criterion.h>
#include "stu.h"
#include <fcntl.h>

Test(lru, normal)
{
    char *str;
    int fd;

    fd = open("fichier.txt", O_RDONLY);
    str = loop_read_until(fd,'?');
    cr_assert_str_eq(str, "bonsoir il faitt moche non ?ttty");
    close(fd);
    free(str);
}


/*
 * Test(lru, read_empty)
 * {
 *      char *str;
 *      int txt;
 * 
 *      txt = open("fichier2.txt", O_RDONLY);
 *      str = loop_read_until(txt, '\n');
 *      cr_assert_str_eq(str,"");
 *      close(txt);
 *      free(str);
 *  }
 */
