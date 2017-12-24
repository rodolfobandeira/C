#include <stdio.h>
#include <stdlib.h> // Memory functions

int main(void) {

    /*
     * malloc
     * calloc
     * realloc
     * free
     *
     * sizeof
     */


    int my_integer_array[10]; // Each int is 4 bytes. So here it must show 40 bytes

    int x;
    double y;

    printf("Size of x: %li bytes \n\n", sizeof(x)); // Must show 4 bytes
    printf("Size of y: %li bytes \n\n", sizeof(y)); // Must show 8 bytes
    printf("Size of my_integer_array: %li bytes \n\n", sizeof(my_integer_array)); // Must show 8 bytes

    return 0;
}
