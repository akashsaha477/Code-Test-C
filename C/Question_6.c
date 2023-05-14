
/*
Author: Satyaki Das
Roll number: 121BM0003
Department: Biomedical Engineering
*/



#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x1,x2,y1,y2;
    
    printf("enter the first x co-ordinate x1=");
    scanf(" %d",&x1);
    
    printf("enter the second x co-ordinate x2=");
    scanf("%d",&x2);

    printf("enter the first y co-ordinate y1=");
    scanf("%d",&y1);

    printf("enter the second y co-ordinate y2=");
    scanf("%d",&y2);

    float l=pow(x1-x2,2)+pow(y1-y2,2);
    l=sqrt(l);
    printf("Length = %f",l);


    
    return 0;
}









