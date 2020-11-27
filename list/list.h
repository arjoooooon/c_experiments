#ifndef LIST_H
#define LIST_H

typedef struct Node Node;
struct Node {
   int value;
   Node* next;
};

typedef struct{
    Node* HEAD;
} List;

void List_construct(List*);
void List_destroy(List*);
void List_insert(List*, int, int);
void List_append(List*, int);
void List_remove(List*, int);
void List_print(List*);

#endif
