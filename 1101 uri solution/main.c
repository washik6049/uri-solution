#include <stdio.h>

int main()
{
    int m, n, i, z=0;
    while(1)
    {
        z=0;
        scanf("%d %d", &m, &n);

        if(n==0 || n<0)
        {
            break;
        }
        if(m==0 || m<0)
        {
            break;
        }
        if(n<m)
        {
            for(i=n; i<=m; i++)
            {
                printf("%d ", i);
                z+=i;
            }
            printf("Sum=%d\n", z);
        }
        if(m<n)
        {
            for(i=m; i<=n; i++)
            {
                printf("%d ", i);
                z+=i;
            }
            printf("Sum=%d\n", z);
        }

    }
    return 0;
}
