#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    int i=0;

    if (argc < 2){
        printf("Error, please type the password key \n");
        return 0;
    }

    if (strcmp(argv[1], "my-secret-key") == 0) { 
        printf("Congratulations \n");
    } else {
        printf("Try again \n");
    }

    return 0;
}

