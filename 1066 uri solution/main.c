#include <stdio.h>

int main()
{
    int n, i, b = 0, c = 0, d = 0, e = 0;
    for(i=0; i<5; i++)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            b++;
        }
        if(n%2!=0)
        {
            c++;
        }
        if(n>0)
        {
            d++;
        }
        if(n<0)
        {
            e++;
        }
    }
    printf("%d valor(es) par(es)\n", b);
    printf("%d valor(es) impar(es)\n", c);
    printf("%d valor(es) positivo(s)\n", d);
    printf("%d valor(es) negativo(s)\n", e);
    return 0;
}
