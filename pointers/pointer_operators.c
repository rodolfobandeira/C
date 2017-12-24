#include <stdio.h>

int main(int argc, char **argv)
{
    int target, source;
    int *m; // Pointer to store an address of memory

    source = 10;
    m = &source; // Gets the address in memory of source
    target = *m; // Gets the value inside the the memory address X

    printf("%d", target);

    return 0;
}
