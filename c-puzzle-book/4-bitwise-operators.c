#include <stdio.h>
#define PRINT(int) printf("int = %d\n",int)

main()
{
    int x, y, z;

    x = 03; y = 02; z = 01;
    PRINT( x | y & z );
    PRINT( x | y & - z );
    PRINT( x ^ y & - z);
    PRINT( x & y && z );

    x = 1; y = -1;

    PRINT( ! x | x );
    PRINT( - x | x );
    PRINT( x ^ x );

    x <<= 3; PRINT(x);
    y <<= 3; PRINT(y);
    y >>= 3; PRINT(y);
}

/*
 * output:
 * int = 3
 * int = 3
 * int = 1
 * int = 1
 * int = 1
 * int = -1
 * int = 0
 * int = 8
 * int = -8
 * int = -1
 */

