#include <stdio.h>

int main()
{
    double x, y=0, z=0;

    while(1)
    {
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
        if(y==2)
        {
            printf("media = %.2lf\n", z/2);
            printf("novo calculo (1-sim 2-nao)\n");

            while(1)
            {
                scanf("%lf", &x);

                if((int)x==1)
                {
                    y=z=0;
                    break;
                }
                else if((int)x==2)
                {
                    return 0;
                }
                else
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }

    }

    return 0;
}
