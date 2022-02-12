#include <stdio.h>

int main()
{
    int n, i, x, y, j, z=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);

        if(x==y)
        {
            printf("0\n");
        }
        else if(x>y)
        {
            z=0;
            for(j=y+1;  j<x; j++)
            {
                if(j%2!=0)
                {
                    z+=j;
                }
            }
            printf("%d\n", z);
        }
        else if(y>x)
        {
            z=0;
            for(j=x+1; j<y; j++)
            {
                if(j%2!=0)
                {
                    z+=j;
                }
            }
            printf("%d\n", z);
        }

    }
    return 0;
}
