


#include <stdio.h>

int main()
{
    int A = 10, B = 2, C = 3, D = 4;
    int E = 5, F = 2, G = 3;
    int r;

    r = A + B*C + (D*E) + F*G;
    printf("a. Result = %d\n",r);

    r = A/B*C - B + A*D/3;
    printf("b. Result = %d\n",r);

    printf("c. A+++B---A is not defined in C\n");

    printf("d. J=(i++)+(++i) is not defined in C\n");

    
}
