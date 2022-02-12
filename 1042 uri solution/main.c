#include<stdio.h>

int main()
{
    int a, b, c, d, e, f, g;

    scanf("%d %d %d", &a, &b, &c);

    d = a;
    e = b;
    f = c;

    if(a > b)
    {
        g = a;
        a = b;
        b = g;
    }
    if(a > c)
    {
        g = a;
        a = c;
        c = g;
    }
    if(b > c)
    {
        g = b;
        b = c;
        c = g;
    }
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", d, e, f);

    return 0;
}
