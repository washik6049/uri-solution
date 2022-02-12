#include <stdio.h>

int main()
{
    int n, i, x, y;
    double z;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);

        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            z = x/(y*1.00);
            printf("%.1lf\n", z);
        }

    }
    return 0;
}
