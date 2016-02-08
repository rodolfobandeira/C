#include <stdio.h>

int main (int argc, char *argv[]) {
    int i=0;
    char password[32];

    if (argc < 2){
        printf("Error, please type the password key \n");
    }

    strcpy(password, argv[1]);

    if (ret == 0) { 
        printf("Congratulations \n");
    } else {
        printf(" \n");
    }

    return 0;
}

