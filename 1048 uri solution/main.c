#include <stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    if((x>0) && (x<=400.00))
    {
        printf("Novo salario: %.2lf\n", x+(x*.15));
        printf("Reajuste ganho: %.2lf\n", (x*.15));
        printf("Em percentual: 15 %%\n");
    }
    else if((x>=400.01) && (x<=800.00))
    {
        printf("Novo salario: %.2lf\n", x+(x*.12));
        printf("Reajuste ganho: %.2lf\n", (x*.12));
        printf("Em percentual: 12 %%\n");
    }
    else if((x>=800.01) && (x<=1200.00))
    {
        printf("Novo salario: %.2lf\n", x+(x*.10));
        printf("Reajuste ganho: %.2lf\n", (x*.10));
        printf("Em percentual: 10 %%\n");
    }
    else if((x>=1200.01) && (x<=2000.00))
    {
        printf("Novo salario: %.2lf\n", x+(x*.07));
        printf("Reajuste ganho: %.2lf\n", (x*.07));
        printf("Em percentual: 7 %%\n");
    }
    else if(x>=2000.01)
    {
        printf("Novo salario: %.2lf\n", x+(x*.04));
        printf("Reajuste ganho: %.2lf\n", (x*.04));
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
