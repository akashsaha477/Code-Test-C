#include<stdio.h>
int main()
{
    int n,i;
    for(n=1;n<=20;++n){
        for(i=1;i<=10;++i){
                              //for(n=1;n<=20;n=n+1) PREINCREMENT
                              //for(i=1;i<=10;i=i+1)
            printf("%d x %d = %d\n", n,i,n*i);
        }
    }
    return 0;
}