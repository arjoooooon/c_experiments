#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int dims[2];
    int** values;
} Matrix;

int create_matrix(Matrix*, int[2], int*);
int destroy_matrix(Matrix*);
void print_matrix(Matrix*);

int matmul(Matrix*, Matrix*, Matrix*);


#endif
