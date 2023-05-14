#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Second value:%d\n",b);
    printf("Before swap: First value=%d, Second value=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: First value=%d, Second value=%d\n",a,b);
    return 0;
}