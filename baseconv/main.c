#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int characterReference[256];

void constructCharacterReference(){
    for(int i = 0; i < 10; i++){
        characterReference[i] = '0' + i;
    }
    for(char c = 'A'; c < 'G'; c++){
        characterReference[c] = c - 55;
    }
}

int main(int argc, char** argv){
    constructCharacterReference();
    if(strcmp(argv[1], "--help") == 0) {
        printf("USAGE:\n"
            "--help to get help docs for program\n"
            "./main [input] [input_base] [target_base]\n"
            "[input] = input string with number from any base up til hexadecimal\n"
            "[input_base] = base of input\n"
            "[target_base] = base of output\n");
    } else if(argc != 3) {
        printf("Three input arguments required. Use flag --help to read documentation.\n");
        return 1;
    }

    char* input = argv[1];
    char* base = argv[2];
    char* targetBase = argv[3];

    int inputBase = atoi(base);

    return 0;
}
