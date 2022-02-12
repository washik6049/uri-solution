#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 0;

    for(i=1; i<=100; i++)
    {
        scanf("%d", &n);

        if(a<n)
        {
            a = n;
            b = i;
        }
    }

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
