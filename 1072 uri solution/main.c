#include <stdio.h>
int main()
{
    int n,i,b=0,c=0,a;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);

        if(a<=20 && a>=10)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    printf("%d in\n", b);

    printf("%d out\n", c);

    return 0;
}
