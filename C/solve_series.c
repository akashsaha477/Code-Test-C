#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    double x, sum = 0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        sum += pow(x, i) / factorial(i);
    }

    printf("The result is: %lf\n", sum);

    return 0;
}
