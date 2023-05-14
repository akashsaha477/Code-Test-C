
/*
Author: Satyaki Das
Roll number: 121BM0003
Department: Biomedical Engineering
*/



#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, d, e, f;
    
    printf("How many 500 note(s):");
    scanf(" %d",&a);
    
    printf("How many 200 note(s):");
    scanf("%d",&b);

    printf("How many 100 notes(s):");
    scanf("%d",&c);

    printf("How many 50 note(s):");
    scanf("%d",&d);

    printf("How many 20 note(s):");
    scanf("%d",&e);
    
    printf("How many 10 note(s):");
    scanf("%d",&f);
    
    a=a*500;
    b=b*200;
    c=c*100;
    d=d*50;
    e=e*20;
    f=f*10;
    
    
  
    printf("Total Money: Rs %d",a+b+c+d+e+f);


    
    return 0;
}








