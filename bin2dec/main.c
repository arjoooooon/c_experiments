#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    if(argc != 2){
        printf("Binary input required\n");
        return 1;
    }
    
    char* str = argv[1];
    char c = str[0];
    
    int rValue = 0;
    int charCounter = 0;

    while (c != '\0'){
        if(c == '1'){
            rValue += 1 << charCounter;
        } else if (c != '0') {
            printf("Invalid Binary Input\n");
            return 1;
        }

        charCounter++;
        c = str[charCounter];
    }

    printf("%d\n", rValue);
    
    return 0;
}
