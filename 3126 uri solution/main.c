#include <stdio.h>

int main()
{
    int n, i, a, j=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a);

        if(a==1)
        {
            j+=a;
        }
    }

    printf("%d\n", j);

    return 0;
}
