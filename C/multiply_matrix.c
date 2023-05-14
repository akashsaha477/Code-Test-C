#include <stdio.h>

#define M 3
#define N 2
#define P 4
#define Q 3

int main() {
    int A[M][N], B[P][Q], C[M][Q];

    printf("Enter the elements of the first matrix: \n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: \n");
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize the result
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < Q; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < Q; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The result is: \n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < Q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
