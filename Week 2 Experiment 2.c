
#include <stdio.h>

int main()
{
    float a,b;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &a);

    b = (a * 9.0 / 5.0) + 32;
    printf("Fahrenheit = %.2f\n",b);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &b);

    a = (b - 32) * 5.0 / 9.0;
    printf("Celsius = %.2f\n", a);

    printf("end of programme\n");
}
