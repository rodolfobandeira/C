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

    int *p = (int *) calloc(5, sizeof(int));

    if (p == NULL) {
        printf("Failed to allocate memory \n\n");
        return 0;
    }

    // calloc() automatically assigns a value to the allocated memory.
    // So, we don't need this next like like we do using malloc()
    // *p = 1000;

    printf("%i \n", *p);

    return 0;
}
