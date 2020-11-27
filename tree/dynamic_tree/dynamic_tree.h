#ifndef DYNAMIC_TREE_H
#define DYNAMIC_TREE_H

typedef struct Dynamic_Tree_Node Dynamic_Tree_Node;
struct Dynamic_Tree_Node{
    int value;
    Dynamic_Tree_Node* left;
    Dynamic_Tree_Node* right;
};

typedef struct {
    Dynamic_Tree_Node* HEAD;
    int depth;
} Dynamic_Tree;

void Dynamic_Tree_Construct(Dynamic_Tree*);
void Dynamic_Tree_Destroy(Dynamic_Tree*);
void Dynamic_Tree_Insert(Dynamic_Tree*, int);

#endif
