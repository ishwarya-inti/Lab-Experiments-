

#include <stdio.h>

int main()
{
    float s,t,d;

printf("Enter speed in m/s: ");
scanf("%f", &s);
printf("Enter time in seconds: ");
scanf("%f", &t);
if (s>=0 && t>=0  )
{
d = s*t;
printf("Distance travelled = %.2f meters",d);
}
else
printf("invalid speed or time");
}
