#include <stdio.h>

int main()
{
    int x, i, y, z=0;

    scanf("%d %d", &x, &y);

    if(x<y)
    {
        for(i=x; i<=y; i++);
        {
           if(i%13!=0)
           {
               z+=i;
           }
        }
       printf("%d\n", z);
    }
    else if(x>y)
    {
        for(i=y; i<=x; i++)
        {
            if(i%13!=0)
            {
                z+=i;
            }
        }
        printf("%d\n", z);
    }

    return 0;
}
