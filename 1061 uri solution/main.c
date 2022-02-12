#include <stdio.h>

int main()
{
    char e[4],f[4];
    int w,x,y,z,a,b,c,d;

    scanf("%s%d",e, &w);
    scanf("%d : %d : %d\n", &x, &y, &z);
    scanf("%s%d",f, &a);
    scanf("%d : %d : %d", &b, &c, &d);

    w = (a-w);
    x = (b-x);
    y = (c-y);
    z = (d-z);

    if(z<0)
    {
        z = (z+60);
        y--;
    }

    if(y<0)
    {
        y = (y+60);
        x--;
    }

    if(x<0)
    {
        x = (x+24);
        w--;
    }

    printf("%d dia(s)\n", w);
    printf("%d hora(s)\n", x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n", z);

    return 0;
}
