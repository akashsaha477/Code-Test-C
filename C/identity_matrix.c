#include <stdio.h>

#define N 3

int main() {
    int A[N][N];
    int flag = 1;

    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j && A[i][j] != 1) {
                flag = 0;
                break;
            }
            if (i != j && A[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
