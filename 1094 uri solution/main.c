#include <stdio.h>

int main()
{
    int n, i, a, x = 0, y = 0, z = 0;

    char b;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %c", &a, &b);

        if(b=='C')
        {
            x = x + a;
        }
        else if(b=='R')
        {
            y = y + a;
        }
        else if(b=='S')
        {
            z = z + a;
        }
    }

    printf("Total: %d cobaias\n", x+y+z);
    printf("Total de coelhos: %d\n", x);
    printf("Total de ratos: %d\n", y);
    printf("Total de sapos: %d\n", z);
    printf("Percentual de coelhos: %.2lf %%\n", (x*100.00)/(x+y+z));
    printf("Percentual de ratos: %.2lf %%\n", (y*100.00)/(x+y+z));
    printf("Percentual de sapos: %.2lf %%\n", (z*100.00)/(x+y+z));

    return 0;
}
