#ifndef HASH_H
#define HASH_H

#define HASH_LIMIT 65535

typedef struct {
    int* values;
} HashMap;

int hash(char*);

#endif
