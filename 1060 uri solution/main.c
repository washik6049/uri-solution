#include <stdio.h>
int main()
{
    double n;
    int i,x = 0;
    for(i=1; i<=6; i++)
    {
        scanf("%lf", &n);
        if(n>0)
        {
            x++;
        }
    }
    printf("%d valores positivos\n", x);
    return 0;
}
