#include<stdio.h>
void printtable(int n);
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
printtable(n);
return 0;
}
void printtable(int n){
    for(int i=1;i<=n;i++){
        printf("%d*%d=%d\n",n,i,n*i);

    }
}