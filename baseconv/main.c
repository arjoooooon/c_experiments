#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int characterReference[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int numericalReference[256];

void usage(){
    printf("Usage: ./main [-h] input_base output_base input_value\n");
}

void construct_numerical_reference(){
    for(int c = 0x30; c < 0x3A; c++){
        numericalReference[c] = c - 48;
    }
    for(int c = 0x41;  c < 0x5B; c++){
        numericalReference[c] = c - 55;
    }
}

void swap(char* str) {
    int len = strlen(str);
    for(int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

uint64_t conv_to_decimal(int base, char* input_string) {
    uint64_t modifier = 1;
    uint64_t ret = 0;
    int len = strlen(input_string);
    
    for(int i = len-1; i > -1; i--) {
        if(numericalReference[input_string[i] - 0] >= base) { 
            printf("Input string does not match input base\n");
            exit(1);
        }

        ret += modifier * numericalReference[input_string[i] - 0];
        modifier *= base;
    }

    return ret;
}

char* conv_to_base(int base, uint64_t value) {
    char* output_string = (char*)malloc(sizeof(char) * 256);
    int iter = 0;
    
    while(value >= base) {
        output_string[iter] = characterReference[value % base];
        value /= base;
        iter++;
    }
    output_string[iter] = characterReference[value];
    output_string[iter + 1] = '\0';

    swap(output_string);

    return output_string;
}

int main(int argc, char** argv){
    if(argc == 1) { usage(); return 1; }
    if(strcmp(argv[1], "-h") == 0) { usage(); return 0; }
    if(argc != 4) { usage(); return 1; }
    
    construct_numerical_reference();

    int input_base = atoi(argv[1]);
    int output_base = atoi(argv[2]);
    char* input_string = argv[3];
    
    uint64_t input_value = conv_to_decimal(input_base, input_string);
    
    char* output_string = conv_to_base(output_base, input_value);
    printf("%s\n", output_string);

    free(output_string);

    return 0;
}
