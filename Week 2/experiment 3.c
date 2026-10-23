

#include <stdio.h>

int main()
{
    float p, r, t, SI;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time period in years: ");
    scanf("%f", &t);

    SI = (p * r * t) / 100;

    printf("Simple Interest = %.2f", SI);

    printf("\nend of programme");
    
}

    
