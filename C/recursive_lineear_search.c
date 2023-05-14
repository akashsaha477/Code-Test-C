#include <stdio.h>

int linear_search(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1;
    }
    if (arr[start] == target) {
        return start;
    }
    return linear_search(arr, start + 1, end, target);
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;

    printf("Enter a target number: ");
    scanf("%d", &target);

    int result = linear_search(arr, 0, 9, target);

    if (result == -1) {
        printf("The target number was not found in the array.\n");
    } else {
        printf("The target number was found at index %d.\n", result);
    }

    return 0;
}
