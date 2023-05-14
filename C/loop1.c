#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);

    while(number<=10){
        printf("%d\n",number);
        number++;
    }
    return 0;
} 