#include <stdio.h>

int getMax(int A[], int n) {
    if (n == 1) {
        return A[0];
    }
    int m = getMax(A, n - 1);
    return (A[n - 1] > m) ? A[n - 1] : m;
}

int main() {
    int n;
    int A[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("The maximum element in the array is: %d\n", getMax(A, n));

    return 0;
}
