#include <stdio.h>
int main()
{
    int a, b, h, c;
    scanf("%d %d", &a, &b);
    h = ((24-a)+b);
    c = (b-a);
    if(a==b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", h);
    }
    else if(a>b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", h);
    }
    else if(b>a)
    {
        printf("O JOGO DUROU %d HORA(S)\n", c);
    }

    return 0;
}
