#include<stdio.h>
int main() {
	int i,j,m=0,n;
	printf("Imagine three dices are rolled at once. The sum of three dice is n. We will count the probability of getting n. So, what number is n?\n");
	scanf("%d",&n);
	for(i=1;i<=6;i++){
		for(j=1;j<=6;j++){
				if(i+j==n){
					m++;
				}
		}
	}
	float p;
	p=m/36.0;
	printf("Probability of getting %d is %f.",n,p);
	return 0;
}
