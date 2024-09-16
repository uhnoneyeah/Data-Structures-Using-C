#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void traditionalMultiplication(int **A, int **B, int **C) {
    C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
}

int main() {
    int i, j;
    int **A, **B, **C;

    // Allocate memory for the matrices
    A = (int **)malloc(2 * sizeof(int *));
    B = (int **)malloc(2 * sizeof(int *));
    C = (int **)malloc(2 * sizeof(int *));
    for (i = 0; i < 2; i++) {
        A[i] = (int *)malloc(2 * sizeof(int));
        B[i] = (int *)malloc(2 * sizeof(int));
        C[i] = (int *)malloc(2 * sizeof(int));
    }

    // Input elements for matrix A
    printf("Enter elements for 2x2 matrix A:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for matrix B
    printf("Enter elements for 2x2 matrix B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication using traditional method
    traditionalMultiplication(A, B, C);

    // Output the result
    printf("Resultant matrix C after multiplication:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < 2; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);
getch();
    return 0;
}
