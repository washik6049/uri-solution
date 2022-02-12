#include <stdio.h>

int main()
{
    int n, i, b = 0;
    for(i=0; i<5; i++)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            b++;
        }
    }
    printf("%d valores pares\n", b);

    return 0;
}
