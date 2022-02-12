#include <stdio.h>

int main()
{
    int n,i,a = 2;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d^%d = %d\n", i,a,i*i);
        }
    }
    return 0;
}
