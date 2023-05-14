#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>90 || age<18){
        printf("Not eligible to drive");
    }
    else{
        printf("You are eligible to drive.");
    }
    return 0;
}