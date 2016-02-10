#include <stdio.h>

main ()
{
    int x;

    x = - 3 + 4 * 5 - 6;    printf("%d\n", x);
    x = 3 + 4 % 5 - 6;      printf("%d\n", x);
    x = - 3 * 4  % - 6 / 5; printf("%d\n", x);
    x = ( 7 + 6 ) % 5 / 2;  printf("%d\n", x);
}

/*
 * gcc -o operations-1 operations-1.c
 * ./operations-1
 *
 * output:
 *
 * 11
 * 1
 * 0
 * 1
 *
 */
