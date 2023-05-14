
/*
Author: Satyaki Das
Roll number: 121BM0003
Department: Biomedical Engineering
*/

//program to check leap year

#include <stdio.h>


int main()
{
    int year;
    
    printf("Enter the year you want to check: ");
    scanf(" %d",&year);
    
    if (year%400==0)
    printf("%d is a leap year",year);
    else if (year%100==0)
    printf("%d is not a leap year",year);
    else if (year%4==0)
    printf("%d is a leap year",year);
    
    else
    printf(" %d is not a leap year",year);

    
    return 0;
}











