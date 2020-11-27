#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "static_tree.h"

//Helper Functions
static void grow(Static_Tree* ref, int inc){
    int prev_depth = ref -> depth;

    ref -> depth += inc;
    ref -> len = (1 << ref -> depth) - 1;
    ref -> arr = realloc(ref -> arr, sizeof(int)*(ref -> len));

    if(NULL == ref -> arr) perror("Failed to grow internal array");

    for(int i = prev_depth; i < ref -> len; i++){
        ref -> arr[i] = INT_MIN;
    }

    //printf("New length: %d\n", ref -> len);
}

static void insert(Static_Tree* ref, int value, int index){
    if(index >= ref -> len) {
        grow(ref, 1);
    }

    if(ref -> arr[index] == INT_MIN) ref -> arr[index] = value;
    else if(value > ref -> arr[index]) insert(ref, value, 2*index+2);
    else insert(ref, value, 2*index+1);
}

//API Functions
void Static_Tree_Construct(Static_Tree* ref) {
    int depth = 2;
    ref -> len = (1 << depth) - 1;
    ref -> arr = (int*)malloc(sizeof(int)*ref -> len);

    for(int i = 0; i < ref -> len; i++){
        (ref -> arr)[i] = INT_MIN;
    }

    ref -> depth = depth;
}

void Static_Tree_Destroy(Static_Tree* ref){
    free(ref -> arr);
}

void Static_Tree_Insert(Static_Tree* ref, int value){
    insert(ref, value, 0);
}
