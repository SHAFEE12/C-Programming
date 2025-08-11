#include <stdio.h>

#define ROWS 2
#define COLS 3

void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int mat1[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6} };
    int mat2[ROWS][COLS] = { {7, 8, 9}, {10, 11, 12} };
    int result[ROWS][COLS];

    // Performing matrix addition
    addMatrices(mat1, mat2, result);

    // Displaying the result
    printf("Resultant matrix:\n");
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
