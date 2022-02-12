#include <stdio.h>

int main()
{
    int X;

    double Y, Z;

    scanf("%d", &X);

    scanf("%lf", &Y);

    Z=X/Y;

    printf("%.3lf km/l\n", Z);

    return 0;
}
