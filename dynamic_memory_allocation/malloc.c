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


    // Dont be stupid. Remember that malloc can't receive a negative number

    // int *p = malloc(sizeof(int)); ---> This would return a *void
    // so, lets fix this casting this memory allocation to Integer Pointer
    int *p = (int *) malloc(sizeof(int));

    if (p == NULL) {
        printf("Failed to allocate memory \n\n");
        return 0;
    }

    *p = 1000; // Clean previous values from memory that was allocated from malloc.

    printf("%i \n", *p);

    return 0;
}
