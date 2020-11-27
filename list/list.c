#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void List_construct(List* ref){
     Node* head = (Node*)malloc(sizeof(Node));

     if(NULL == head) {
         perror("Failed to initialize root node");
         return;
     }
    
     head -> value = 0;
     head -> next = NULL;

     ref -> HEAD = head;
}

void List_destroy(List* ref){
    Node* current = ref -> HEAD;
    Node* next = current -> next;

    while(NULL != next -> next){
        free(current);
        current = next;
        next = current -> next;
    }
    free(current);

    current = NULL;
    next = NULL;
}

void List_append(List* ref, int value){
    Node* current = ref -> HEAD;
    while(NULL != current -> next){
        current = current -> next;
    }

    Node* insertion = (Node*)malloc(sizeof(Node));
    
    if(NULL == insertion) {
        perror("Failed to initialize Node");
        return;
    }

    insertion -> value = value;
    insertion -> next = NULL;
    current -> next = insertion;

    return;
}

void List_insert(List* ref, int value, int position){
    if(0 == position){
        Node* n = (Node*)malloc(sizeof(Node));
        n -> value = value;
        n -> next = ref -> HEAD;

        ref -> HEAD = n;
        return;
    }

    Node* current = ref -> HEAD;
    for(int i = 0; i < position-1; i++){
        if(NULL == current -> next) {
            perror("Position out of bounds");
            return;
        }

        current = current -> next;
    }

    if(NULL == current -> next){
        Node* n = (Node*)malloc(sizeof(Node));
        n -> value = value;
        n -> next = NULL;
        current -> next = n;
        return;
    }

    Node* n = (Node*)malloc(sizeof(Node));
    n -> value = value;
    n -> next = current -> next;
    current -> next = n;

    return;
}

void List_remove(List* ref, int position){
    if(position == 0){
        Node* prev = ref -> HEAD;
        ref -> HEAD = ref -> HEAD -> next;
        free(prev);
        return;
    }

    Node* current = ref -> HEAD;
    for(int i = 0; i < position-1; i++){
        if(NULL == current -> next) {
            perror("Position out of bounds");
            return;
        }

        current = current -> next;
    }

    if(NULL == current -> next) {
        perror("Position out of bounds");
        return;
    } else if(NULL == current -> next -> next){
        free(current -> next);
        current -> next = NULL;
    }

    Node* skip = current -> next -> next;
    free(current -> next);
    current -> next = skip;

    return;
}

void List_print(List* ref){
    Node* current = ref -> HEAD;
    printf("[");

    while(NULL != current -> next){
        printf("%d, ", current -> value);
        current = current -> next;
    }

    printf("%d]\n", current -> value);

    return;
}
