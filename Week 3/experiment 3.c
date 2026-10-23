#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,A,s;
printf("enter the three lenghts of sides of triangle:");
scanf("%f%f%f",&a,&b,&c);
if(a+b>c && a+c>b && b+c>a )
{
s=(a+b+c)/2;
A=pow(s*(s-a)*(s-b)*(s-c),0.5);
printf("area of triangle is %.2f",A);
}
else
printf("invalid triangle");
}
