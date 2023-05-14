#include<stdio.h>
main()

{
    int a,b,temp;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Second value: %d\n",b);
    printf("Before swap: First value = %d, Second value = %d\n",a,b);

    temp=a;
    a=b;
    b=temp;
    printf("After swap: First value = %d, Second value = %d\n",a,b);

    return 0;
}