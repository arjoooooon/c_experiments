#include <stdlib.h>
#include <limits.h>
#include "dynamic_tree.h"

//Helper Functions
static void clean(Dynamic_Tree_Node* node){
    if(NULL != node -> left) clean(node -> left);
    if(NULL != node -> right) clean(node -> right);
    free(node);
}

static void insert(Dynamic_Tree_Node* node, int insertion){
    if(node -> value == INT_MIN) {
        node -> value = insertion;
        node -> left = (Dynamic_Tree_Node*)malloc(sizeof(Dynamic_Tree_Node));
        node -> right = (Dynamic_Tree_Node*)malloc(sizeof(Dynamic_Tree_Node));

        node -> left -> value = INT_MIN;
        node -> right -> value = INT_MIN;

    }

    else if(node -> value > insertion) insert(node -> right, insertion);
    else insert(node -> left, insertion);


}

//API Functions
void Dynamic_Tree_Construct(Dynamic_Tree* ref){
    ref -> depth = 1;
    ref -> HEAD = (Dynamic_Tree_Node*)malloc(sizeof(Dynamic_Tree_Node));
    ref -> HEAD -> left = NULL;
    ref -> HEAD -> right = NULL;
    ref -> HEAD -> value = INT_MIN;
}

void Dynamic_Tree_Destroy(Dynamic_Tree* ref){
    clean(ref -> HEAD);
}

void Dynamic_Tree_Insert(Dynamic_Tree* ref, int value){
    insert(ref -> HEAD, value);
}
