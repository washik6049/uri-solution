#include <stdio.h>

int main()
{
    int d, m, y;

    scanf("%d/%d/%d", &d, &m, &y);

    if(d<10 && m<10 && y>=10)
    {
        printf("0%d/0%d/%d\n", m, d, y);
        printf("%d/0%d/0%d\n", y, m, d);
        printf("0%d-0%d-%d\n", d, m, y);
    }
    else if(d<10 && m<10 && y<10)
    {
        printf("0%d/0%d/0%d\n", m, d, y);
        printf("0%d/0%d/0%d\n", y, m, d);
        printf("0%d-0%d-0%d\n", d, m, y);
    }
    else if(d<10 && m>=10 && y>=10)
    {
        printf("%d/0%d/%d\n", m, d, y);
        printf("%d/%d/0%d\n", y, m, d);
        printf("0%d-%d-%d\n", d, m, y);
    }
    else if(d>=10 && m<10 && y>=10)
    {
        printf("0%d/%d/%d\n", m, d, y);
        printf("%d/0%d/%d\n", y, m, d);
        printf("%d-0%d-%d\n", d, m, y);
    }
    else if(d>=10 && m>=10 && y<10)
    {
        printf("%d/%d/0%d\n", m, d, y);
        printf("0%d/%d/%d\n", y, m, d);
        printf("%d-%d-0%d\n", d, m, y);
    }
    else if(d<10 && m>=10 && y<10)
    {
        printf("%d/0%d/0%d\n", m, d, y);
        printf("0%d/%d/0%d\n", y, m, d);
        printf("0%d-%d-0%d\n", d, m, y);
    }
    else if(d>=10 && m<10 && y<10)
    {
        printf("0%d/%d/0%d\n", m, d, y);
        printf("0%d/0%d/%d\n", y, m, d);
        printf("%d-0%d-0%d\n", d, m, y);
    }
    else
    {
        printf("%d/%d/%d\n", m, d, y);
        printf("%d/%d/%d\n", y, m, d);
        printf("%d-%d-%d\n", d, m, y);
    }
    return 0;
}
