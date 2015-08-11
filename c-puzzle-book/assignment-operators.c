#include <stdio.h>

#define PRINTX printf("%d\n",x)

main()
{
    int x=2, y, z;

    x *= 3 + 2; PRINTX;
    x *= y = z = 4; PRINTX;
    x = y == z; PRINTX;
    x == (y = z ); PRINTX;
}

/*
 * output:
 *
 * 10
 * 40
 * 1
 * 1
 *
 */
