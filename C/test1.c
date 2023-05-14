#include<studio.h>
#include<math.h>
int main(){

     //PROGRAM 1
     printf("PROGRAM 1\n");
     int x_1,y_1,x_2,y_2;
     printf("enter abscissa and ordinate of 1st point:");
     scanf("%d%d",&x_1,&y_1);
     printf("enter abscissa and ordinate of 2nd point:");
     scanf("%d%d",&x_2,&y_2); 
     int d;
     d=(x_2 - x_1)*(x_2 - x_1) + (y_2 - y_1)*(y_2 - y_1);
     printf("the square of the distance between two points:%d\n",d);
     printf("\n");


     //PROGRAM 2
     
     int x,y;
     printf("enter two numbers:");
     scanf("%d%d" , &x,&y);
     printf("x=%d   y+%d\n" , x,y);
     printf("sum= %d   difference=%d\n", x+y, x-y);
     printf("product=%d   division=%d\n" , x*y, x/y);


     //PROGRAM 3
     int a,b,c;
     float area=0;
     float s=0;
     printf("enter first side of triangle:");
     scanf("%d", &a);
     printf("enter second side of triangle:");
     scanf("%d", &b);
     printf("enter third side of triangle:");
     scanf("%d", &c);
     s= (a+b+c)/2;
     area= sqrt(s*(s-a)*(s-b)*(s-c));
     printf("area of triangle:%f", area);


     //PROGRAM 4
     printf("*\n");
     printf("*  *\n");
     printf("*  *  *\n");
     printf("*  *  *  *\n");


     //PROGRAM 5
     int a,b,c;
     float x;
     printf("enter three values:");
     scanf("%d%d%d", &a,&b,&c);
     x= a/(b-c);
     printf("value of x: %f", x);

     return 0;     
