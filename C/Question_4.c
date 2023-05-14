
/*
Author: Satyaki Das
Roll number: 121BM0003
Department: Biomedical Engineering
*/

//program to check leap year

#include <stdio.h>


int main()
{
    float a,b,c;
    
    printf("Enter the sides of triangle:\n ");
    scanf(" %f %f %f",&a, &b, &c);
    
    if (a+b>c && b+c> a && a+c>b)
    printf("The triangle is possible.\n");
    
    else
    {
     printf("The triangle is not possible.\n");
     return 0;
    }
    
    if (a==b && b==c)
    
    printf("Equilateral triangle");
    else if (a!=b && b!=c)
    printf("Scalene triangle");
    else
    printf("Isosceles triangle");

    
    return 0;
}












