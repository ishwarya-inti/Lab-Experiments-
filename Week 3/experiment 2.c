#include <stdio.h>
#include <math.h>
int main()
{
float p,r,t,CI;
printf("enter principal amount ");
scanf("%f",&p);
printf("enter rate of interest ");
scanf("%f",&r);
printf("enter time period ");
scanf("%f",&t);
CI=p*pow(1+(r/100),t)-p;
printf("compound intrest=%.2f",CI);

}
