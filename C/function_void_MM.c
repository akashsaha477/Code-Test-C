#include <stdio.h>

void MM(int** a, int** b, int** c, int m, int n, int l) {
    int i, j, k;
    for (i = 0; i < m; i++) {
        for (j = 0; j < l; j++) {
            *(*(c + i) + j) = 0;
            for (k = 0; k < n; k++) {
                *(*(c + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }
}

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int c[2][2];
    int i, j;

    MM((int**)a, (int**)b, (int**)c, 2, 3, 2);

    printf("Result of matrix multiplication:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
