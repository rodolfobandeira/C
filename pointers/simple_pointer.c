#include <stdio.h>

int main(int argc, char **argv)
{
    int my_number, my_second_number;
    int *my_pointer; // Pointer to store an address of memory

    my_number = 5;

    my_pointer = &my_number; // Points to my_number address
    my_second_number = *my_pointer; // my_second_number gets the value inside my_pointer address

    printf("%d \n\n", my_second_number); // Prints the value of my_pointer that must be the same as my_number

    return 0;
}
