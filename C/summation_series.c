#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Till what number?");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++){
    sum=sum+i;
    }
    printf("Summation is %d\n",sum);
    return 0;
}