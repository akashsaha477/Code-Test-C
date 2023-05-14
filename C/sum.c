#include<stdio.h>
int main()
{
    int a =4;
    float b =8.5;
    char c = 'u';
    int d = 15;
    int e = 4+15;
    int sum;
    sum=a+d;

    printf("The value of a is %d\n",a);
    printf("The value of b is %f\n",b);
    printf("The value of c is %c\n",c);
    printf("Sum of a and d is %d\n", a+d);
    printf("Sum of a amd d is %d\n",e);
    printf("Sum of a amd d is %d\n",sum);
    printf("%d+%d=%d",a,d,sum);
    return 0;


}