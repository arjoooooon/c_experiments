#ifndef STATIC_TREE_H
#define STATIC_TREE_H

typedef struct {
    int* arr;
    int len;
    int depth;
} Static_Tree;

void Static_Tree_Construct(Static_Tree*);
void Static_Tree_Destroy(Static_Tree*);
void Static_Tree_Insert(Static_Tree*, int);

#endif
