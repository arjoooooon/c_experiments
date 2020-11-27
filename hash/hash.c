#include "hash.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

uint16_t hash(char* input) {
    uint16_t cummulative = 0;
    while(*input != '\0') {
        cummulative += *input;
        input++;
    }
    

    return cummulative;
}
