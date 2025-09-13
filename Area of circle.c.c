#include<stdio.h>
#include<math.h>
int main(){
 int a;
 double b, p;
 printf("enter theradius of the circle:");
 scanf("%d",&a);
 const double PI=3.1459265359;
 b=(double)PI*a*a;
 printf("Area of circle with radius %d is %lf sq units",a,b);



return 0;
}
