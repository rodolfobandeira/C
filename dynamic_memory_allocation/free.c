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

    // int *p = malloc(sizeof(int)); ---> This would return a *void
    // so, lets fix this casting this memory allocation to Integer Pointer
    int *p = (int *) malloc(sizeof(int));

    *p = 1000; // Clean previous values from memory that was allocated from malloc.

    free(p);

    printf("%i \n", *p);

    return 0;
}
