#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"


int main(int argc, char** argv) {
    Matrix A, B, C;
    create_matrix(&A, (int[]){3,1}, (int[]){1,2,3});
    create_matrix(&B, (int[]){1,3}, (int[]){4,5,6});
    
    print_matrix(&A);
    print_matrix(&B);

    int comp = matmul(&C, &A, &B);
    print_matrix(&C);

    destroy_matrix(&A);
    destroy_matrix(&B);
    destroy_matrix(&C);

    return 0;
}
