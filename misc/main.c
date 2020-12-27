#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) {
    if(argc != 2) return 1;
    char password[10] = "easy";

    if(strcmp(password, argv[1]) == 0) {
        printf("Access Granted\n");
    } else {
        printf("Incorrect Password\n");
    }

    return 0;
}
