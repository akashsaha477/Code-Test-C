
/*
Author: Satyaki Das
Roll number: 121BM0003
Department: Biomedical Engineering
*/

//program to check leap year

#include <stdio.h>


int main()
{
    int dd, mm, yyyy;
    
    printf("Enter the date in dd mm yyyy format: ");
    scanf(" %d %d %d",&dd, &mm, &yyyy);
    if (dd<=20&&dd>=10)
    printf("%dth",dd);
    else
    { 
        switch (dd % 10)
        {
    
    
        case 1:
        printf(" %dst ",dd);
        break;
        
        case 2:
        printf("%dnd ",dd);
        break;
        
        case 3:
        printf("%drd ",dd);
        break;
        
        default:
        printf("%dth ",dd);
        break;
        }
    }
    switch (mm)
    {
        case 1:
        printf(" January ");
        break;
        
        case 2:
        printf(" February ");
        break;
        
        case 3:
        printf(" March ");
        break;
        
        case 4:
        printf(" April ");
        break;
        
        case 5:
        printf(" May ");
        break;
        
        case 6:
        printf(" June ");
        break;
        
        case 7:
        printf(" July ");
        break;
    
        case 8:
        printf(" August ");
        break;
        
        case 9:
        printf(" September ");
        break;
        
        case 10:
        printf(" October ");
        break;
        
        case 11:
        printf(" November ");
        break;
        case 12:
        printf(" December ");
        break;
        }
    
    printf("%d",yyyy);
    


    
    return 0;
}













