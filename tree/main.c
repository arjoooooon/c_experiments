#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "libtree.h"

#define GEN_LIMIT 10000
#define INPUT_LIMIT 3000

int main(int argc, char** argv){
    Static_Tree static_tree;
    Dynamic_Tree dynamic_tree;
    Static_Tree_Construct(&static_tree);
    Dynamic_Tree_Construct(&dynamic_tree);

    srand(time(0));
    clock_t t;
    double static_time, dynamic_time;

    t = clock();

    for(int i = 0; i < GEN_LIMIT; i++){
        Static_Tree_Insert(&static_tree, rand() % INPUT_LIMIT);
    }

    t = clock() - t;
    static_time = (double)t / CLOCKS_PER_SEC;

    t = clock();

    for(int i = 0; i < GEN_LIMIT; i++){
        Dynamic_Tree_Insert(&dynamic_tree, rand() % INPUT_LIMIT);
    }

    t = clock() - t;
    dynamic_time = (double)t/CLOCKS_PER_SEC;

    printf("Static Tree Insertion Time: %fs\nDynamic Tree Insertion Time: %fs\n", static_time, dynamic_time);

    Static_Tree_Destroy(&static_tree);
    Dynamic_Tree_Destroy(&dynamic_tree);
 
    return EXIT_SUCCESS;
}
