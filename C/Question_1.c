
/*
Author: Satyaki Das
Roll number: 121BM0003
Department: Biomedical Engineering
*/



#include <stdio.h>
#include<stdlib.h>


int main()
{
    int score;
    
    printf("Enter score (0-100):");
    scanf(" %d",&score);
    
    switch( score / 10)
    {
        
        case 10:
        case 9:
        printf("Grade: A1");
        break;
        
        case 8:
        printf("Grade: A2");
        break;
        
        case 7:
        printf("Grade: B1");
        break;
        
        case 6:
        printf("Grade: B2");
        break;
        
        case 5:
        printf("Grade: C");
        break;
        
        default:
        printf("Grade: F");
        break;
    }

    
    return 0;
}











