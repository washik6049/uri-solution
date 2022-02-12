#include <stdio.h>

int main()
{
    double salary, value, total;

    char a;

    scanf("%s %lf %lf", &a, &salary, &value);

    total = salary + value * .15;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
