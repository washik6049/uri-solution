#include <stdio.h>

int main()
{
    int x, y, z=0;
    while(1)
    {
        scanf("%d %d", &x, &y);

        z=x+y;
        if(x==0 && y==0)
        {
            return 0;
        }
        printf("%d\n", z);
    }

    return 0;
}
