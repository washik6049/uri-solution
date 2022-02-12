#include <stdio.h>
int main()
{
    double n, c = 0;
    int i, b = 0;
    for(i=1; i<=6; i++)
    {
        scanf("%lf", &n);
        if(n>0)
        {
            b++;
            c = c+n;
        }
    }
    printf("%d valores positivos\n", b);
    printf("%.1lf\n", c/b);
    return 0;
}
