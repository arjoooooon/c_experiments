#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
#include <stdbool.h>

int check_compatibility(Matrix* A, Matrix* B){
    if(A -> dims[1] == B -> dims[0]) return 0;
    return -1;
}

int create_matrix(Matrix* M, int axes[2], int* init_list) {
    M -> dims[0] = axes[0]; M -> dims[1] = axes[1];
    int** outer = (int**)malloc(axes[0] * sizeof(int*));

    for (int row = 0; row < axes[0]; row++) {
        outer[row] = (int*)malloc(axes[1] * sizeof(int));
        for(int col = 0; col < axes[1]; col++) {
            outer[row][col] = init_list[row*axes[1]+col]; 
        }
    }

    M -> values = outer;

    return 0;
}

int destroy_matrix(Matrix* M) {
    for(int row = 0; row < M -> dims[0]; row++) {
        free(M -> values[row]);
    }

    free(M -> values);
    return 0;
}

void print_matrix(Matrix* M) {
    printf("\n");
    for(int row = 0; row < M -> dims[0]; row++){
        printf("| ");
        for(int col = 0; col < M -> dims[1]; col++){
            printf("%d ", M -> values[row][col]);
        }
        printf("|\n");
    }

    printf("\n");
}

int matmul(Matrix* OUT, Matrix* A, Matrix* B){
    if(check_compatibility(A, B) == -1) return -1;
    int dims[2] = {A -> dims[0], B -> dims[1]};
    int* values = (int*)malloc(sizeof(int) * (dims[0] * dims[1]));

    for(int row = 0; row < dims[0]; row++) {
        for(int col = 0; col < dims[1]; col++) {
            int sum  = 0;

            for(int n = 0; n < A -> dims[1]; n++) {
                sum += A -> values[row][n] * B -> values[n][col];
            }

            values[row*dims[0] + col] = sum;
        }
    }

    create_matrix(OUT, dims, values);

    free(values);
    return 0;
}
