#include <limits.h>
#include <time.h>
#include <math.h>
#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
    List list;
    List_construct(&list);
    char cmd[100];

    srand(time(0));

    while(1){
        printf("> ");
        scanf("%s", cmd);
        
        if(strcmp(cmd, "ls") == 0){
            List_print(&list);
        } else if(cmd[0] == 'A'){
            int num;
            scanf("%d", &num);
            List_append(&list, num);
        } else if(cmd[0] == 'I') {
            int num, position;
            scanf("%d %d", &num, &position);
            List_insert(&list, num, position);
        } else if(cmd[0] == 'R') {
            int position;
            scanf("%d", &position);
            List_remove(&list, position);
        } else if(strcmp(cmd, "generateRandom") == 0) {
            for(int i = 0; i < 10; i++){
                List_append(&list, rand() % 255);
            }
        } else if(strcmp(cmd, "exit") == 0){
            List_destroy(&list);
            break;
        }
    }

    return 0;
}
