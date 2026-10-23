#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float X,Y;

printf("enter the coffecients of pow(x,2)");
scanf("%f",&a);
printf("enter the coffecients of pow(x,1)");
scanf("%f",&b);
printf("enter the coffecients of pow(x,0)");
scanf("%f",&c);
X=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
Y=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
printf("The roots of quadratic equation are %.2f and %.2f" ,X,Y);
}
