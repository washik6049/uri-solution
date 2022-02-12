#include <stdio.h>

int main()
{
    double x, y=0, z=0;

    while(1)
    {
        if(y==2)
        {
            break;
        }

        scanf("%lf", &x);

        if(x>=0 && x<=10)
        {
            y++;
            z+=x;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2lf\n", z/2);

    return 0;
}
