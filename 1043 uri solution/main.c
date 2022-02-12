#include <stdio.h>
int main()
{
    double A, B, C, p, a;
    scanf("%lf %lf %lf", &A, &B, &C);
    if((A<(B+C)) && (B<(A+C)) && (C<(B+A)))
    {
        p = A + B + C;
        printf("Perimetro = %.1lf\n", p);
    }
    else
    {
        a = (((A+B)*C)/2);
        printf("Area = %.1lf\n", a);
    }
    return 0;
}
