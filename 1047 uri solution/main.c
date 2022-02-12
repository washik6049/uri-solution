#include <stdio.h>
int main()
{
    int h1, m1, h2, m2, a, b, c, d;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if ((h1==h2) && (m1==m2))
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(h1<h2)
    {
        a = (h2-h1);
        if(m1==m2)
        {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", a);
        }
        else if(m1<m2)
        {
            c = (m2-m1);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", a, c);
        }
        else if(m1>m2)
        {
            a--;
            d = ((60-m1)+m2);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", a, d);
        }
    }
    else if(h1>h2)
    {
        b = ((24-h1)+h2);
        if(m1==m2)
        {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", b);
        }
        else if(m1<m2)
        {
            c = ((60-m2)+m1);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", b, c);
        }
        else if(m1>m2)
        {
            b--;
            d = ((60-m1)+m2);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", b, d);
        }
    }
    else if((h1==h2) && (m1<m2))
    {
        c = (m2-m1);
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", c);
    }
    else if((h1==h2) && (m1>m2))
    {
        d = ((60-m1)+m2);
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", d);
    }

    return 0;
}
